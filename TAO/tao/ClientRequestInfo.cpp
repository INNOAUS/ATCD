// -*- C++ -*-
//
// $Id$

#include "ClientRequestInfo.h"
#include "Stub.h"
#include "Tagged_Components.h"

ACE_RCSID (tao, ClientRequestInfo, "$Id$")

#if TAO_HAS_INTERCEPTORS == 1

# if !defined (__ACE_INLINE__)
#   include "ClientRequestInfo.inl"
# endif /* !__ACE_INLINE__ */


TAO_ClientRequestInfo::TAO_ClientRequestInfo (const char * operation,
                                              IOP::ServiceContextList
                                                &service_context_list,
                                              CORBA::Object_ptr target)
  : operation_ (operation),
    service_context_list_ (service_context_list),
    target_ (CORBA::Object::_duplicate (target)),
    caught_exception_ (0),
    response_expected_ (1),
    reply_status_ (-1)
{
}

CORBA::Object_ptr
TAO_ClientRequestInfo::target (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
//   if (this->reply_status_ ==
//       PortableInterceptor::LOCATION_FORWARD_PERMANENT)
//     {
//       // TAO_GIOP_Invocation::forward_reference() already duplicates
//       // the reference before returning it so there is no need to
//       // duplicate it here.
//       return this->invocation_->forward_reference ();
//     }

  return CORBA::Object::_duplicate (this->target_.in ());
}

CORBA::Object_ptr
TAO_ClientRequestInfo::effective_target (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
//   if (this->reply_status_ == PortableInterceptor::LOCATION_FORWARD
//       || this->reply_status_ ==
//            PortableInterceptor::LOCATION_FORWARD_PERMANENT)
//     {
//       // TAO_GIOP_Invocation::forward_reference() already duplicates
//       // the reference before returning it so there is no need to
//       // duplicate it here.
//       return this->invocation_->forward_reference ();
//     }

  return CORBA::Object::_duplicate (this->target_.in ());
}

IOP::TaggedProfile *
TAO_ClientRequestInfo::effective_profile (CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  IOP::TaggedProfile *tagged_profile = 0;
  ACE_NEW_THROW_EX (tagged_profile,
                    IOP::TaggedProfile,
                    CORBA::NO_MEMORY (
                      CORBA::SystemException::_tao_minor_code (
                        TAO_DEFAULT_MINOR_CODE,
                        ENOMEM),
                      CORBA::COMPLETED_NO));
  ACE_CHECK_RETURN (0);

  IOP::TaggedProfile_var safe_tagged_profile = tagged_profile;

  IOP::TaggedProfile &ep =
    this->target_->_stubobj ()->profile_in_use ()->create_tagged_profile ();

  tagged_profile->tag = ep.tag;
  tagged_profile->profile_data = ep.profile_data;  // Deep copy

  return safe_tagged_profile._retn ();
}

// Use at own risk. There is no way currently of extracting an
// exception from an Any. This method is in place just to be compliant
// with the spec.
CORBA::Any *
TAO_ClientRequestInfo::received_exception (CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  // The spec says that if it is a user exception which can't be
  // inserted then the UNKNOWN exception needs to be thrown with minor
  // code TBD_U.

  CORBA::Any * temp = 0;

  ACE_NEW_THROW_EX (temp,
                    CORBA::Any,
                    CORBA::NO_MEMORY (
                      CORBA_SystemException::_tao_minor_code (
                        TAO_DEFAULT_MINOR_CODE,
                        ENOMEM),
                      CORBA::COMPLETED_NO));
  ACE_CHECK_RETURN (0);

  CORBA::Any_var caught_exception = temp;

  if (this->caught_exception_ != 0)
    *temp <<= *(this->caught_exception_);

  return caught_exception._retn ();
}

// = TAO specific method done since there currently is no simple way
//   to extract exceptions from an Any
CORBA::Exception *
TAO_ClientRequestInfo::_received_exception (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return this->caught_exception_;
}

char *
TAO_ClientRequestInfo::received_exception_id (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return CORBA::string_dup (this->caught_exception_->_id ());
}

IOP::TaggedComponent *
TAO_ClientRequestInfo::get_effective_component (
    IOP::ComponentId id,
    CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  IOP::TaggedComponent *tagged_component = 0;
  ACE_NEW_THROW_EX (tagged_component,
                    IOP::TaggedComponent,
                    CORBA::NO_MEMORY (
                      CORBA::SystemException::_tao_minor_code (
                        TAO_DEFAULT_MINOR_CODE,
                        ENOMEM),
                      CORBA::COMPLETED_NO));
  ACE_CHECK_RETURN (0);

  IOP::TaggedComponent_var safe_tagged_component = tagged_component;

  const TAO_Tagged_Components &ecs = 
    this->target_->_stubobj ()->profile_in_use ()->tagged_components ();

  tagged_component->tag = id;

  if (!ecs.get_component (*tagged_component))
    ACE_THROW_RETURN (CORBA::BAD_PARAM (
                        CORBA::SystemException::_tao_minor_code (
                          TAO_DEFAULT_MINOR_CODE,
                          EINVAL),  // @@ Need minor code from PI spec!
                        CORBA::COMPLETED_NO),
                      0);

  return safe_tagged_component._retn ();
}

CORBA::Policy_ptr
TAO_ClientRequestInfo::get_request_policy (CORBA::PolicyType type,
                                           CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  // @@ Do we need to look anywhere else for the request policies?
  return this->target_->_get_policy (type,
                                     ACE_TRY_ENV);
}

void
TAO_ClientRequestInfo::add_request_service_context (
    const IOP::ServiceContext & service_context,
    CORBA::Boolean replace,
    CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  // Copy the service context into the list.
  CORBA::ULong len = this->service_context_list_.length ();

  // First check if a service context with the same ID exists.
  for (CORBA::ULong i = 0; i < len; ++i)
    {
      if (this->service_context_list_[i].context_id ==
          service_context.context_id)
        {
          if (replace)
            {
              this->service_context_list_[i] = service_context;
              return;
            }
          else
            // @@ Need the minor code once it becomes available.
            ACE_THROW (CORBA::BAD_INV_ORDER ());
        }
    }

  // No service context with the given ID exists so add one.
  this->service_context_list_.length (len + 1);

  this->service_context_list_[len] = service_context;
}

CORBA::ULong
TAO_ClientRequestInfo::request_id (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return this->request_id_;
}

char *
TAO_ClientRequestInfo::operation (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return CORBA::string_dup (this->operation_);
}

Dynamic::ParameterList *
TAO_ClientRequestInfo::arguments (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return &this->parameter_list_;
}

Dynamic::ExceptionList *
TAO_ClientRequestInfo::exceptions (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return &this->exception_list_;
}

Dynamic::ContextList *
TAO_ClientRequestInfo::contexts (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return &this->context_list_;
}

Dynamic::RequestContext *
TAO_ClientRequestInfo::operation_context (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return &this->request_context_;
}

CORBA::Any *
TAO_ClientRequestInfo::result (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return 0;
}

CORBA::Boolean
TAO_ClientRequestInfo::response_expected (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return this->response_expected_;
}

# if TAO_HAS_CORBA_MESSAGING == 1
CORBA::Short
TAO_ClientRequestInfo::sync_scope (CORBA::Environment &)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
//   TAO_GIOP_Oneway_Invocation *inv =
//     ACE_dynamic_cast (TAO_GIOP_Oneway_Invocation *,
//                       this->invocation_);

//   // The response_expected_ check is a precautionary measure for
//   // platforms that do not support RTTI, i.e. where the dynamic_cast
//   // above would incorrectly work.  If the response_expected flag is
//   // not equal to zero then it is fairly safe to assume that the
//   // invocation is not a one-way, meaning that the sync_scope() method
//   // is not available.
//   if (inv != 0 && this->response_expected_ == 0)
//     return inv->sync_scope ();

//   ACE_THROW_RETURN (CORBA::BAD_INV_ORDER (), -1);

  return 0;
}
#endif  /* TAO_HAS_CORBA_MESSAGING == 1 */

PortableInterceptor::ReplyStatus
TAO_ClientRequestInfo::reply_status (CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  if (this->reply_status_ == -1)
    // A reply hasn't been received yet.
    ACE_THROW_RETURN (CORBA::BAD_INV_ORDER (), -1);

  return this->reply_status_;
}

CORBA::Object_ptr
TAO_ClientRequestInfo::forward_reference (CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  if (this->reply_status_ != PortableInterceptor::LOCATION_FORWARD
      || this->reply_status_ !=
           PortableInterceptor::LOCATION_FORWARD_PERMANENT)
    ACE_THROW_RETURN (CORBA::BAD_INV_ORDER (),
                      CORBA::Object::_nil ());

//   // TAO_GIOP_Invocation::forward_reference() already duplicates the
//   // reference before returning it so there is no need to duplicate it
//   // here.
//   return this->invocation_->forward_reference ();

  return CORBA::Object::_nil ();
}

CORBA::Any *
TAO_ClientRequestInfo::get_slot (PortableInterceptor::SlotId,
                                 CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   PortableInterceptor::InvalidSlot))
{
  ACE_THROW_RETURN (CORBA::NO_IMPLEMENT (
                      CORBA::SystemException::_tao_minor_code (
                        TAO_DEFAULT_MINOR_CODE,
                        ENOTSUP),
                      CORBA::COMPLETED_NO),
                    0);
}

IOP::ServiceContext *
TAO_ClientRequestInfo::get_request_service_context (
    IOP::ServiceId id,
    CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  CORBA::ULong len = this->service_context_list_.length ();

  for (CORBA::ULong i = 0; i < len; ++i)
    if (this->service_context_list_[i].context_id == id)
      {
        IOP::ServiceContext *service_context = 0;
        ACE_NEW_THROW_EX (service_context,
                          IOP::ServiceContext,
                          CORBA::NO_MEMORY (
                            CORBA::SystemException::_tao_minor_code (
                              TAO_DEFAULT_MINOR_CODE,
                              ENOMEM),
                            CORBA::COMPLETED_NO));
        ACE_CHECK_RETURN (0);

        IOP::ServiceContext_var safe_service_context = service_context;

        (*service_context) = this->service_context_list_[i];

        return safe_service_context._retn ();
      }

  ACE_THROW_RETURN (CORBA::BAD_PARAM (
                      CORBA::SystemException::_tao_minor_code (
                        TAO_DEFAULT_MINOR_CODE,
                        EINVAL), // @@ Need minor code from PI spec!
                      CORBA::COMPLETED_NO),
                    0);
}

IOP::ServiceContext *
TAO_ClientRequestInfo::get_reply_service_context (
    IOP::ServiceId id,
    CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  CORBA::ULong len = this->service_context_list_.length ();

  for (CORBA::ULong i = 0; i < len; ++i)
    if (this->service_context_list_[i].context_id == id)
      {
        IOP::ServiceContext *service_context = 0;
        ACE_NEW_THROW_EX (service_context,
                          IOP::ServiceContext,
                          CORBA::NO_MEMORY (
                            CORBA::SystemException::_tao_minor_code (
                              TAO_DEFAULT_MINOR_CODE,
                              ENOMEM),
                            CORBA::COMPLETED_NO));
        ACE_CHECK_RETURN (0);

        IOP::ServiceContext_var safe_service_context = service_context;

        (*service_context) = this->service_context_list_[i];

        return safe_service_context._retn ();
      }

  ACE_THROW_RETURN (CORBA::BAD_PARAM (
                      CORBA::SystemException::_tao_minor_code (
                        TAO_DEFAULT_MINOR_CODE,
                        EINVAL), // @@ Need minor code from PI spec!
                      CORBA::COMPLETED_NO),
                    0);
}

#endif /* TAO_HAS_INTERCEPTORS == 1 */
