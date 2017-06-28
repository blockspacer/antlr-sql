
// Generated from /home/ubuntu/workspace/Project 3/Parser/c++_src/dml.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "dmlParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by dmlParser.
 */
class  dmlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(dmlParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(dmlParser::ProgramContext *ctx) = 0;

  virtual void enterQuery(dmlParser::QueryContext *ctx) = 0;
  virtual void exitQuery(dmlParser::QueryContext *ctx) = 0;

  virtual void enterRelation_name(dmlParser::Relation_nameContext *ctx) = 0;
  virtual void exitRelation_name(dmlParser::Relation_nameContext *ctx) = 0;

  virtual void enterIdentifier(dmlParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(dmlParser::IdentifierContext *ctx) = 0;

  virtual void enterExpr(dmlParser::ExprContext *ctx) = 0;
  virtual void exitExpr(dmlParser::ExprContext *ctx) = 0;

  virtual void enterAtomicRelationName(dmlParser::AtomicRelationNameContext *ctx) = 0;
  virtual void exitAtomicRelationName(dmlParser::AtomicRelationNameContext *ctx) = 0;

  virtual void enterAtomicParens(dmlParser::AtomicParensContext *ctx) = 0;
  virtual void exitAtomicParens(dmlParser::AtomicParensContext *ctx) = 0;

  virtual void enterSelection(dmlParser::SelectionContext *ctx) = 0;
  virtual void exitSelection(dmlParser::SelectionContext *ctx) = 0;

  virtual void enterCondition(dmlParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(dmlParser::ConditionContext *ctx) = 0;

  virtual void enterConjunction(dmlParser::ConjunctionContext *ctx) = 0;
  virtual void exitConjunction(dmlParser::ConjunctionContext *ctx) = 0;

  virtual void enterComparisonOperation(dmlParser::ComparisonOperationContext *ctx) = 0;
  virtual void exitComparisonOperation(dmlParser::ComparisonOperationContext *ctx) = 0;

  virtual void enterComparisonParens(dmlParser::ComparisonParensContext *ctx) = 0;
  virtual void exitComparisonParens(dmlParser::ComparisonParensContext *ctx) = 0;

  virtual void enterOp(dmlParser::OpContext *ctx) = 0;
  virtual void exitOp(dmlParser::OpContext *ctx) = 0;

  virtual void enterOperand(dmlParser::OperandContext *ctx) = 0;
  virtual void exitOperand(dmlParser::OperandContext *ctx) = 0;

  virtual void enterAttribute_name(dmlParser::Attribute_nameContext *ctx) = 0;
  virtual void exitAttribute_name(dmlParser::Attribute_nameContext *ctx) = 0;

  virtual void enterLiteral(dmlParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(dmlParser::LiteralContext *ctx) = 0;

  virtual void enterProjection(dmlParser::ProjectionContext *ctx) = 0;
  virtual void exitProjection(dmlParser::ProjectionContext *ctx) = 0;

  virtual void enterAttribute_list(dmlParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(dmlParser::Attribute_listContext *ctx) = 0;

  virtual void enterRenaming(dmlParser::RenamingContext *ctx) = 0;
  virtual void exitRenaming(dmlParser::RenamingContext *ctx) = 0;

  virtual void enterUnion1(dmlParser::Union1Context *ctx) = 0;
  virtual void exitUnion1(dmlParser::Union1Context *ctx) = 0;

  virtual void enterDifference(dmlParser::DifferenceContext *ctx) = 0;
  virtual void exitDifference(dmlParser::DifferenceContext *ctx) = 0;

  virtual void enterProduct(dmlParser::ProductContext *ctx) = 0;
  virtual void exitProduct(dmlParser::ProductContext *ctx) = 0;

  virtual void enterNatural_join(dmlParser::Natural_joinContext *ctx) = 0;
  virtual void exitNatural_join(dmlParser::Natural_joinContext *ctx) = 0;

  virtual void enterCommand(dmlParser::CommandContext *ctx) = 0;
  virtual void exitCommand(dmlParser::CommandContext *ctx) = 0;

  virtual void enterOpen_cmd(dmlParser::Open_cmdContext *ctx) = 0;
  virtual void exitOpen_cmd(dmlParser::Open_cmdContext *ctx) = 0;

  virtual void enterClose_cmd(dmlParser::Close_cmdContext *ctx) = 0;
  virtual void exitClose_cmd(dmlParser::Close_cmdContext *ctx) = 0;

  virtual void enterWrite_cmd(dmlParser::Write_cmdContext *ctx) = 0;
  virtual void exitWrite_cmd(dmlParser::Write_cmdContext *ctx) = 0;

  virtual void enterExit_cmd(dmlParser::Exit_cmdContext *ctx) = 0;
  virtual void exitExit_cmd(dmlParser::Exit_cmdContext *ctx) = 0;

  virtual void enterShow_cmd(dmlParser::Show_cmdContext *ctx) = 0;
  virtual void exitShow_cmd(dmlParser::Show_cmdContext *ctx) = 0;

  virtual void enterCreate_cmd(dmlParser::Create_cmdContext *ctx) = 0;
  virtual void exitCreate_cmd(dmlParser::Create_cmdContext *ctx) = 0;

  virtual void enterUpdate_cmd(dmlParser::Update_cmdContext *ctx) = 0;
  virtual void exitUpdate_cmd(dmlParser::Update_cmdContext *ctx) = 0;

  virtual void enterInsert_cmd(dmlParser::Insert_cmdContext *ctx) = 0;
  virtual void exitInsert_cmd(dmlParser::Insert_cmdContext *ctx) = 0;

  virtual void enterDelete_cmd(dmlParser::Delete_cmdContext *ctx) = 0;
  virtual void exitDelete_cmd(dmlParser::Delete_cmdContext *ctx) = 0;

  virtual void enterTyped_attribute_list(dmlParser::Typed_attribute_listContext *ctx) = 0;
  virtual void exitTyped_attribute_list(dmlParser::Typed_attribute_listContext *ctx) = 0;

  virtual void enterType(dmlParser::TypeContext *ctx) = 0;
  virtual void exitType(dmlParser::TypeContext *ctx) = 0;

  virtual void enterInteger(dmlParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(dmlParser::IntegerContext *ctx) = 0;


};

}  // namespace antlrcpptest
