
//
// $Id$
//

// ============================================================================
//
// = LIBRARY
//    TAO IDL
//
// = FILENAME
//    cdr_op_ch.cpp
//
// = DESCRIPTION
//    Visitor generating CDR operator declarator for union_branch in the client header
//
// = AUTHOR
//    Aniruddha Gokhale
//
// ============================================================================

#include "be.h"
#include "be_visitor_union_branch.h"
#include "be_visitor_array.h"
#include "be_visitor_enum.h"
#include "be_visitor_sequence.h"
#include "be_visitor_structure.h"
#include "be_visitor_union.h"

ACE_RCSID (be_visitor_union_branch, 
           cdr_op_ch, 
           "$Id$")


// **********************************************
//  Visitor for union_branch in the client header file.
// **********************************************

be_visitor_union_branch_cdr_op_ch::be_visitor_union_branch_cdr_op_ch (
    be_visitor_context *ctx
  )
  : be_visitor_decl (ctx)
{
}

be_visitor_union_branch_cdr_op_ch::~be_visitor_union_branch_cdr_op_ch (void)
{
}

int
be_visitor_union_branch_cdr_op_ch::visit_union_branch (be_union_branch *node)
{
  be_type *bt = be_type::narrow_from_decl (node->field_type ());

  if (!bt)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                         "visit_union_branch - "
                         "Bad union_branch type\n"), 
                        -1);
    }

  this->ctx_->node (node);

  if (bt->accept (this) == -1)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                         "visit_union_branch - "
                         "codegen for union_branch type failed\n"), 
                        -1);
    }

  return 0;
}

// Visit operations on all possible data types that a union_branch can be.

int
be_visitor_union_branch_cdr_op_ch::visit_array (be_array *node)
{
  // If not a typedef and we are defined in the use scope, we must be defined.

  if (!this->ctx_->alias ()
      && node->is_child (this->ctx_->scope ()))
    {
      // This is the case for anonymous arrays.

      be_visitor_context ctx (*this->ctx_);
      ctx.node (node);

      ctx.state (TAO_CodeGen::TAO_ARRAY_CDR_OP_CH);
      be_visitor_array_cdr_op_ch visitor (&ctx);

      if (node->accept (&visitor) == -1)
        {
          ACE_ERROR_RETURN ((LM_ERROR,
                             "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                             "visit_array - "
                             "codegen failed\n"), 
                            -1);
        }
    }

  return 0;
}

int
be_visitor_union_branch_cdr_op_ch::visit_enum (be_enum *node)
{
  // If not a typedef and we are defined in the use scope, we must be defined.
  if (!this->ctx_->alias ()
      && node->is_child (this->ctx_->scope ()))
    {
      be_visitor_context ctx (*this->ctx_);
      ctx.node (node);

      ctx.state (TAO_CodeGen::TAO_ENUM_CDR_OP_CH);
      be_visitor_enum_cdr_op_ch visitor (&ctx);

      if (node->accept (&visitor) == -1)
        {
          ACE_ERROR_RETURN ((LM_ERROR,
                             "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                             "visit_enum - "
                             "codegen failed\n"), 
                            -1);
        }
    }

  return 0;
}

int
be_visitor_union_branch_cdr_op_ch::visit_sequence (be_sequence *node)
{
  // If not a typedef and we are defined in the use scope, we must be defined.
  if (!this->ctx_->alias ()
      && node->is_child (this->ctx_->scope ()))
    {
      be_visitor_context ctx (*this->ctx_);
      ctx.node (node);

      ctx.state (TAO_CodeGen::TAO_SEQUENCE_CDR_OP_CH);
      be_visitor_sequence_cdr_op_ch visitor (&ctx);

      if (node->accept (&visitor) == -1)
        {
          ACE_ERROR_RETURN ((LM_ERROR,
                             "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                             "visit_sequence - "
                             "codegen failed\n"), 
                            -1);
        }
    }

  return 0;
}

int
be_visitor_union_branch_cdr_op_ch::visit_structure (be_structure *node)
{
  // If not a typedef and we are defined in the use scope, we must be defined.
  if (!this->ctx_->alias ()
      && node->is_child (this->ctx_->scope ()))
    {
      be_visitor_context ctx (*this->ctx_);
      ctx.node (node);

      ctx.state (TAO_CodeGen::TAO_STRUCT_CDR_OP_CH);
      be_visitor_structure_cdr_op_ch visitor (&ctx);

      if (node->accept (&visitor) == -1)
        {
          ACE_ERROR_RETURN ((LM_ERROR,
                             "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                             "visit_struct - "
                             "codegen failed\n"), 
                            -1);
        }
    }

  return 0;
}

int
be_visitor_union_branch_cdr_op_ch::visit_typedef (be_typedef *node)
{
  this->ctx_->alias (node);

  be_type *bt = node->primitive_base_type ();

  if (!bt || (bt->accept (this) == -1))
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                         "visit_typedef - "
                         "Bad primitive type\n"), 
                        -1);
    }

  this->ctx_->alias (0);
  return 0;
}

int
be_visitor_union_branch_cdr_op_ch::visit_union (be_union *node)
{
  // If not a typedef and we are defined in the use scope, we must be defined.
  if (!this->ctx_->alias ()
      && node->is_child (this->ctx_->scope ()))
    {
      be_visitor_context ctx (*this->ctx_);
      ctx.node (node);

      ctx.state (TAO_CodeGen::TAO_UNION_CDR_OP_CH);
      be_visitor_union_cdr_op_ch visitor (&ctx);

      if (node->accept (&visitor) == -1)
        {
          ACE_ERROR_RETURN ((LM_ERROR,
                             "(%N:%l) be_visitor_union_branch_cdr_op_ch::"
                             "visit_enum - "
                             "codegen failed\n"), 
                            -1);
        }
    }

  return 0;
}
