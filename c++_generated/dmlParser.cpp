
// Generated from /home/ubuntu/workspace/Project 3/Parser/c++_src/dml.g4 by ANTLR 4.7


#include "dmlListener.h"

#include "dmlParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

dmlParser::dmlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

dmlParser::~dmlParser() {
  delete _interpreter;
}

std::string dmlParser::getGrammarFileName() const {
  return "dml.g4";
}

const std::vector<std::string>& dmlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& dmlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

dmlParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::QueryContext *> dmlParser::ProgramContext::query() {
  return getRuleContexts<dmlParser::QueryContext>();
}

dmlParser::QueryContext* dmlParser::ProgramContext::query(size_t i) {
  return getRuleContext<dmlParser::QueryContext>(i);
}

std::vector<dmlParser::CommandContext *> dmlParser::ProgramContext::command() {
  return getRuleContexts<dmlParser::CommandContext>();
}

dmlParser::CommandContext* dmlParser::ProgramContext::command(size_t i) {
  return getRuleContext<dmlParser::CommandContext>(i);
}


size_t dmlParser::ProgramContext::getRuleIndex() const {
  return dmlParser::RuleProgram;
}

void dmlParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void dmlParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

dmlParser::ProgramContext* dmlParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, dmlParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case dmlParser::ALPHA: {
          setState(68);
          query();
          break;
        }

        case dmlParser::T__14:
        case dmlParser::T__15:
        case dmlParser::T__16:
        case dmlParser::T__17:
        case dmlParser::T__18:
        case dmlParser::T__19:
        case dmlParser::T__21:
        case dmlParser::T__25:
        case dmlParser::T__28: {
          setState(69);
          command();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(72); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << dmlParser::T__14)
      | (1ULL << dmlParser::T__15)
      | (1ULL << dmlParser::T__16)
      | (1ULL << dmlParser::T__17)
      | (1ULL << dmlParser::T__18)
      | (1ULL << dmlParser::T__19)
      | (1ULL << dmlParser::T__21)
      | (1ULL << dmlParser::T__25)
      | (1ULL << dmlParser::T__28)
      | (1ULL << dmlParser::ALPHA))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

dmlParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::QueryContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::ExprContext* dmlParser::QueryContext::expr() {
  return getRuleContext<dmlParser::ExprContext>(0);
}


size_t dmlParser::QueryContext::getRuleIndex() const {
  return dmlParser::RuleQuery;
}

void dmlParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void dmlParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}

dmlParser::QueryContext* dmlParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 2, dmlParser::RuleQuery);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    relation_name();
    setState(75);
    match(dmlParser::T__0);
    setState(76);
    expr();
    setState(77);
    match(dmlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relation_nameContext ------------------------------------------------------------------

dmlParser::Relation_nameContext::Relation_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::IdentifierContext* dmlParser::Relation_nameContext::identifier() {
  return getRuleContext<dmlParser::IdentifierContext>(0);
}


size_t dmlParser::Relation_nameContext::getRuleIndex() const {
  return dmlParser::RuleRelation_name;
}

void dmlParser::Relation_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelation_name(this);
}

void dmlParser::Relation_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelation_name(this);
}

dmlParser::Relation_nameContext* dmlParser::relation_name() {
  Relation_nameContext *_localctx = _tracker.createInstance<Relation_nameContext>(_ctx, getState());
  enterRule(_localctx, 4, dmlParser::RuleRelation_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

dmlParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dmlParser::IdentifierContext::ALPHA() {
  return getTokens(dmlParser::ALPHA);
}

tree::TerminalNode* dmlParser::IdentifierContext::ALPHA(size_t i) {
  return getToken(dmlParser::ALPHA, i);
}

std::vector<tree::TerminalNode *> dmlParser::IdentifierContext::DIGIT() {
  return getTokens(dmlParser::DIGIT);
}

tree::TerminalNode* dmlParser::IdentifierContext::DIGIT(size_t i) {
  return getToken(dmlParser::DIGIT, i);
}


size_t dmlParser::IdentifierContext::getRuleIndex() const {
  return dmlParser::RuleIdentifier;
}

void dmlParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void dmlParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

dmlParser::IdentifierContext* dmlParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 6, dmlParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(dmlParser::ALPHA);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::ALPHA

    || _la == dmlParser::DIGIT) {
      setState(82);
      _la = _input->LA(1);
      if (!(_la == dmlParser::ALPHA

      || _la == dmlParser::DIGIT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

dmlParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Atomic_exprContext* dmlParser::ExprContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}

dmlParser::SelectionContext* dmlParser::ExprContext::selection() {
  return getRuleContext<dmlParser::SelectionContext>(0);
}

dmlParser::ProjectionContext* dmlParser::ExprContext::projection() {
  return getRuleContext<dmlParser::ProjectionContext>(0);
}

dmlParser::RenamingContext* dmlParser::ExprContext::renaming() {
  return getRuleContext<dmlParser::RenamingContext>(0);
}

dmlParser::Union1Context* dmlParser::ExprContext::union1() {
  return getRuleContext<dmlParser::Union1Context>(0);
}

dmlParser::DifferenceContext* dmlParser::ExprContext::difference() {
  return getRuleContext<dmlParser::DifferenceContext>(0);
}

dmlParser::ProductContext* dmlParser::ExprContext::product() {
  return getRuleContext<dmlParser::ProductContext>(0);
}

dmlParser::Natural_joinContext* dmlParser::ExprContext::natural_join() {
  return getRuleContext<dmlParser::Natural_joinContext>(0);
}


size_t dmlParser::ExprContext::getRuleIndex() const {
  return dmlParser::RuleExpr;
}

void dmlParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void dmlParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

dmlParser::ExprContext* dmlParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 8, dmlParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      atomic_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      selection();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(90);
      projection();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(91);
      renaming();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(92);
      union1();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(93);
      difference();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(94);
      product();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(95);
      natural_join();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atomic_exprContext ------------------------------------------------------------------

dmlParser::Atomic_exprContext::Atomic_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::Atomic_exprContext::getRuleIndex() const {
  return dmlParser::RuleAtomic_expr;
}

void dmlParser::Atomic_exprContext::copyFrom(Atomic_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtomicParensContext ------------------------------------------------------------------

dmlParser::ExprContext* dmlParser::AtomicParensContext::expr() {
  return getRuleContext<dmlParser::ExprContext>(0);
}

dmlParser::AtomicParensContext::AtomicParensContext(Atomic_exprContext *ctx) { copyFrom(ctx); }

void dmlParser::AtomicParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicParens(this);
}
void dmlParser::AtomicParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicParens(this);
}
//----------------- AtomicRelationNameContext ------------------------------------------------------------------

dmlParser::Relation_nameContext* dmlParser::AtomicRelationNameContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::AtomicRelationNameContext::AtomicRelationNameContext(Atomic_exprContext *ctx) { copyFrom(ctx); }

void dmlParser::AtomicRelationNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicRelationName(this);
}
void dmlParser::AtomicRelationNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicRelationName(this);
}
dmlParser::Atomic_exprContext* dmlParser::atomic_expr() {
  Atomic_exprContext *_localctx = _tracker.createInstance<Atomic_exprContext>(_ctx, getState());
  enterRule(_localctx, 10, dmlParser::RuleAtomic_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::ALPHA: {
        _localctx = dynamic_cast<Atomic_exprContext *>(_tracker.createInstance<dmlParser::AtomicRelationNameContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(98);
        relation_name();
        break;
      }

      case dmlParser::T__2: {
        _localctx = dynamic_cast<Atomic_exprContext *>(_tracker.createInstance<dmlParser::AtomicParensContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(99);
        match(dmlParser::T__2);
        setState(100);
        expr();
        setState(101);
        match(dmlParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionContext ------------------------------------------------------------------

dmlParser::SelectionContext::SelectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::ConditionContext* dmlParser::SelectionContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}

dmlParser::Atomic_exprContext* dmlParser::SelectionContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::SelectionContext::getRuleIndex() const {
  return dmlParser::RuleSelection;
}

void dmlParser::SelectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelection(this);
}

void dmlParser::SelectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelection(this);
}

dmlParser::SelectionContext* dmlParser::selection() {
  SelectionContext *_localctx = _tracker.createInstance<SelectionContext>(_ctx, getState());
  enterRule(_localctx, 12, dmlParser::RuleSelection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(dmlParser::T__4);
    setState(106);
    match(dmlParser::T__2);
    setState(107);
    condition();
    setState(108);
    match(dmlParser::T__3);
    setState(109);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

dmlParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::ConjunctionContext *> dmlParser::ConditionContext::conjunction() {
  return getRuleContexts<dmlParser::ConjunctionContext>();
}

dmlParser::ConjunctionContext* dmlParser::ConditionContext::conjunction(size_t i) {
  return getRuleContext<dmlParser::ConjunctionContext>(i);
}


size_t dmlParser::ConditionContext::getRuleIndex() const {
  return dmlParser::RuleCondition;
}

void dmlParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void dmlParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

dmlParser::ConditionContext* dmlParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 14, dmlParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    conjunction();
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__5) {
      setState(112);
      match(dmlParser::T__5);
      setState(113);
      conjunction();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConjunctionContext ------------------------------------------------------------------

dmlParser::ConjunctionContext::ConjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::ComparisonContext *> dmlParser::ConjunctionContext::comparison() {
  return getRuleContexts<dmlParser::ComparisonContext>();
}

dmlParser::ComparisonContext* dmlParser::ConjunctionContext::comparison(size_t i) {
  return getRuleContext<dmlParser::ComparisonContext>(i);
}


size_t dmlParser::ConjunctionContext::getRuleIndex() const {
  return dmlParser::RuleConjunction;
}

void dmlParser::ConjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConjunction(this);
}

void dmlParser::ConjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConjunction(this);
}

dmlParser::ConjunctionContext* dmlParser::conjunction() {
  ConjunctionContext *_localctx = _tracker.createInstance<ConjunctionContext>(_ctx, getState());
  enterRule(_localctx, 16, dmlParser::RuleConjunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    comparison();
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__6) {
      setState(120);
      match(dmlParser::T__6);
      setState(121);
      comparison();
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

dmlParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::ComparisonContext::getRuleIndex() const {
  return dmlParser::RuleComparison;
}

void dmlParser::ComparisonContext::copyFrom(ComparisonContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ComparisonOperationContext ------------------------------------------------------------------

std::vector<dmlParser::OperandContext *> dmlParser::ComparisonOperationContext::operand() {
  return getRuleContexts<dmlParser::OperandContext>();
}

dmlParser::OperandContext* dmlParser::ComparisonOperationContext::operand(size_t i) {
  return getRuleContext<dmlParser::OperandContext>(i);
}

dmlParser::OpContext* dmlParser::ComparisonOperationContext::op() {
  return getRuleContext<dmlParser::OpContext>(0);
}

dmlParser::ComparisonOperationContext::ComparisonOperationContext(ComparisonContext *ctx) { copyFrom(ctx); }

void dmlParser::ComparisonOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperation(this);
}
void dmlParser::ComparisonOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperation(this);
}
//----------------- ComparisonParensContext ------------------------------------------------------------------

dmlParser::ConditionContext* dmlParser::ComparisonParensContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}

dmlParser::ComparisonParensContext::ComparisonParensContext(ComparisonContext *ctx) { copyFrom(ctx); }

void dmlParser::ComparisonParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonParens(this);
}
void dmlParser::ComparisonParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonParens(this);
}
dmlParser::ComparisonContext* dmlParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 18, dmlParser::RuleComparison);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::WORD:
      case dmlParser::ALPHA:
      case dmlParser::DIGIT: {
        _localctx = dynamic_cast<ComparisonContext *>(_tracker.createInstance<dmlParser::ComparisonOperationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(127);
        operand();
        setState(128);
        op();
        setState(129);
        operand();
        break;
      }

      case dmlParser::T__2: {
        _localctx = dynamic_cast<ComparisonContext *>(_tracker.createInstance<dmlParser::ComparisonParensContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(131);
        match(dmlParser::T__2);
        setState(132);
        condition();
        setState(133);
        match(dmlParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

dmlParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::OpContext::getRuleIndex() const {
  return dmlParser::RuleOp;
}

void dmlParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void dmlParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}

dmlParser::OpContext* dmlParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 20, dmlParser::RuleOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << dmlParser::EQUAL)
      | (1ULL << dmlParser::NOTEQUAL)
      | (1ULL << dmlParser::GREATERTHAN)
      | (1ULL << dmlParser::LESSTHAN)
      | (1ULL << dmlParser::GREATERTHANOREQUAL)
      | (1ULL << dmlParser::LESSTHANOREQUAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

dmlParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Attribute_nameContext* dmlParser::OperandContext::attribute_name() {
  return getRuleContext<dmlParser::Attribute_nameContext>(0);
}

dmlParser::LiteralContext* dmlParser::OperandContext::literal() {
  return getRuleContext<dmlParser::LiteralContext>(0);
}


size_t dmlParser::OperandContext::getRuleIndex() const {
  return dmlParser::RuleOperand;
}

void dmlParser::OperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperand(this);
}

void dmlParser::OperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperand(this);
}

dmlParser::OperandContext* dmlParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 22, dmlParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::ALPHA: {
        enterOuterAlt(_localctx, 1);
        setState(139);
        attribute_name();
        break;
      }

      case dmlParser::WORD:
      case dmlParser::DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(140);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_nameContext ------------------------------------------------------------------

dmlParser::Attribute_nameContext::Attribute_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::IdentifierContext* dmlParser::Attribute_nameContext::identifier() {
  return getRuleContext<dmlParser::IdentifierContext>(0);
}


size_t dmlParser::Attribute_nameContext::getRuleIndex() const {
  return dmlParser::RuleAttribute_name;
}

void dmlParser::Attribute_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_name(this);
}

void dmlParser::Attribute_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_name(this);
}

dmlParser::Attribute_nameContext* dmlParser::attribute_name() {
  Attribute_nameContext *_localctx = _tracker.createInstance<Attribute_nameContext>(_ctx, getState());
  enterRule(_localctx, 24, dmlParser::RuleAttribute_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

dmlParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dmlParser::LiteralContext::WORD() {
  return getToken(dmlParser::WORD, 0);
}

dmlParser::IntegerContext* dmlParser::LiteralContext::integer() {
  return getRuleContext<dmlParser::IntegerContext>(0);
}


size_t dmlParser::LiteralContext::getRuleIndex() const {
  return dmlParser::RuleLiteral;
}

void dmlParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void dmlParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

dmlParser::LiteralContext* dmlParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 26, dmlParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::WORD: {
        enterOuterAlt(_localctx, 1);
        setState(145);
        match(dmlParser::WORD);
        break;
      }

      case dmlParser::DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(146);
        integer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProjectionContext ------------------------------------------------------------------

dmlParser::ProjectionContext::ProjectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Attribute_listContext* dmlParser::ProjectionContext::attribute_list() {
  return getRuleContext<dmlParser::Attribute_listContext>(0);
}

dmlParser::Atomic_exprContext* dmlParser::ProjectionContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::ProjectionContext::getRuleIndex() const {
  return dmlParser::RuleProjection;
}

void dmlParser::ProjectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProjection(this);
}

void dmlParser::ProjectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProjection(this);
}

dmlParser::ProjectionContext* dmlParser::projection() {
  ProjectionContext *_localctx = _tracker.createInstance<ProjectionContext>(_ctx, getState());
  enterRule(_localctx, 28, dmlParser::RuleProjection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(dmlParser::T__7);
    setState(150);
    match(dmlParser::T__2);
    setState(151);
    attribute_list();
    setState(152);
    match(dmlParser::T__3);
    setState(153);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

dmlParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Attribute_nameContext *> dmlParser::Attribute_listContext::attribute_name() {
  return getRuleContexts<dmlParser::Attribute_nameContext>();
}

dmlParser::Attribute_nameContext* dmlParser::Attribute_listContext::attribute_name(size_t i) {
  return getRuleContext<dmlParser::Attribute_nameContext>(i);
}


size_t dmlParser::Attribute_listContext::getRuleIndex() const {
  return dmlParser::RuleAttribute_list;
}

void dmlParser::Attribute_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_list(this);
}

void dmlParser::Attribute_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_list(this);
}

dmlParser::Attribute_listContext* dmlParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 30, dmlParser::RuleAttribute_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    attribute_name();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__8) {
      setState(156);
      match(dmlParser::T__8);
      setState(157);
      attribute_name();
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RenamingContext ------------------------------------------------------------------

dmlParser::RenamingContext::RenamingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Attribute_listContext* dmlParser::RenamingContext::attribute_list() {
  return getRuleContext<dmlParser::Attribute_listContext>(0);
}

dmlParser::Atomic_exprContext* dmlParser::RenamingContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::RenamingContext::getRuleIndex() const {
  return dmlParser::RuleRenaming;
}

void dmlParser::RenamingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRenaming(this);
}

void dmlParser::RenamingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRenaming(this);
}

dmlParser::RenamingContext* dmlParser::renaming() {
  RenamingContext *_localctx = _tracker.createInstance<RenamingContext>(_ctx, getState());
  enterRule(_localctx, 32, dmlParser::RuleRenaming);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(dmlParser::T__9);
    setState(164);
    match(dmlParser::T__2);
    setState(165);
    attribute_list();
    setState(166);
    match(dmlParser::T__3);
    setState(167);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Union1Context ------------------------------------------------------------------

dmlParser::Union1Context::Union1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::Union1Context::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::Union1Context::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::Union1Context::getRuleIndex() const {
  return dmlParser::RuleUnion1;
}

void dmlParser::Union1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnion1(this);
}

void dmlParser::Union1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnion1(this);
}

dmlParser::Union1Context* dmlParser::union1() {
  Union1Context *_localctx = _tracker.createInstance<Union1Context>(_ctx, getState());
  enterRule(_localctx, 34, dmlParser::RuleUnion1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    atomic_expr();
    setState(170);
    match(dmlParser::T__10);
    setState(171);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DifferenceContext ------------------------------------------------------------------

dmlParser::DifferenceContext::DifferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::DifferenceContext::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::DifferenceContext::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::DifferenceContext::getRuleIndex() const {
  return dmlParser::RuleDifference;
}

void dmlParser::DifferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDifference(this);
}

void dmlParser::DifferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDifference(this);
}

dmlParser::DifferenceContext* dmlParser::difference() {
  DifferenceContext *_localctx = _tracker.createInstance<DifferenceContext>(_ctx, getState());
  enterRule(_localctx, 36, dmlParser::RuleDifference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    atomic_expr();
    setState(174);
    match(dmlParser::T__11);
    setState(175);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProductContext ------------------------------------------------------------------

dmlParser::ProductContext::ProductContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::ProductContext::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::ProductContext::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::ProductContext::getRuleIndex() const {
  return dmlParser::RuleProduct;
}

void dmlParser::ProductContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProduct(this);
}

void dmlParser::ProductContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProduct(this);
}

dmlParser::ProductContext* dmlParser::product() {
  ProductContext *_localctx = _tracker.createInstance<ProductContext>(_ctx, getState());
  enterRule(_localctx, 38, dmlParser::RuleProduct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    atomic_expr();
    setState(178);
    match(dmlParser::T__12);
    setState(179);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Natural_joinContext ------------------------------------------------------------------

dmlParser::Natural_joinContext::Natural_joinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::Natural_joinContext::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::Natural_joinContext::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::Natural_joinContext::getRuleIndex() const {
  return dmlParser::RuleNatural_join;
}

void dmlParser::Natural_joinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNatural_join(this);
}

void dmlParser::Natural_joinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNatural_join(this);
}

dmlParser::Natural_joinContext* dmlParser::natural_join() {
  Natural_joinContext *_localctx = _tracker.createInstance<Natural_joinContext>(_ctx, getState());
  enterRule(_localctx, 40, dmlParser::RuleNatural_join);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    atomic_expr();
    setState(182);
    match(dmlParser::T__13);
    setState(183);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

dmlParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Open_cmdContext* dmlParser::CommandContext::open_cmd() {
  return getRuleContext<dmlParser::Open_cmdContext>(0);
}

dmlParser::Close_cmdContext* dmlParser::CommandContext::close_cmd() {
  return getRuleContext<dmlParser::Close_cmdContext>(0);
}

dmlParser::Write_cmdContext* dmlParser::CommandContext::write_cmd() {
  return getRuleContext<dmlParser::Write_cmdContext>(0);
}

dmlParser::Exit_cmdContext* dmlParser::CommandContext::exit_cmd() {
  return getRuleContext<dmlParser::Exit_cmdContext>(0);
}

dmlParser::Show_cmdContext* dmlParser::CommandContext::show_cmd() {
  return getRuleContext<dmlParser::Show_cmdContext>(0);
}

dmlParser::Create_cmdContext* dmlParser::CommandContext::create_cmd() {
  return getRuleContext<dmlParser::Create_cmdContext>(0);
}

dmlParser::Update_cmdContext* dmlParser::CommandContext::update_cmd() {
  return getRuleContext<dmlParser::Update_cmdContext>(0);
}

dmlParser::Insert_cmdContext* dmlParser::CommandContext::insert_cmd() {
  return getRuleContext<dmlParser::Insert_cmdContext>(0);
}

dmlParser::Delete_cmdContext* dmlParser::CommandContext::delete_cmd() {
  return getRuleContext<dmlParser::Delete_cmdContext>(0);
}


size_t dmlParser::CommandContext::getRuleIndex() const {
  return dmlParser::RuleCommand;
}

void dmlParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void dmlParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}

dmlParser::CommandContext* dmlParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 42, dmlParser::RuleCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::T__14: {
        setState(185);
        open_cmd();
        break;
      }

      case dmlParser::T__15: {
        setState(186);
        close_cmd();
        break;
      }

      case dmlParser::T__16: {
        setState(187);
        write_cmd();
        break;
      }

      case dmlParser::T__17: {
        setState(188);
        exit_cmd();
        break;
      }

      case dmlParser::T__18: {
        setState(189);
        show_cmd();
        break;
      }

      case dmlParser::T__19: {
        setState(190);
        create_cmd();
        break;
      }

      case dmlParser::T__21: {
        setState(191);
        update_cmd();
        break;
      }

      case dmlParser::T__25: {
        setState(192);
        insert_cmd();
        break;
      }

      case dmlParser::T__28: {
        setState(193);
        delete_cmd();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(196);
    match(dmlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Open_cmdContext ------------------------------------------------------------------

dmlParser::Open_cmdContext::Open_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Open_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}


size_t dmlParser::Open_cmdContext::getRuleIndex() const {
  return dmlParser::RuleOpen_cmd;
}

void dmlParser::Open_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpen_cmd(this);
}

void dmlParser::Open_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpen_cmd(this);
}

dmlParser::Open_cmdContext* dmlParser::open_cmd() {
  Open_cmdContext *_localctx = _tracker.createInstance<Open_cmdContext>(_ctx, getState());
  enterRule(_localctx, 44, dmlParser::RuleOpen_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(dmlParser::T__14);
    setState(199);
    relation_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Close_cmdContext ------------------------------------------------------------------

dmlParser::Close_cmdContext::Close_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Close_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}


size_t dmlParser::Close_cmdContext::getRuleIndex() const {
  return dmlParser::RuleClose_cmd;
}

void dmlParser::Close_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClose_cmd(this);
}

void dmlParser::Close_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClose_cmd(this);
}

dmlParser::Close_cmdContext* dmlParser::close_cmd() {
  Close_cmdContext *_localctx = _tracker.createInstance<Close_cmdContext>(_ctx, getState());
  enterRule(_localctx, 46, dmlParser::RuleClose_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(dmlParser::T__15);
    setState(202);
    relation_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_cmdContext ------------------------------------------------------------------

dmlParser::Write_cmdContext::Write_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Write_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}


size_t dmlParser::Write_cmdContext::getRuleIndex() const {
  return dmlParser::RuleWrite_cmd;
}

void dmlParser::Write_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWrite_cmd(this);
}

void dmlParser::Write_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWrite_cmd(this);
}

dmlParser::Write_cmdContext* dmlParser::write_cmd() {
  Write_cmdContext *_localctx = _tracker.createInstance<Write_cmdContext>(_ctx, getState());
  enterRule(_localctx, 48, dmlParser::RuleWrite_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(dmlParser::T__16);
    setState(205);
    relation_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exit_cmdContext ------------------------------------------------------------------

dmlParser::Exit_cmdContext::Exit_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::Exit_cmdContext::getRuleIndex() const {
  return dmlParser::RuleExit_cmd;
}

void dmlParser::Exit_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExit_cmd(this);
}

void dmlParser::Exit_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExit_cmd(this);
}

dmlParser::Exit_cmdContext* dmlParser::exit_cmd() {
  Exit_cmdContext *_localctx = _tracker.createInstance<Exit_cmdContext>(_ctx, getState());
  enterRule(_localctx, 50, dmlParser::RuleExit_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(dmlParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Show_cmdContext ------------------------------------------------------------------

dmlParser::Show_cmdContext::Show_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Atomic_exprContext* dmlParser::Show_cmdContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::Show_cmdContext::getRuleIndex() const {
  return dmlParser::RuleShow_cmd;
}

void dmlParser::Show_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShow_cmd(this);
}

void dmlParser::Show_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShow_cmd(this);
}

dmlParser::Show_cmdContext* dmlParser::show_cmd() {
  Show_cmdContext *_localctx = _tracker.createInstance<Show_cmdContext>(_ctx, getState());
  enterRule(_localctx, 52, dmlParser::RuleShow_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(dmlParser::T__18);
    setState(210);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_cmdContext ------------------------------------------------------------------

dmlParser::Create_cmdContext::Create_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Create_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::Typed_attribute_listContext* dmlParser::Create_cmdContext::typed_attribute_list() {
  return getRuleContext<dmlParser::Typed_attribute_listContext>(0);
}

dmlParser::Attribute_listContext* dmlParser::Create_cmdContext::attribute_list() {
  return getRuleContext<dmlParser::Attribute_listContext>(0);
}


size_t dmlParser::Create_cmdContext::getRuleIndex() const {
  return dmlParser::RuleCreate_cmd;
}

void dmlParser::Create_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate_cmd(this);
}

void dmlParser::Create_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate_cmd(this);
}

dmlParser::Create_cmdContext* dmlParser::create_cmd() {
  Create_cmdContext *_localctx = _tracker.createInstance<Create_cmdContext>(_ctx, getState());
  enterRule(_localctx, 54, dmlParser::RuleCreate_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(dmlParser::T__19);
    setState(213);
    relation_name();
    setState(214);
    match(dmlParser::T__2);
    setState(215);
    typed_attribute_list();
    setState(216);
    match(dmlParser::T__3);
    setState(217);
    match(dmlParser::T__20);
    setState(218);
    match(dmlParser::T__2);
    setState(219);
    attribute_list();
    setState(220);
    match(dmlParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Update_cmdContext ------------------------------------------------------------------

dmlParser::Update_cmdContext::Update_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Update_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

std::vector<dmlParser::Attribute_nameContext *> dmlParser::Update_cmdContext::attribute_name() {
  return getRuleContexts<dmlParser::Attribute_nameContext>();
}

dmlParser::Attribute_nameContext* dmlParser::Update_cmdContext::attribute_name(size_t i) {
  return getRuleContext<dmlParser::Attribute_nameContext>(i);
}

std::vector<dmlParser::LiteralContext *> dmlParser::Update_cmdContext::literal() {
  return getRuleContexts<dmlParser::LiteralContext>();
}

dmlParser::LiteralContext* dmlParser::Update_cmdContext::literal(size_t i) {
  return getRuleContext<dmlParser::LiteralContext>(i);
}

dmlParser::ConditionContext* dmlParser::Update_cmdContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}


size_t dmlParser::Update_cmdContext::getRuleIndex() const {
  return dmlParser::RuleUpdate_cmd;
}

void dmlParser::Update_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdate_cmd(this);
}

void dmlParser::Update_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdate_cmd(this);
}

dmlParser::Update_cmdContext* dmlParser::update_cmd() {
  Update_cmdContext *_localctx = _tracker.createInstance<Update_cmdContext>(_ctx, getState());
  enterRule(_localctx, 56, dmlParser::RuleUpdate_cmd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(dmlParser::T__21);
    setState(223);
    relation_name();
    setState(224);
    match(dmlParser::T__22);
    setState(225);
    attribute_name();
    setState(226);
    match(dmlParser::T__23);
    setState(227);
    literal();
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__8) {
      setState(228);
      match(dmlParser::T__8);
      setState(229);
      attribute_name();
      setState(230);
      match(dmlParser::T__23);
      setState(231);
      literal();
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(238);
    match(dmlParser::T__24);
    setState(239);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Insert_cmdContext ------------------------------------------------------------------

dmlParser::Insert_cmdContext::Insert_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Insert_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

std::vector<dmlParser::LiteralContext *> dmlParser::Insert_cmdContext::literal() {
  return getRuleContexts<dmlParser::LiteralContext>();
}

dmlParser::LiteralContext* dmlParser::Insert_cmdContext::literal(size_t i) {
  return getRuleContext<dmlParser::LiteralContext>(i);
}

dmlParser::ExprContext* dmlParser::Insert_cmdContext::expr() {
  return getRuleContext<dmlParser::ExprContext>(0);
}


size_t dmlParser::Insert_cmdContext::getRuleIndex() const {
  return dmlParser::RuleInsert_cmd;
}

void dmlParser::Insert_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsert_cmd(this);
}

void dmlParser::Insert_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsert_cmd(this);
}

dmlParser::Insert_cmdContext* dmlParser::insert_cmd() {
  Insert_cmdContext *_localctx = _tracker.createInstance<Insert_cmdContext>(_ctx, getState());
  enterRule(_localctx, 58, dmlParser::RuleInsert_cmd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(260);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      match(dmlParser::T__25);
      setState(242);
      relation_name();
      setState(243);
      match(dmlParser::T__26);
      setState(244);
      match(dmlParser::T__2);
      setState(245);
      literal();
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dmlParser::T__8) {
        setState(246);
        match(dmlParser::T__8);
        setState(247);
        literal();
        setState(252);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(253);
      match(dmlParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(255);
      match(dmlParser::T__25);
      setState(256);
      relation_name();
      setState(257);
      match(dmlParser::T__27);
      setState(258);
      expr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delete_cmdContext ------------------------------------------------------------------

dmlParser::Delete_cmdContext::Delete_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Delete_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::ConditionContext* dmlParser::Delete_cmdContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}


size_t dmlParser::Delete_cmdContext::getRuleIndex() const {
  return dmlParser::RuleDelete_cmd;
}

void dmlParser::Delete_cmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelete_cmd(this);
}

void dmlParser::Delete_cmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelete_cmd(this);
}

dmlParser::Delete_cmdContext* dmlParser::delete_cmd() {
  Delete_cmdContext *_localctx = _tracker.createInstance<Delete_cmdContext>(_ctx, getState());
  enterRule(_localctx, 60, dmlParser::RuleDelete_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    match(dmlParser::T__28);
    setState(263);
    relation_name();
    setState(264);
    match(dmlParser::T__24);
    setState(265);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Typed_attribute_listContext ------------------------------------------------------------------

dmlParser::Typed_attribute_listContext::Typed_attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Attribute_nameContext *> dmlParser::Typed_attribute_listContext::attribute_name() {
  return getRuleContexts<dmlParser::Attribute_nameContext>();
}

dmlParser::Attribute_nameContext* dmlParser::Typed_attribute_listContext::attribute_name(size_t i) {
  return getRuleContext<dmlParser::Attribute_nameContext>(i);
}

std::vector<dmlParser::TypeContext *> dmlParser::Typed_attribute_listContext::type() {
  return getRuleContexts<dmlParser::TypeContext>();
}

dmlParser::TypeContext* dmlParser::Typed_attribute_listContext::type(size_t i) {
  return getRuleContext<dmlParser::TypeContext>(i);
}


size_t dmlParser::Typed_attribute_listContext::getRuleIndex() const {
  return dmlParser::RuleTyped_attribute_list;
}

void dmlParser::Typed_attribute_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTyped_attribute_list(this);
}

void dmlParser::Typed_attribute_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTyped_attribute_list(this);
}

dmlParser::Typed_attribute_listContext* dmlParser::typed_attribute_list() {
  Typed_attribute_listContext *_localctx = _tracker.createInstance<Typed_attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 62, dmlParser::RuleTyped_attribute_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    attribute_name();
    setState(268);
    type();
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__8) {
      setState(269);
      match(dmlParser::T__8);
      setState(270);
      attribute_name();
      setState(271);
      type();
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

dmlParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::IntegerContext* dmlParser::TypeContext::integer() {
  return getRuleContext<dmlParser::IntegerContext>(0);
}


size_t dmlParser::TypeContext::getRuleIndex() const {
  return dmlParser::RuleType;
}

void dmlParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void dmlParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

dmlParser::TypeContext* dmlParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 64, dmlParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(284);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(278);
        match(dmlParser::T__29);
        setState(279);
        match(dmlParser::T__2);
        setState(280);
        integer();
        setState(281);
        match(dmlParser::T__3);
        break;
      }

      case dmlParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(283);
        match(dmlParser::T__30);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

dmlParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dmlParser::IntegerContext::DIGIT() {
  return getTokens(dmlParser::DIGIT);
}

tree::TerminalNode* dmlParser::IntegerContext::DIGIT(size_t i) {
  return getToken(dmlParser::DIGIT, i);
}


size_t dmlParser::IntegerContext::getRuleIndex() const {
  return dmlParser::RuleInteger;
}

void dmlParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void dmlParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dmlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

dmlParser::IntegerContext* dmlParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 66, dmlParser::RuleInteger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(286);
      match(dmlParser::DIGIT);
      setState(289); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dmlParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> dmlParser::_decisionToDFA;
atn::PredictionContextCache dmlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN dmlParser::_atn;
std::vector<uint16_t> dmlParser::_serializedATN;

std::vector<std::string> dmlParser::_ruleNames = {
  "program", "query", "relation_name", "identifier", "expr", "atomic_expr", 
  "selection", "condition", "conjunction", "comparison", "op", "operand", 
  "attribute_name", "literal", "projection", "attribute_list", "renaming", 
  "union1", "difference", "product", "natural_join", "command", "open_cmd", 
  "close_cmd", "write_cmd", "exit_cmd", "show_cmd", "create_cmd", "update_cmd", 
  "insert_cmd", "delete_cmd", "typed_attribute_list", "type", "integer"
};

std::vector<std::string> dmlParser::_literalNames = {
  "", "' <- '", "';'", "'('", "')'", "'select'", "' || '", "' && '", "'project'", 
  "','", "'rename'", "'+'", "'-'", "'*'", "'&'", "'OPEN'", "'CLOSE'", "'WRITE'", 
  "'EXIT'", "'SHOW'", "'CREATE TABLE'", "'PRIMARY KEY'", "'UPDATE'", "'SET'", 
  "'='", "'WHERE'", "'INSERT INTO'", "'VALUES FROM'", "'VALUES FROM RELATION'", 
  "'DELETE FROM'", "'VARCHAR'", "'INTEGER'", "", "", "", "'=='", "'!='", 
  "'>'", "'<'", "'<='", "'>='"
};

std::vector<std::string> dmlParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "WORD", "ALPHA", 
  "DIGIT", "EQUAL", "NOTEQUAL", "GREATERTHAN", "LESSTHAN", "GREATERTHANOREQUAL", 
  "LESSTHANOREQUAL", "WS"
};

dfa::Vocabulary dmlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> dmlParser::_tokenNames;

dmlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2b, 0x126, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x49, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x4a, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x56, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x59, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x63, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x6a, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x75, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x78, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7d, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x80, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x8a, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x90, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x96, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xa1, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0xa4, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x5, 0x17, 0xc5, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x7, 0x1e, 0xec, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0xef, 0xb, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0xfb, 0xa, 0x1f, 
    0xc, 0x1f, 0xe, 0x1f, 0xfe, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x107, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x114, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x117, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x11f, 0xa, 0x22, 
    0x3, 0x23, 0x6, 0x23, 0x122, 0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 0x123, 
    0x3, 0x23, 0x2, 0x2, 0x24, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x2, 0x4, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 0x25, 0x2a, 0x2, 
    0x122, 0x2, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x51, 0x3, 0x2, 0x2, 0x2, 0x8, 0x53, 0x3, 0x2, 0x2, 0x2, 0xa, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x71, 0x3, 0x2, 0x2, 0x2, 0x12, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x89, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x91, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x97, 0x3, 0x2, 0x2, 0x2, 0x20, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x24, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x30, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xce, 0x3, 0x2, 0x2, 0x2, 0x34, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0x38, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x106, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x121, 0x3, 0x2, 0x2, 0x2, 0x46, 0x49, 0x5, 0x4, 0x3, 
    0x2, 0x47, 0x49, 0x5, 0x2c, 0x17, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4e, 0x7, 
    0x3, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0xa, 0x6, 0x2, 0x4f, 0x50, 0x7, 0x4, 
    0x2, 0x2, 0x50, 0x5, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0x8, 0x5, 
    0x2, 0x52, 0x7, 0x3, 0x2, 0x2, 0x2, 0x53, 0x57, 0x7, 0x23, 0x2, 0x2, 
    0x54, 0x56, 0x9, 0x2, 0x2, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x9, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x63, 0x5, 0xc, 0x7, 0x2, 0x5b, 0x63, 0x5, 0xe, 
    0x8, 0x2, 0x5c, 0x63, 0x5, 0x1e, 0x10, 0x2, 0x5d, 0x63, 0x5, 0x22, 0x12, 
    0x2, 0x5e, 0x63, 0x5, 0x24, 0x13, 0x2, 0x5f, 0x63, 0x5, 0x26, 0x14, 
    0x2, 0x60, 0x63, 0x5, 0x28, 0x15, 0x2, 0x61, 0x63, 0x5, 0x2a, 0x16, 
    0x2, 0x62, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x6a, 0x5, 0x6, 0x4, 0x2, 0x65, 0x66, 0x7, 0x5, 
    0x2, 0x2, 0x66, 0x67, 0x5, 0xa, 0x6, 0x2, 0x67, 0x68, 0x7, 0x6, 0x2, 
    0x2, 0x68, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0x7, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x5, 0x2, 0x2, 0x6d, 0x6e, 
    0x5, 0x10, 0x9, 0x2, 0x6e, 0x6f, 0x7, 0x6, 0x2, 0x2, 0x6f, 0x70, 0x5, 
    0xc, 0x7, 0x2, 0x70, 0xf, 0x3, 0x2, 0x2, 0x2, 0x71, 0x76, 0x5, 0x12, 
    0xa, 0x2, 0x72, 0x73, 0x7, 0x8, 0x2, 0x2, 0x73, 0x75, 0x5, 0x12, 0xa, 
    0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7e, 
    0x5, 0x14, 0xb, 0x2, 0x7a, 0x7b, 0x7, 0x9, 0x2, 0x2, 0x7b, 0x7d, 0x5, 
    0x14, 0xb, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x82, 0x5, 0x18, 0xd, 0x2, 0x82, 0x83, 0x5, 0x16, 0xc, 0x2, 0x83, 
    0x84, 0x5, 0x18, 0xd, 0x2, 0x84, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 
    0x7, 0x5, 0x2, 0x2, 0x86, 0x87, 0x5, 0x10, 0x9, 0x2, 0x87, 0x88, 0x7, 
    0x6, 0x2, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8c, 0x9, 0x3, 0x2, 0x2, 0x8c, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x90, 0x5, 0x1a, 0xe, 0x2, 0x8e, 0x90, 0x5, 0x1c, 0xf, 0x2, 0x8f, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x5, 0x8, 0x5, 0x2, 0x92, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x96, 0x7, 0x22, 0x2, 0x2, 0x94, 0x96, 0x5, 0x44, 
    0x23, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0xa, 0x2, 0x2, 
    0x98, 0x99, 0x7, 0x5, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x20, 0x11, 0x2, 0x9a, 
    0x9b, 0x7, 0x6, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0xc, 0x7, 0x2, 0x9c, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0xa2, 0x5, 0x1a, 0xe, 0x2, 0x9e, 0x9f, 0x7, 
    0xb, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0x1a, 0xe, 0x2, 0xa0, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0xc, 0x2, 0x2, 0xa6, 
    0xa7, 0x7, 0x5, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x20, 0x11, 0x2, 0xa8, 0xa9, 
    0x7, 0x6, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0xc, 0x7, 0x2, 0xaa, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x5, 0xc, 0x7, 0x2, 0xac, 0xad, 0x7, 0xd, 
    0x2, 0x2, 0xad, 0xae, 0x5, 0xc, 0x7, 0x2, 0xae, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb0, 0x5, 0xc, 0x7, 0x2, 0xb0, 0xb1, 0x7, 0xe, 0x2, 0x2, 
    0xb1, 0xb2, 0x5, 0xc, 0x7, 0x2, 0xb2, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb4, 0x5, 0xc, 0x7, 0x2, 0xb4, 0xb5, 0x7, 0xf, 0x2, 0x2, 0xb5, 0xb6, 
    0x5, 0xc, 0x7, 0x2, 0xb6, 0x29, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x5, 
    0xc, 0x7, 0x2, 0xb8, 0xb9, 0x7, 0x10, 0x2, 0x2, 0xb9, 0xba, 0x5, 0xc, 
    0x7, 0x2, 0xba, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xc5, 0x5, 0x2e, 0x18, 
    0x2, 0xbc, 0xc5, 0x5, 0x30, 0x19, 0x2, 0xbd, 0xc5, 0x5, 0x32, 0x1a, 
    0x2, 0xbe, 0xc5, 0x5, 0x34, 0x1b, 0x2, 0xbf, 0xc5, 0x5, 0x36, 0x1c, 
    0x2, 0xc0, 0xc5, 0x5, 0x38, 0x1d, 0x2, 0xc1, 0xc5, 0x5, 0x3a, 0x1e, 
    0x2, 0xc2, 0xc5, 0x5, 0x3c, 0x1f, 0x2, 0xc3, 0xc5, 0x5, 0x3e, 0x20, 
    0x2, 0xc4, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x4, 
    0x2, 0x2, 0xc7, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x11, 0x2, 
    0x2, 0xc9, 0xca, 0x5, 0x6, 0x4, 0x2, 0xca, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x7, 0x12, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x6, 0x4, 0x2, 0xcd, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x13, 0x2, 0x2, 0xcf, 0xd0, 
    0x5, 0x6, 0x4, 0x2, 0xd0, 0x33, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 
    0x14, 0x2, 0x2, 0xd2, 0x35, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x15, 
    0x2, 0x2, 0xd4, 0xd5, 0x5, 0xc, 0x7, 0x2, 0xd5, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0xd6, 0xd7, 0x7, 0x16, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x6, 0x4, 0x2, 
    0xd8, 0xd9, 0x7, 0x5, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x40, 0x21, 0x2, 0xda, 
    0xdb, 0x7, 0x6, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x17, 0x2, 0x2, 0xdc, 0xdd, 
    0x7, 0x5, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x20, 0x11, 0x2, 0xde, 0xdf, 0x7, 
    0x6, 0x2, 0x2, 0xdf, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x18, 
    0x2, 0x2, 0xe1, 0xe2, 0x5, 0x6, 0x4, 0x2, 0xe2, 0xe3, 0x7, 0x19, 0x2, 
    0x2, 0xe3, 0xe4, 0x5, 0x1a, 0xe, 0x2, 0xe4, 0xe5, 0x7, 0x1a, 0x2, 0x2, 
    0xe5, 0xed, 0x5, 0x1c, 0xf, 0x2, 0xe6, 0xe7, 0x7, 0xb, 0x2, 0x2, 0xe7, 
    0xe8, 0x5, 0x1a, 0xe, 0x2, 0xe8, 0xe9, 0x7, 0x1a, 0x2, 0x2, 0xe9, 0xea, 
    0x5, 0x1c, 0xf, 0x2, 0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x1b, 0x2, 0x2, 
    0xf1, 0xf2, 0x5, 0x10, 0x9, 0x2, 0xf2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x7, 0x1c, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x6, 0x4, 0x2, 0xf5, 0xf6, 
    0x7, 0x1d, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x5, 0x2, 0x2, 0xf7, 0xfc, 0x5, 
    0x1c, 0xf, 0x2, 0xf8, 0xf9, 0x7, 0xb, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0x1c, 
    0xf, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x100, 0x7, 0x6, 0x2, 0x2, 0x100, 0x107, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x102, 0x7, 0x1c, 0x2, 0x2, 0x102, 0x103, 0x5, 0x6, 0x4, 0x2, 0x103, 
    0x104, 0x7, 0x1e, 0x2, 0x2, 0x104, 0x105, 0x5, 0xa, 0x6, 0x2, 0x105, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x106, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x106, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x7, 
    0x1f, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x6, 0x4, 0x2, 0x10a, 0x10b, 0x7, 
    0x1b, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x10, 0x9, 0x2, 0x10c, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x1a, 0xe, 0x2, 0x10e, 0x115, 0x5, 
    0x42, 0x22, 0x2, 0x10f, 0x110, 0x7, 0xb, 0x2, 0x2, 0x110, 0x111, 0x5, 
    0x1a, 0xe, 0x2, 0x111, 0x112, 0x5, 0x42, 0x22, 0x2, 0x112, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x114, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x41, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x119, 0x7, 0x20, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x5, 
    0x2, 0x2, 0x11a, 0x11b, 0x5, 0x44, 0x23, 0x2, 0x11b, 0x11c, 0x7, 0x6, 
    0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11f, 0x7, 0x21, 
    0x2, 0x2, 0x11e, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x43, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 0x7, 0x24, 
    0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x45, 0x3, 0x2, 0x2, 0x2, 0x14, 0x48, 0x4a, 0x57, 0x62, 
    0x69, 0x76, 0x7e, 0x89, 0x8f, 0x95, 0xa2, 0xc4, 0xed, 0xfc, 0x106, 0x115, 
    0x11e, 0x123, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

dmlParser::Initializer dmlParser::_init;
