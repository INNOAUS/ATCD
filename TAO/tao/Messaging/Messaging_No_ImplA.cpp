// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "Messaging_No_ImplC.h"
#include "tao/Null_RefCount_Policy.h"
#include "tao/TypeCode_Constants.h"
#include "tao/Alias_TypeCode.h"
#include "tao/Objref_TypeCode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:31

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_Priority (
    "IDL:omg.org/Messaging/Priority:1.0",
    "Priority",
    &::_tao_tc_CORBA::_tc_short);
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_Priority =
    &_tao_tc_Messaging_Priority;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:31

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RebindMode (
    "IDL:omg.org/Messaging/RebindMode:1.0",
    "RebindMode",
    &::_tao_tc_CORBA::_tc_short);
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RebindMode =
    &_tao_tc_Messaging_RebindMode;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:31

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RoutingType (
    "IDL:omg.org/Messaging/RoutingType:1.0",
    "RoutingType",
    &::_tao_tc_CORBA::_tc_short);
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RoutingType =
    &_tao_tc_Messaging_RoutingType;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:31

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_Ordering (
    "IDL:omg.org/Messaging/Ordering:1.0",
    "Ordering",
    &::_tao_tc_CORBA::_tc_ushort);
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_Ordering =
    &_tao_tc_Messaging_Ordering;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RebindPolicy (
    "IDL:omg.org/Messaging/RebindPolicy:1.0",
    "RebindPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RebindPolicy =
    &_tao_tc_Messaging_RebindPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:34

static TAO::TypeCode::Struct_Field<char const *> const _tao_fields_Messaging_PriorityRange[] =
  {
    { "min", &Messaging::_tc_Priority },
    { "max", &Messaging::_tc_Priority }
    
  };

static TAO::TypeCode::Struct<char const *,
                             TAO::TypeCode::Struct_Field<char const *> const *,
                             CORBA::tk_struct,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_PriorityRange (
    "IDL:omg.org/Messaging/PriorityRange:1.0",
    "PriorityRange",
    _tao_fields_Messaging_PriorityRange,
    2);
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_PriorityRange =
    &_tao_tc_Messaging_PriorityRange;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RequestPriorityPolicy (
    "IDL:omg.org/Messaging/RequestPriorityPolicy:1.0",
    "RequestPriorityPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RequestPriorityPolicy =
    &_tao_tc_Messaging_RequestPriorityPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_ReplyPriorityPolicy (
    "IDL:omg.org/Messaging/ReplyPriorityPolicy:1.0",
    "ReplyPriorityPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_ReplyPriorityPolicy =
    &_tao_tc_Messaging_ReplyPriorityPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RequestStartTimePolicy (
    "IDL:omg.org/Messaging/RequestStartTimePolicy:1.0",
    "RequestStartTimePolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RequestStartTimePolicy =
    &_tao_tc_Messaging_RequestStartTimePolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RequestEndTimePolicy (
    "IDL:omg.org/Messaging/RequestEndTimePolicy:1.0",
    "RequestEndTimePolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RequestEndTimePolicy =
    &_tao_tc_Messaging_RequestEndTimePolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_ReplyStartTimePolicy (
    "IDL:omg.org/Messaging/ReplyStartTimePolicy:1.0",
    "ReplyStartTimePolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_ReplyStartTimePolicy =
    &_tao_tc_Messaging_ReplyStartTimePolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_ReplyEndTimePolicy (
    "IDL:omg.org/Messaging/ReplyEndTimePolicy:1.0",
    "ReplyEndTimePolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_ReplyEndTimePolicy =
    &_tao_tc_Messaging_ReplyEndTimePolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RelativeRequestTimeoutPolicy (
    "IDL:omg.org/Messaging/RelativeRequestTimeoutPolicy:1.0",
    "RelativeRequestTimeoutPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RelativeRequestTimeoutPolicy =
    &_tao_tc_Messaging_RelativeRequestTimeoutPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:34

static TAO::TypeCode::Struct_Field<char const *> const _tao_fields_Messaging_RoutingTypeRange[] =
  {
    { "min", &Messaging::_tc_RoutingType },
    { "max", &Messaging::_tc_RoutingType }
    
  };

static TAO::TypeCode::Struct<char const *,
                             TAO::TypeCode::Struct_Field<char const *> const *,
                             CORBA::tk_struct,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RoutingTypeRange (
    "IDL:omg.org/Messaging/RoutingTypeRange:1.0",
    "RoutingTypeRange",
    _tao_fields_Messaging_RoutingTypeRange,
    2);
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RoutingTypeRange =
    &_tao_tc_Messaging_RoutingTypeRange;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_RoutingPolicy (
    "IDL:omg.org/Messaging/RoutingPolicy:1.0",
    "RoutingPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_RoutingPolicy =
    &_tao_tc_Messaging_RoutingPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_MaxHopsPolicy (
    "IDL:omg.org/Messaging/MaxHopsPolicy:1.0",
    "MaxHopsPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_MaxHopsPolicy =
    &_tao_tc_Messaging_MaxHopsPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:73

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_QueueOrderPolicy (
    "IDL:omg.org/Messaging/QueueOrderPolicy:1.0",
    "QueueOrderPolicy");
  
namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_QueueOrderPolicy =
    &_tao_tc_Messaging_QueueOrderPolicy;
}



// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RebindPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RebindPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RebindPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RebindPolicy_ptr _tao_elem
  )
{
  Messaging::RebindPolicy_ptr _tao_objptr =
    Messaging::RebindPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RebindPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::RebindPolicy>::insert (
      _tao_any,
      Messaging::RebindPolicy::_tao_any_destructor,
      Messaging::_tc_RebindPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RebindPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::RebindPolicy>::extract (
        _tao_any,
        Messaging::RebindPolicy::_tao_any_destructor,
        Messaging::_tc_RebindPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Messaging::PriorityRange &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PriorityRange>::insert_copy (
      _tao_any,
      Messaging::PriorityRange::_tao_any_destructor,
      Messaging::_tc_PriorityRange,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Messaging::PriorityRange *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PriorityRange>::insert (
      _tao_any,
      Messaging::PriorityRange::_tao_any_destructor,
      Messaging::_tc_PriorityRange,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::PriorityRange *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const Messaging::PriorityRange *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Messaging::PriorityRange *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Messaging::PriorityRange>::extract (
        _tao_any,
        Messaging::PriorityRange::_tao_any_destructor,
        Messaging::_tc_PriorityRange,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestPriorityPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestPriorityPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestPriorityPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RequestPriorityPolicy_ptr _tao_elem
  )
{
  Messaging::RequestPriorityPolicy_ptr _tao_objptr =
    Messaging::RequestPriorityPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RequestPriorityPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::RequestPriorityPolicy>::insert (
      _tao_any,
      Messaging::RequestPriorityPolicy::_tao_any_destructor,
      Messaging::_tc_RequestPriorityPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RequestPriorityPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::RequestPriorityPolicy>::extract (
        _tao_any,
        Messaging::RequestPriorityPolicy::_tao_any_destructor,
        Messaging::_tc_RequestPriorityPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyPriorityPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyPriorityPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyPriorityPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyPriorityPolicy_ptr _tao_elem
  )
{
  Messaging::ReplyPriorityPolicy_ptr _tao_objptr =
    Messaging::ReplyPriorityPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyPriorityPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::ReplyPriorityPolicy>::insert (
      _tao_any,
      Messaging::ReplyPriorityPolicy::_tao_any_destructor,
      Messaging::_tc_ReplyPriorityPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::ReplyPriorityPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::ReplyPriorityPolicy>::extract (
        _tao_any,
        Messaging::ReplyPriorityPolicy::_tao_any_destructor,
        Messaging::_tc_ReplyPriorityPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestStartTimePolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestStartTimePolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestStartTimePolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RequestStartTimePolicy_ptr _tao_elem
  )
{
  Messaging::RequestStartTimePolicy_ptr _tao_objptr =
    Messaging::RequestStartTimePolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RequestStartTimePolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::RequestStartTimePolicy>::insert (
      _tao_any,
      Messaging::RequestStartTimePolicy::_tao_any_destructor,
      Messaging::_tc_RequestStartTimePolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RequestStartTimePolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::RequestStartTimePolicy>::extract (
        _tao_any,
        Messaging::RequestStartTimePolicy::_tao_any_destructor,
        Messaging::_tc_RequestStartTimePolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestEndTimePolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestEndTimePolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RequestEndTimePolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RequestEndTimePolicy_ptr _tao_elem
  )
{
  Messaging::RequestEndTimePolicy_ptr _tao_objptr =
    Messaging::RequestEndTimePolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RequestEndTimePolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::RequestEndTimePolicy>::insert (
      _tao_any,
      Messaging::RequestEndTimePolicy::_tao_any_destructor,
      Messaging::_tc_RequestEndTimePolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RequestEndTimePolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::RequestEndTimePolicy>::extract (
        _tao_any,
        Messaging::RequestEndTimePolicy::_tao_any_destructor,
        Messaging::_tc_RequestEndTimePolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyStartTimePolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyStartTimePolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyStartTimePolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyStartTimePolicy_ptr _tao_elem
  )
{
  Messaging::ReplyStartTimePolicy_ptr _tao_objptr =
    Messaging::ReplyStartTimePolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyStartTimePolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::ReplyStartTimePolicy>::insert (
      _tao_any,
      Messaging::ReplyStartTimePolicy::_tao_any_destructor,
      Messaging::_tc_ReplyStartTimePolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::ReplyStartTimePolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::ReplyStartTimePolicy>::extract (
        _tao_any,
        Messaging::ReplyStartTimePolicy::_tao_any_destructor,
        Messaging::_tc_ReplyStartTimePolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyEndTimePolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyEndTimePolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyEndTimePolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyEndTimePolicy_ptr _tao_elem
  )
{
  Messaging::ReplyEndTimePolicy_ptr _tao_objptr =
    Messaging::ReplyEndTimePolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyEndTimePolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::ReplyEndTimePolicy>::insert (
      _tao_any,
      Messaging::ReplyEndTimePolicy::_tao_any_destructor,
      Messaging::_tc_ReplyEndTimePolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::ReplyEndTimePolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::ReplyEndTimePolicy>::extract (
        _tao_any,
        Messaging::ReplyEndTimePolicy::_tao_any_destructor,
        Messaging::_tc_ReplyEndTimePolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RelativeRequestTimeoutPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RelativeRequestTimeoutPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RelativeRequestTimeoutPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RelativeRequestTimeoutPolicy_ptr _tao_elem
  )
{
  Messaging::RelativeRequestTimeoutPolicy_ptr _tao_objptr =
    Messaging::RelativeRequestTimeoutPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RelativeRequestTimeoutPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::RelativeRequestTimeoutPolicy>::insert (
      _tao_any,
      Messaging::RelativeRequestTimeoutPolicy::_tao_any_destructor,
      Messaging::_tc_RelativeRequestTimeoutPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RelativeRequestTimeoutPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::RelativeRequestTimeoutPolicy>::extract (
        _tao_any,
        Messaging::RelativeRequestTimeoutPolicy::_tao_any_destructor,
        Messaging::_tc_RelativeRequestTimeoutPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Messaging::RoutingTypeRange &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::RoutingTypeRange>::insert_copy (
      _tao_any,
      Messaging::RoutingTypeRange::_tao_any_destructor,
      Messaging::_tc_RoutingTypeRange,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RoutingTypeRange *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::RoutingTypeRange>::insert (
      _tao_any,
      Messaging::RoutingTypeRange::_tao_any_destructor,
      Messaging::_tc_RoutingTypeRange,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RoutingTypeRange *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const Messaging::RoutingTypeRange *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Messaging::RoutingTypeRange *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Messaging::RoutingTypeRange>::extract (
        _tao_any,
        Messaging::RoutingTypeRange::_tao_any_destructor,
        Messaging::_tc_RoutingTypeRange,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RoutingPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RoutingPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::RoutingPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RoutingPolicy_ptr _tao_elem
  )
{
  Messaging::RoutingPolicy_ptr _tao_objptr =
    Messaging::RoutingPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::RoutingPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::RoutingPolicy>::insert (
      _tao_any,
      Messaging::RoutingPolicy::_tao_any_destructor,
      Messaging::_tc_RoutingPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::RoutingPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::RoutingPolicy>::extract (
        _tao_any,
        Messaging::RoutingPolicy::_tao_any_destructor,
        Messaging::_tc_RoutingPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::MaxHopsPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::MaxHopsPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::MaxHopsPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::MaxHopsPolicy_ptr _tao_elem
  )
{
  Messaging::MaxHopsPolicy_ptr _tao_objptr =
    Messaging::MaxHopsPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::MaxHopsPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::MaxHopsPolicy>::insert (
      _tao_any,
      Messaging::MaxHopsPolicy::_tao_any_destructor,
      Messaging::_tc_MaxHopsPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::MaxHopsPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::MaxHopsPolicy>::extract (
        _tao_any,
        Messaging::MaxHopsPolicy::_tao_any_destructor,
        Messaging::_tc_MaxHopsPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::QueueOrderPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::QueueOrderPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::QueueOrderPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::QueueOrderPolicy_ptr _tao_elem
  )
{
  Messaging::QueueOrderPolicy_ptr _tao_objptr =
    Messaging::QueueOrderPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::QueueOrderPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::QueueOrderPolicy>::insert (
      _tao_any,
      Messaging::QueueOrderPolicy::_tao_any_destructor,
      Messaging::_tc_QueueOrderPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::QueueOrderPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::QueueOrderPolicy>::extract (
        _tao_any,
        Messaging::QueueOrderPolicy::_tao_any_destructor,
        Messaging::_tc_QueueOrderPolicy,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Impl_T<
        Messaging::RebindPolicy
      >;

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::PriorityRange
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::RequestPriorityPolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::ReplyPriorityPolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::RequestStartTimePolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::RequestEndTimePolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::ReplyStartTimePolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::ReplyEndTimePolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::RelativeRequestTimeoutPolicy
      >;

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::RoutingTypeRange
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::RoutingPolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::MaxHopsPolicy
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::QueueOrderPolicy
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::RebindPolicy \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::PriorityRange \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::RequestPriorityPolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::ReplyPriorityPolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::RequestStartTimePolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::RequestEndTimePolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::ReplyStartTimePolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::ReplyEndTimePolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::RelativeRequestTimeoutPolicy \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::RoutingTypeRange \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::RoutingPolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::MaxHopsPolicy \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::QueueOrderPolicy \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
