
// Generated from Calc.g4 by ANTLR 4.7.1


#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalcParser::CalcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

CalcParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::StatContext *> CalcParser::ProgContext::stat() {
  return getRuleContexts<CalcParser::StatContext>();
}

CalcParser::StatContext* CalcParser::ProgContext::stat(size_t i) {
  return getRuleContext<CalcParser::StatContext>(i);
}


size_t CalcParser::ProgContext::getRuleIndex() const {
  return CalcParser::RuleProg;
}

antlrcpp::Any CalcParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ProgContext* CalcParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      stat();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CalcParser::SUB)
      | (1ULL << CalcParser::LPAR)
      | (1ULL << CalcParser::IF)
      | (1ULL << CalcParser::WHILE)
      | (1ULL << CalcParser::MAXFUN)
      | (1ULL << CalcParser::NOT)
      | (1ULL << CalcParser::ID)
      | (1ULL << CalcParser::INT)
      | (1ULL << CalcParser::NEWLINE))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

CalcParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::StatContext::getRuleIndex() const {
  return CalcParser::RuleStat;
}

void CalcParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintExprBoolContext ------------------------------------------------------------------

CalcParser::ExprBoolContext* CalcParser::PrintExprBoolContext::exprBool() {
  return getRuleContext<CalcParser::ExprBoolContext>(0);
}

tree::TerminalNode* CalcParser::PrintExprBoolContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::PrintExprBoolContext::PrintExprBoolContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::PrintExprBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrintExprBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::BlankContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::WhileContext::WHILE() {
  return getToken(CalcParser::WHILE, 0);
}

tree::TerminalNode* CalcParser::WhileContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

CalcParser::ExprBoolContext* CalcParser::WhileContext::exprBool() {
  return getRuleContext<CalcParser::ExprBoolContext>(0);
}

tree::TerminalNode* CalcParser::WhileContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

tree::TerminalNode* CalcParser::WhileContext::LKEY() {
  return getToken(CalcParser::LKEY, 0);
}

tree::TerminalNode* CalcParser::WhileContext::RKEY() {
  return getToken(CalcParser::RKEY, 0);
}

std::vector<CalcParser::StatContext *> CalcParser::WhileContext::stat() {
  return getRuleContexts<CalcParser::StatContext>();
}

CalcParser::StatContext* CalcParser::WhileContext::stat(size_t i) {
  return getRuleContext<CalcParser::StatContext>(i);
}

CalcParser::WhileContext::WhileContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::TernaryContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

CalcParser::ExprBoolContext* CalcParser::TernaryContext::exprBool() {
  return getRuleContext<CalcParser::ExprBoolContext>(0);
}

tree::TerminalNode* CalcParser::TernaryContext::QMARK() {
  return getToken(CalcParser::QMARK, 0);
}

std::vector<CalcParser::StatContext *> CalcParser::TernaryContext::stat() {
  return getRuleContexts<CalcParser::StatContext>();
}

CalcParser::StatContext* CalcParser::TernaryContext::stat(size_t i) {
  return getRuleContext<CalcParser::StatContext>(i);
}

tree::TerminalNode* CalcParser::TernaryContext::DOUBLE() {
  return getToken(CalcParser::DOUBLE, 0);
}

tree::TerminalNode* CalcParser::TernaryContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

CalcParser::TernaryContext::TernaryContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IfContext::IF() {
  return getToken(CalcParser::IF, 0);
}

CalcParser::ExprBoolContext* CalcParser::IfContext::exprBool() {
  return getRuleContext<CalcParser::ExprBoolContext>(0);
}

tree::TerminalNode* CalcParser::IfContext::THEN() {
  return getToken(CalcParser::THEN, 0);
}

tree::TerminalNode* CalcParser::IfContext::ENDIF() {
  return getToken(CalcParser::ENDIF, 0);
}

tree::TerminalNode* CalcParser::IfContext::ELSE() {
  return getToken(CalcParser::ELSE, 0);
}

std::vector<CalcParser::StatContext *> CalcParser::IfContext::stat() {
  return getRuleContexts<CalcParser::StatContext>();
}

CalcParser::StatContext* CalcParser::IfContext::stat(size_t i) {
  return getRuleContext<CalcParser::StatContext>(i);
}

CalcParser::IfContext::IfContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::PrintExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::PrintExprContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::AssignContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::ExprContext* CalcParser::AssignContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::AssignContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::StatContext* CalcParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleStat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::PrintExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(13);
      expr(0);
      setState(14);
      match(CalcParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::AssignContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(16);
      match(CalcParser::ID);
      setState(17);
      match(CalcParser::T__0);
      setState(18);
      expr(0);
      setState(19);
      match(CalcParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::PrintExprBoolContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(21);
      exprBool(0);
      setState(22);
      match(CalcParser::NEWLINE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::TernaryContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(24);
      match(CalcParser::LPAR);
      setState(25);
      exprBool(0);
      setState(26);
      match(CalcParser::QMARK);
      setState(27);
      stat();
      setState(28);
      match(CalcParser::DOUBLE);
      setState(29);
      stat();
      setState(30);
      match(CalcParser::RPAR);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::WhileContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(32);
      match(CalcParser::WHILE);
      setState(33);
      match(CalcParser::LPAR);
      setState(34);
      exprBool(0);
      setState(35);
      match(CalcParser::RPAR);
      setState(36);
      match(CalcParser::LKEY);
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CalcParser::SUB)
        | (1ULL << CalcParser::LPAR)
        | (1ULL << CalcParser::IF)
        | (1ULL << CalcParser::WHILE)
        | (1ULL << CalcParser::MAXFUN)
        | (1ULL << CalcParser::NOT)
        | (1ULL << CalcParser::ID)
        | (1ULL << CalcParser::INT)
        | (1ULL << CalcParser::NEWLINE))) != 0)) {
        setState(37);
        stat();
        setState(42);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(43);
      match(CalcParser::RKEY);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(45);
      match(CalcParser::IF);
      setState(46);
      exprBool(0);
      setState(47);
      match(CalcParser::THEN);
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CalcParser::SUB)
        | (1ULL << CalcParser::LPAR)
        | (1ULL << CalcParser::IF)
        | (1ULL << CalcParser::WHILE)
        | (1ULL << CalcParser::MAXFUN)
        | (1ULL << CalcParser::NOT)
        | (1ULL << CalcParser::ID)
        | (1ULL << CalcParser::INT)
        | (1ULL << CalcParser::NEWLINE))) != 0)) {
        setState(48);
        stat();
        setState(53);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(62);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CalcParser::ELSE: {
          setState(54);
          match(CalcParser::ELSE);
          setState(58);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CalcParser::SUB)
            | (1ULL << CalcParser::LPAR)
            | (1ULL << CalcParser::IF)
            | (1ULL << CalcParser::WHILE)
            | (1ULL << CalcParser::MAXFUN)
            | (1ULL << CalcParser::NOT)
            | (1ULL << CalcParser::ID)
            | (1ULL << CalcParser::INT)
            | (1ULL << CalcParser::NEWLINE))) != 0)) {
            setState(55);
            stat();
            setState(60);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        case CalcParser::ENDIF: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(64);
      match(CalcParser::ENDIF);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::BlankContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(66);
      match(CalcParser::NEWLINE);
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

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NegateExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::NegateExprContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::ExprContext* CalcParser::NegateExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::NegateExprContext::NegateExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::NegateExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitNegateExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusOrSubContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::PlusOrSubContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::PlusOrSubContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::PlusOrSubContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

tree::TerminalNode* CalcParser::PlusOrSubContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::PlusOrSubContext::PlusOrSubContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::PlusOrSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPlusOrSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IdContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProdOrDivContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::ProdOrDivContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::ProdOrDivContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::ProdOrDivContext::MUL() {
  return getToken(CalcParser::MUL, 0);
}

tree::TerminalNode* CalcParser::ProdOrDivContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

CalcParser::ProdOrDivContext::ProdOrDivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::ProdOrDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProdOrDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::SubExprContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

CalcParser::ExprContext* CalcParser::SubExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::SubExprContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

CalcParser::SubExprContext::SubExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::SubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MaxFunctionContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::MaxFunctionContext::MAXFUN() {
  return getToken(CalcParser::MAXFUN, 0);
}

tree::TerminalNode* CalcParser::MaxFunctionContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

std::vector<CalcParser::ExprContext *> CalcParser::MaxFunctionContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::MaxFunctionContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::MaxFunctionContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

std::vector<tree::TerminalNode *> CalcParser::MaxFunctionContext::COMMA() {
  return getTokens(CalcParser::COMMA);
}

tree::TerminalNode* CalcParser::MaxFunctionContext::COMMA(size_t i) {
  return getToken(CalcParser::COMMA, i);
}

CalcParser::MaxFunctionContext::MaxFunctionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::MaxFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMaxFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExprContext* CalcParser::expr() {
   return expr(0);
}

CalcParser::ExprContext* CalcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalcParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::SUB: {
        _localctx = _tracker.createInstance<NegateExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(70);
        match(CalcParser::SUB);
        setState(71);
        expr(7);
        break;
      }

      case CalcParser::MAXFUN: {
        _localctx = _tracker.createInstance<MaxFunctionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(72);
        match(CalcParser::MAXFUN);
        setState(73);
        match(CalcParser::LPAR);
        setState(74);
        expr(0);
        setState(77); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(75);
          match(CalcParser::COMMA);
          setState(76);
          expr(0);
          setState(79); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == CalcParser::COMMA);
        setState(81);
        match(CalcParser::RPAR);
        break;
      }

      case CalcParser::LPAR: {
        _localctx = _tracker.createInstance<SubExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(83);
        match(CalcParser::LPAR);
        setState(84);
        expr(0);
        setState(85);
        match(CalcParser::RPAR);
        break;
      }

      case CalcParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(87);
        match(CalcParser::INT);
        break;
      }

      case CalcParser::ID: {
        _localctx = _tracker.createInstance<IdContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(88);
        match(CalcParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(97);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ProdOrDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(92);
          dynamic_cast<ProdOrDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CalcParser::MUL

          || _la == CalcParser::DIV)) {
            dynamic_cast<ProdOrDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(93);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusOrSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(94);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(95);
          dynamic_cast<PlusOrSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CalcParser::ADD

          || _la == CalcParser::SUB)) {
            dynamic_cast<PlusOrSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(96);
          expr(6);
          break;
        }

        } 
      }
      setState(101);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprBoolContext ------------------------------------------------------------------

CalcParser::ExprBoolContext::ExprBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprBoolContext::getRuleIndex() const {
  return CalcParser::RuleExprBool;
}

void CalcParser::ExprBoolContext::copyFrom(ExprBoolContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::NotContext::NOT() {
  return getToken(CalcParser::NOT, 0);
}

CalcParser::ExprBoolContext* CalcParser::NotContext::exprBool() {
  return getRuleContext<CalcParser::ExprBoolContext>(0);
}

CalcParser::NotContext::NotContext(ExprBoolContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermBoolContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::TermBoolContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::TermBoolContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::TermBoolContext::EQ() {
  return getToken(CalcParser::EQ, 0);
}

tree::TerminalNode* CalcParser::TermBoolContext::NEQ() {
  return getToken(CalcParser::NEQ, 0);
}

tree::TerminalNode* CalcParser::TermBoolContext::GT() {
  return getToken(CalcParser::GT, 0);
}

tree::TerminalNode* CalcParser::TermBoolContext::LT() {
  return getToken(CalcParser::LT, 0);
}

tree::TerminalNode* CalcParser::TermBoolContext::GET() {
  return getToken(CalcParser::GET, 0);
}

tree::TerminalNode* CalcParser::TermBoolContext::LET() {
  return getToken(CalcParser::LET, 0);
}

CalcParser::TermBoolContext::TermBoolContext(ExprBoolContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::TermBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTermBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<CalcParser::ExprBoolContext *> CalcParser::OrContext::exprBool() {
  return getRuleContexts<CalcParser::ExprBoolContext>();
}

CalcParser::ExprBoolContext* CalcParser::OrContext::exprBool(size_t i) {
  return getRuleContext<CalcParser::ExprBoolContext>(i);
}

tree::TerminalNode* CalcParser::OrContext::OR() {
  return getToken(CalcParser::OR, 0);
}

CalcParser::OrContext::OrContext(ExprBoolContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<CalcParser::ExprBoolContext *> CalcParser::AndContext::exprBool() {
  return getRuleContexts<CalcParser::ExprBoolContext>();
}

CalcParser::ExprBoolContext* CalcParser::AndContext::exprBool(size_t i) {
  return getRuleContext<CalcParser::ExprBoolContext>(i);
}

tree::TerminalNode* CalcParser::AndContext::AND() {
  return getToken(CalcParser::AND, 0);
}

CalcParser::AndContext::AndContext(ExprBoolContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubExprBoolContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::SubExprBoolContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

CalcParser::ExprBoolContext* CalcParser::SubExprBoolContext::exprBool() {
  return getRuleContext<CalcParser::ExprBoolContext>(0);
}

tree::TerminalNode* CalcParser::SubExprBoolContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

CalcParser::SubExprBoolContext::SubExprBoolContext(ExprBoolContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::SubExprBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSubExprBool(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExprBoolContext* CalcParser::exprBool() {
   return exprBool(0);
}

CalcParser::ExprBoolContext* CalcParser::exprBool(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprBoolContext *_localctx = _tracker.createInstance<ExprBoolContext>(_ctx, parentState);
  CalcParser::ExprBoolContext *previousContext = _localctx;
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, CalcParser::RuleExprBool, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(103);
      match(CalcParser::NOT);
      setState(104);
      exprBool(3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SubExprBoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(105);
      match(CalcParser::LPAR);
      setState(106);
      exprBool(0);
      setState(107);
      match(CalcParser::RPAR);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<TermBoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(109);
      expr(0);
      setState(110);
      dynamic_cast<TermBoolContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CalcParser::GT)
        | (1ULL << CalcParser::LT)
        | (1ULL << CalcParser::EQ)
        | (1ULL << CalcParser::NEQ)
        | (1ULL << CalcParser::GET)
        | (1ULL << CalcParser::LET))) != 0))) {
        dynamic_cast<TermBoolContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(111);
      expr(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(121);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprBoolContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExprBool);
          setState(115);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(116);
          match(CalcParser::AND);
          setState(117);
          exprBool(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprBoolContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExprBool);
          setState(118);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(119);
          match(CalcParser::OR);
          setState(120);
          exprBool(5);
          break;
        }

        } 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CalcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 3: return exprBoolSempred(dynamic_cast<ExprBoolContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprBoolSempred(ExprBoolContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalcParser::_decisionToDFA;
atn::PredictionContextCache CalcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalcParser::_atn;
std::vector<uint16_t> CalcParser::_serializedATN;

std::vector<std::string> CalcParser::_ruleNames = {
  "prog", "stat", "expr", "exprBool"
};

std::vector<std::string> CalcParser::_literalNames = {
  "", "'='", "'*'", "'+'", "'-'", "'/'", "'('", "')'", "'?'", "':'", "'if'", 
  "'endif'", "'then'", "'else'", "'while'", "'{'", "'}'", "'max'", "','", 
  "'and'", "'or'", "'not'", "'>'", "'<'", "'=='", "'!='", "'>='", "'<='"
};

std::vector<std::string> CalcParser::_symbolicNames = {
  "", "", "MUL", "ADD", "SUB", "DIV", "LPAR", "RPAR", "QMARK", "DOUBLE", 
  "IF", "ENDIF", "THEN", "ELSE", "WHILE", "LKEY", "RKEY", "MAXFUN", "COMMA", 
  "AND", "OR", "NOT", "GT", "LT", "EQ", "NEQ", "GET", "LET", "ID", "INT", 
  "NEWLINE", "WS"
};

dfa::Vocabulary CalcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalcParser::_tokenNames;

CalcParser::Initializer::Initializer() {
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
    0x3, 0x21, 0x81, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x29, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2c, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x34, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x37, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x41, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x46, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 
    0x4, 0x50, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x51, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x5c, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x7, 0x4, 0x64, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x67, 0xb, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x74, 0xa, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x7c, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x7f, 0xb, 0x5, 0x3, 0x5, 0x2, 0x4, 0x6, 0x8, 0x6, 
    0x2, 0x4, 0x6, 0x8, 0x2, 0x5, 0x4, 0x2, 0x4, 0x4, 0x7, 0x7, 0x3, 0x2, 
    0x5, 0x6, 0x3, 0x2, 0x18, 0x1d, 0x2, 0x92, 0x2, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x45, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 
    0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 
    0x10, 0x5, 0x6, 0x4, 0x2, 0x10, 0x11, 0x7, 0x20, 0x2, 0x2, 0x11, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0x1e, 0x2, 0x2, 0x13, 0x14, 0x7, 
    0x3, 0x2, 0x2, 0x14, 0x15, 0x5, 0x6, 0x4, 0x2, 0x15, 0x16, 0x7, 0x20, 
    0x2, 0x2, 0x16, 0x46, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x5, 0x8, 0x5, 
    0x2, 0x18, 0x19, 0x7, 0x20, 0x2, 0x2, 0x19, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x8, 0x5, 0x2, 0x1c, 
    0x1d, 0x7, 0xa, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0x4, 0x3, 0x2, 0x1e, 0x1f, 
    0x7, 0xb, 0x2, 0x2, 0x1f, 0x20, 0x5, 0x4, 0x3, 0x2, 0x20, 0x21, 0x7, 
    0x9, 0x2, 0x2, 0x21, 0x46, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 0x10, 
    0x2, 0x2, 0x23, 0x24, 0x7, 0x8, 0x2, 0x2, 0x24, 0x25, 0x5, 0x8, 0x5, 
    0x2, 0x25, 0x26, 0x7, 0x9, 0x2, 0x2, 0x26, 0x2a, 0x7, 0x11, 0x2, 0x2, 
    0x27, 0x29, 0x5, 0x4, 0x3, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x12, 0x2, 0x2, 0x2e, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x30, 0x7, 0xc, 0x2, 0x2, 0x30, 0x31, 0x5, 0x8, 0x5, 
    0x2, 0x31, 0x35, 0x7, 0xe, 0x2, 0x2, 0x32, 0x34, 0x5, 0x4, 0x3, 0x2, 
    0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3c, 0x7, 
    0xf, 0x2, 0x2, 0x39, 0x3b, 0x5, 0x4, 0x3, 0x2, 0x3a, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0xd, 0x2, 0x2, 0x43, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x46, 0x7, 0x20, 0x2, 0x2, 0x45, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x12, 0x3, 0x2, 0x2, 0x2, 0x45, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x45, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x8, 0x4, 0x1, 0x2, 0x48, 0x49, 
    0x7, 0x6, 0x2, 0x2, 0x49, 0x5c, 0x5, 0x6, 0x4, 0x9, 0x4a, 0x4b, 0x7, 
    0x13, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x8, 0x2, 0x2, 0x4c, 0x4f, 0x5, 0x6, 
    0x4, 0x2, 0x4d, 0x4e, 0x7, 0x14, 0x2, 0x2, 0x4e, 0x50, 0x5, 0x6, 0x4, 
    0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x9, 0x2, 0x2, 0x54, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x8, 0x2, 0x2, 0x56, 0x57, 0x5, 
    0x6, 0x4, 0x2, 0x57, 0x58, 0x7, 0x9, 0x2, 0x2, 0x58, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5c, 0x7, 0x1f, 0x2, 0x2, 0x5a, 0x5c, 0x7, 0x1e, 0x2, 
    0x2, 0x5b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 
    0xc, 0x8, 0x2, 0x2, 0x5e, 0x5f, 0x9, 0x2, 0x2, 0x2, 0x5f, 0x64, 0x5, 
    0x6, 0x4, 0x9, 0x60, 0x61, 0xc, 0x7, 0x2, 0x2, 0x61, 0x62, 0x9, 0x3, 
    0x2, 0x2, 0x62, 0x64, 0x5, 0x6, 0x4, 0x8, 0x63, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x60, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 
    0x8, 0x5, 0x1, 0x2, 0x69, 0x6a, 0x7, 0x17, 0x2, 0x2, 0x6a, 0x74, 0x5, 
    0x8, 0x5, 0x5, 0x6b, 0x6c, 0x7, 0x8, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x8, 
    0x5, 0x2, 0x6d, 0x6e, 0x7, 0x9, 0x2, 0x2, 0x6e, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x70, 0x5, 0x6, 0x4, 0x2, 0x70, 0x71, 0x9, 0x4, 0x2, 0x2, 
    0x71, 0x72, 0x5, 0x6, 0x4, 0x2, 0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0xc, 
    0x7, 0x2, 0x2, 0x76, 0x77, 0x7, 0x15, 0x2, 0x2, 0x77, 0x7c, 0x5, 0x8, 
    0x5, 0x8, 0x78, 0x79, 0xc, 0x6, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x16, 0x2, 
    0x2, 0x7a, 0x7c, 0x5, 0x8, 0x5, 0x7, 0x7b, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0xf, 0xd, 0x2a, 
    0x35, 0x3c, 0x40, 0x45, 0x51, 0x5b, 0x63, 0x65, 0x73, 0x7b, 0x7d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalcParser::Initializer CalcParser::_init;
