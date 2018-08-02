
// Generated from Expr.g4 by ANTLR 4.7.1


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SContext ------------------------------------------------------------------

ExprParser::SContext::SContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::EContext* ExprParser::SContext::e() {
  return getRuleContext<ExprParser::EContext>(0);
}

ExprParser::ExprBoolContext* ExprParser::SContext::exprBool() {
  return getRuleContext<ExprParser::ExprBoolContext>(0);
}


size_t ExprParser::SContext::getRuleIndex() const {
  return ExprParser::RuleS;
}

void ExprParser::SContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS(this);
}

void ExprParser::SContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS(this);
}

ExprParser::SContext* ExprParser::s() {
  SContext *_localctx = _tracker.createInstance<SContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(8);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(6);
      e(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(7);
      exprBool(0);
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

//----------------- EContext ------------------------------------------------------------------

ExprParser::EContext::EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::EContext::getRuleIndex() const {
  return ExprParser::RuleE;
}

void ExprParser::EContext::copyFrom(EContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NegateContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::NegateContext::SUB() {
  return getToken(ExprParser::SUB, 0);
}

ExprParser::EContext* ExprParser::NegateContext::e() {
  return getRuleContext<ExprParser::EContext>(0);
}

ExprParser::NegateContext::NegateContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::NegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegate(this);
}
void ExprParser::NegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegate(this);
}
//----------------- PlusOrSubContext ------------------------------------------------------------------

std::vector<ExprParser::EContext *> ExprParser::PlusOrSubContext::e() {
  return getRuleContexts<ExprParser::EContext>();
}

ExprParser::EContext* ExprParser::PlusOrSubContext::e(size_t i) {
  return getRuleContext<ExprParser::EContext>(i);
}

tree::TerminalNode* ExprParser::PlusOrSubContext::ADD() {
  return getToken(ExprParser::ADD, 0);
}

tree::TerminalNode* ExprParser::PlusOrSubContext::SUB() {
  return getToken(ExprParser::SUB, 0);
}

ExprParser::PlusOrSubContext::PlusOrSubContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::PlusOrSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusOrSub(this);
}
void ExprParser::PlusOrSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusOrSub(this);
}
//----------------- ProdOrDivContext ------------------------------------------------------------------

std::vector<ExprParser::EContext *> ExprParser::ProdOrDivContext::e() {
  return getRuleContexts<ExprParser::EContext>();
}

ExprParser::EContext* ExprParser::ProdOrDivContext::e(size_t i) {
  return getRuleContext<ExprParser::EContext>(i);
}

tree::TerminalNode* ExprParser::ProdOrDivContext::MULT() {
  return getToken(ExprParser::MULT, 0);
}

tree::TerminalNode* ExprParser::ProdOrDivContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

ExprParser::ProdOrDivContext::ProdOrDivContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::ProdOrDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProdOrDiv(this);
}
void ExprParser::ProdOrDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProdOrDiv(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::SubExprContext::LPAR() {
  return getToken(ExprParser::LPAR, 0);
}

ExprParser::EContext* ExprParser::SubExprContext::e() {
  return getRuleContext<ExprParser::EContext>(0);
}

tree::TerminalNode* ExprParser::SubExprContext::RPAR() {
  return getToken(ExprParser::RPAR, 0);
}

ExprParser::SubExprContext::SubExprContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void ExprParser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}
//----------------- ValueContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ValueContext::INT() {
  return getToken(ExprParser::INT, 0);
}

ExprParser::ValueContext::ValueContext(EContext *ctx) { copyFrom(ctx); }

void ExprParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}
void ExprParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

ExprParser::EContext* ExprParser::e() {
   return e(0);
}

ExprParser::EContext* ExprParser::e(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::EContext *_localctx = _tracker.createInstance<EContext>(_ctx, parentState);
  ExprParser::EContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleE, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::SUB: {
        _localctx = _tracker.createInstance<NegateContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(11);
        match(ExprParser::SUB);
        setState(12);
        e(5);
        break;
      }

      case ExprParser::LPAR: {
        _localctx = _tracker.createInstance<SubExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(13);
        match(ExprParser::LPAR);
        setState(14);
        e(0);
        setState(15);
        match(ExprParser::RPAR);
        break;
      }

      case ExprParser::INT: {
        _localctx = _tracker.createInstance<ValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(17);
        match(ExprParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(28);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(26);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ProdOrDivContext>(_tracker.createInstance<EContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleE);
          setState(20);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(21);
          dynamic_cast<ProdOrDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MULT

          || _la == ExprParser::DIV)) {
            dynamic_cast<ProdOrDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(22);
          e(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusOrSubContext>(_tracker.createInstance<EContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleE);
          setState(23);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(24);
          dynamic_cast<PlusOrSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ADD

          || _la == ExprParser::SUB)) {
            dynamic_cast<PlusOrSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(25);
          e(4);
          break;
        }

        } 
      }
      setState(30);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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

ExprParser::ExprBoolContext::ExprBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExprBoolContext::getRuleIndex() const {
  return ExprParser::RuleExprBool;
}

void ExprParser::ExprBoolContext::copyFrom(ExprBoolContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::NotContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::ExprBoolContext* ExprParser::NotContext::exprBool() {
  return getRuleContext<ExprParser::ExprBoolContext>(0);
}

ExprParser::NotContext::NotContext(ExprBoolContext *ctx) { copyFrom(ctx); }

void ExprParser::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void ExprParser::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<ExprParser::ExprBoolContext *> ExprParser::OrContext::exprBool() {
  return getRuleContexts<ExprParser::ExprBoolContext>();
}

ExprParser::ExprBoolContext* ExprParser::OrContext::exprBool(size_t i) {
  return getRuleContext<ExprParser::ExprBoolContext>(i);
}

tree::TerminalNode* ExprParser::OrContext::OR() {
  return getToken(ExprParser::OR, 0);
}

ExprParser::OrContext::OrContext(ExprBoolContext *ctx) { copyFrom(ctx); }

void ExprParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void ExprParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<ExprParser::ExprBoolContext *> ExprParser::AndContext::exprBool() {
  return getRuleContexts<ExprParser::ExprBoolContext>();
}

ExprParser::ExprBoolContext* ExprParser::AndContext::exprBool(size_t i) {
  return getRuleContext<ExprParser::ExprBoolContext>(i);
}

tree::TerminalNode* ExprParser::AndContext::AND() {
  return getToken(ExprParser::AND, 0);
}

ExprParser::AndContext::AndContext(ExprBoolContext *ctx) { copyFrom(ctx); }

void ExprParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void ExprParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}
//----------------- TermeBoolContext ------------------------------------------------------------------

std::vector<ExprParser::EContext *> ExprParser::TermeBoolContext::e() {
  return getRuleContexts<ExprParser::EContext>();
}

ExprParser::EContext* ExprParser::TermeBoolContext::e(size_t i) {
  return getRuleContext<ExprParser::EContext>(i);
}

tree::TerminalNode* ExprParser::TermeBoolContext::EQ() {
  return getToken(ExprParser::EQ, 0);
}

tree::TerminalNode* ExprParser::TermeBoolContext::NEQ() {
  return getToken(ExprParser::NEQ, 0);
}

tree::TerminalNode* ExprParser::TermeBoolContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::TermeBoolContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::TermeBoolContext::GET() {
  return getToken(ExprParser::GET, 0);
}

tree::TerminalNode* ExprParser::TermeBoolContext::LET() {
  return getToken(ExprParser::LET, 0);
}

ExprParser::TermeBoolContext::TermeBoolContext(ExprBoolContext *ctx) { copyFrom(ctx); }

void ExprParser::TermeBoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermeBool(this);
}
void ExprParser::TermeBoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermeBool(this);
}

ExprParser::ExprBoolContext* ExprParser::exprBool() {
   return exprBool(0);
}

ExprParser::ExprBoolContext* ExprParser::exprBool(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprBoolContext *_localctx = _tracker.createInstance<ExprBoolContext>(_ctx, parentState);
  ExprParser::ExprBoolContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ExprParser::RuleExprBool, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::NOT: {
        _localctx = _tracker.createInstance<NotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(32);
        match(ExprParser::NOT);
        setState(33);
        exprBool(2);
        break;
      }

      case ExprParser::SUB:
      case ExprParser::LPAR:
      case ExprParser::INT: {
        _localctx = _tracker.createInstance<TermeBoolContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(34);
        e(0);
        setState(35);
        dynamic_cast<TermeBoolContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::EQ)
          | (1ULL << ExprParser::NEQ)
          | (1ULL << ExprParser::GT)
          | (1ULL << ExprParser::LT)
          | (1ULL << ExprParser::GET)
          | (1ULL << ExprParser::LET))) != 0))) {
          dynamic_cast<TermeBoolContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(36);
        e(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(48);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(46);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprBoolContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExprBool);
          setState(40);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(41);
          match(ExprParser::AND);
          setState(42);
          exprBool(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprBoolContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExprBool);
          setState(43);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(44);
          match(ExprParser::OR);
          setState(45);
          exprBool(4);
          break;
        }

        } 
      }
      setState(50);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return eSempred(dynamic_cast<EContext *>(context), predicateIndex);
    case 2: return exprBoolSempred(dynamic_cast<ExprBoolContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::eSempred(EContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprBoolSempred(ExprBoolContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "s", "e", "exprBool"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'*'", "'+'", "'-'", "'/'", "'('", "')'", "'=='", "'!='", "'>'", "'<'", 
  "'>='", "'<='", "'and'", "'or'", "'not'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "MULT", "ADD", "SUB", "DIV", "LPAR", "RPAR", "EQ", "NEQ", "GT", "LT", 
  "GET", "LET", "AND", "OR", "NOT", "INT", "WS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0x13, 0x36, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xb, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x15, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x1d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x20, 0xb, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x29, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x31, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x34, 0xb, 0x4, 
    0x3, 0x4, 0x2, 0x4, 0x4, 0x6, 0x5, 0x2, 0x4, 0x6, 0x2, 0x5, 0x4, 0x2, 
    0x3, 0x3, 0x6, 0x6, 0x3, 0x2, 0x4, 0x5, 0x3, 0x2, 0x9, 0xe, 0x2, 0x3a, 
    0x2, 0xa, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xb, 0x5, 0x4, 0x3, 0x2, 0x9, 0xb, 0x5, 0x6, 
    0x4, 0x2, 0xa, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0xb, 0x3, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x8, 0x3, 0x1, 0x2, 0xd, 0xe, 
    0x7, 0x5, 0x2, 0x2, 0xe, 0x15, 0x5, 0x4, 0x3, 0x7, 0xf, 0x10, 0x7, 0x7, 
    0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 0x7, 0x8, 0x2, 
    0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13, 0x15, 0x7, 0x12, 0x2, 0x2, 
    0x14, 0xc, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 
    0xc, 0x6, 0x2, 0x2, 0x17, 0x18, 0x9, 0x2, 0x2, 0x2, 0x18, 0x1d, 0x5, 
    0x4, 0x3, 0x7, 0x19, 0x1a, 0xc, 0x5, 0x2, 0x2, 0x1a, 0x1b, 0x9, 0x3, 
    0x2, 0x2, 0x1b, 0x1d, 0x5, 0x4, 0x3, 0x6, 0x1c, 0x16, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x8, 0x4, 0x1, 0x2, 0x22, 0x23, 0x7, 0x11, 0x2, 0x2, 0x23, 0x29, 0x5, 
    0x6, 0x4, 0x4, 0x24, 0x25, 0x5, 0x4, 0x3, 0x2, 0x25, 0x26, 0x9, 0x4, 
    0x2, 0x2, 0x26, 0x27, 0x5, 0x4, 0x3, 0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x21, 0x3, 0x2, 0x2, 0x2, 0x28, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x32, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0xc, 0x6, 0x2, 0x2, 0x2b, 
    0x2c, 0x7, 0xf, 0x2, 0x2, 0x2c, 0x31, 0x5, 0x6, 0x4, 0x7, 0x2d, 0x2e, 
    0xc, 0x5, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x10, 0x2, 0x2, 0x2f, 0x31, 0x5, 
    0x6, 0x4, 0x6, 0x30, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x14, 0x1c, 0x1e, 0x28, 0x30, 
    0x32, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
