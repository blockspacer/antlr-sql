
// Generated from /home/ubuntu/workspace/Project 3/Parser/c++_src/dml.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "dmlListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of dmlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  dmlBaseListener : public dmlListener {
public:

  virtual void enterProgram(dmlParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(dmlParser::ProgramContext * /*ctx*/) override { }

  virtual void enterQuery(dmlParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(dmlParser::QueryContext * /*ctx*/) override { }

  virtual void enterRelation_name(dmlParser::Relation_nameContext * /*ctx*/) override { }
  virtual void exitRelation_name(dmlParser::Relation_nameContext * /*ctx*/) override { }

  virtual void enterIdentifier(dmlParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(dmlParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterExpr(dmlParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(dmlParser::ExprContext * /*ctx*/) override { }

  virtual void enterAtomicRelationName(dmlParser::AtomicRelationNameContext * /*ctx*/) override { }
  virtual void exitAtomicRelationName(dmlParser::AtomicRelationNameContext * /*ctx*/) override { }

  virtual void enterAtomicParens(dmlParser::AtomicParensContext * /*ctx*/) override { }
  virtual void exitAtomicParens(dmlParser::AtomicParensContext * /*ctx*/) override { }

  virtual void enterSelection(dmlParser::SelectionContext * /*ctx*/) override { }
  virtual void exitSelection(dmlParser::SelectionContext * /*ctx*/) override { }

  virtual void enterCondition(dmlParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(dmlParser::ConditionContext * /*ctx*/) override { }

  virtual void enterConjunction(dmlParser::ConjunctionContext * /*ctx*/) override { }
  virtual void exitConjunction(dmlParser::ConjunctionContext * /*ctx*/) override { }

  virtual void enterComparisonOperation(dmlParser::ComparisonOperationContext * /*ctx*/) override { }
  virtual void exitComparisonOperation(dmlParser::ComparisonOperationContext * /*ctx*/) override { }

  virtual void enterComparisonParens(dmlParser::ComparisonParensContext * /*ctx*/) override { }
  virtual void exitComparisonParens(dmlParser::ComparisonParensContext * /*ctx*/) override { }

  virtual void enterOp(dmlParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(dmlParser::OpContext * /*ctx*/) override { }

  virtual void enterOperand(dmlParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(dmlParser::OperandContext * /*ctx*/) override { }

  virtual void enterAttribute_name(dmlParser::Attribute_nameContext * /*ctx*/) override { }
  virtual void exitAttribute_name(dmlParser::Attribute_nameContext * /*ctx*/) override { }

  virtual void enterLiteral(dmlParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(dmlParser::LiteralContext * /*ctx*/) override { }

  virtual void enterProjection(dmlParser::ProjectionContext * /*ctx*/) override { }
  virtual void exitProjection(dmlParser::ProjectionContext * /*ctx*/) override { }

  virtual void enterAttribute_list(dmlParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(dmlParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterRenaming(dmlParser::RenamingContext * /*ctx*/) override { }
  virtual void exitRenaming(dmlParser::RenamingContext * /*ctx*/) override { }

  virtual void enterUnion1(dmlParser::Union1Context * /*ctx*/) override { }
  virtual void exitUnion1(dmlParser::Union1Context * /*ctx*/) override { }

  virtual void enterDifference(dmlParser::DifferenceContext * /*ctx*/) override { }
  virtual void exitDifference(dmlParser::DifferenceContext * /*ctx*/) override { }

  virtual void enterProduct(dmlParser::ProductContext * /*ctx*/) override { }
  virtual void exitProduct(dmlParser::ProductContext * /*ctx*/) override { }

  virtual void enterNatural_join(dmlParser::Natural_joinContext * /*ctx*/) override { }
  virtual void exitNatural_join(dmlParser::Natural_joinContext * /*ctx*/) override { }

  virtual void enterCommand(dmlParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(dmlParser::CommandContext * /*ctx*/) override { }

  virtual void enterOpen_cmd(dmlParser::Open_cmdContext * /*ctx*/) override { }
  virtual void exitOpen_cmd(dmlParser::Open_cmdContext * /*ctx*/) override { }

  virtual void enterClose_cmd(dmlParser::Close_cmdContext * /*ctx*/) override { }
  virtual void exitClose_cmd(dmlParser::Close_cmdContext * /*ctx*/) override { }

  virtual void enterWrite_cmd(dmlParser::Write_cmdContext * /*ctx*/) override { }
  virtual void exitWrite_cmd(dmlParser::Write_cmdContext * /*ctx*/) override { }

  virtual void enterExit_cmd(dmlParser::Exit_cmdContext * /*ctx*/) override { }
  virtual void exitExit_cmd(dmlParser::Exit_cmdContext * /*ctx*/) override { }

  virtual void enterShow_cmd(dmlParser::Show_cmdContext * /*ctx*/) override { }
  virtual void exitShow_cmd(dmlParser::Show_cmdContext * /*ctx*/) override { }

  virtual void enterCreate_cmd(dmlParser::Create_cmdContext * /*ctx*/) override { }
  virtual void exitCreate_cmd(dmlParser::Create_cmdContext * /*ctx*/) override { }

  virtual void enterUpdate_cmd(dmlParser::Update_cmdContext * /*ctx*/) override { }
  virtual void exitUpdate_cmd(dmlParser::Update_cmdContext * /*ctx*/) override { }

  virtual void enterInsert_cmd(dmlParser::Insert_cmdContext * /*ctx*/) override { }
  virtual void exitInsert_cmd(dmlParser::Insert_cmdContext * /*ctx*/) override { }

  virtual void enterDelete_cmd(dmlParser::Delete_cmdContext * /*ctx*/) override { }
  virtual void exitDelete_cmd(dmlParser::Delete_cmdContext * /*ctx*/) override { }

  virtual void enterTyped_attribute_list(dmlParser::Typed_attribute_listContext * /*ctx*/) override { }
  virtual void exitTyped_attribute_list(dmlParser::Typed_attribute_listContext * /*ctx*/) override { }

  virtual void enterType(dmlParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(dmlParser::TypeContext * /*ctx*/) override { }

  virtual void enterInteger(dmlParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(dmlParser::IntegerContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
