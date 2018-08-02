
// Generated from Examen.g4 by ANTLR 4.7.1


#include "ExamenListener.h"

#include "ExamenParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExamenParser::ExamenParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExamenParser::~ExamenParser() {
  delete _interpreter;
}

std::string ExamenParser::getGrammarFileName() const {
  return "Examen.g4";
}

const std::vector<std::string>& ExamenParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExamenParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ExprContext ------------------------------------------------------------------

ExamenParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExamenParser::ExprContext::getRuleIndex() const {
  return ExamenParser::RuleExpr;
}

void ExamenParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryArithmeticExprContext ------------------------------------------------------------------

ExamenParser::ExprContext* ExamenParser::UnaryArithmeticExprContext::expr() {
  return getRuleContext<ExamenParser::ExprContext>(0);
}

tree::TerminalNode* ExamenParser::UnaryArithmeticExprContext::NOT() {
  return getToken(ExamenParser::NOT, 0);
}

tree::TerminalNode* ExamenParser::UnaryArithmeticExprContext::MINUS() {
  return getToken(ExamenParser::MINUS, 0);
}

tree::TerminalNode* ExamenParser::UnaryArithmeticExprContext::PLUS() {
  return getToken(ExamenParser::PLUS, 0);
}

ExamenParser::UnaryArithmeticExprContext::UnaryArithmeticExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::UnaryArithmeticExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryArithmeticExpr(this);
}
void ExamenParser::UnaryArithmeticExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryArithmeticExpr(this);
}
//----------------- FloatExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::FloatExprContext::FLOAT() {
  return getToken(ExamenParser::FLOAT, 0);
}

ExamenParser::FloatExprContext::FloatExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::FloatExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatExpr(this);
}
void ExamenParser::FloatExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatExpr(this);
}
//----------------- CharExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::CharExprContext::CHAR() {
  return getToken(ExamenParser::CHAR, 0);
}

ExamenParser::CharExprContext::CharExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::CharExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharExpr(this);
}
void ExamenParser::CharExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharExpr(this);
}
//----------------- IntExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::IntExprContext::INT() {
  return getToken(ExamenParser::INT, 0);
}

ExamenParser::IntExprContext::IntExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::IntExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntExpr(this);
}
void ExamenParser::IntExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntExpr(this);
}
//----------------- BooleanExprContext ------------------------------------------------------------------

std::vector<ExamenParser::ExprContext *> ExamenParser::BooleanExprContext::expr() {
  return getRuleContexts<ExamenParser::ExprContext>();
}

ExamenParser::ExprContext* ExamenParser::BooleanExprContext::expr(size_t i) {
  return getRuleContext<ExamenParser::ExprContext>(i);
}

tree::TerminalNode* ExamenParser::BooleanExprContext::AND() {
  return getToken(ExamenParser::AND, 0);
}

tree::TerminalNode* ExamenParser::BooleanExprContext::OR() {
  return getToken(ExamenParser::OR, 0);
}

ExamenParser::BooleanExprContext::BooleanExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::BooleanExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanExpr(this);
}
void ExamenParser::BooleanExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanExpr(this);
}
//----------------- ArithmeticExprContext ------------------------------------------------------------------

std::vector<ExamenParser::ExprContext *> ExamenParser::ArithmeticExprContext::expr() {
  return getRuleContexts<ExamenParser::ExprContext>();
}

ExamenParser::ExprContext* ExamenParser::ArithmeticExprContext::expr(size_t i) {
  return getRuleContext<ExamenParser::ExprContext>(i);
}

tree::TerminalNode* ExamenParser::ArithmeticExprContext::MUL() {
  return getToken(ExamenParser::MUL, 0);
}

tree::TerminalNode* ExamenParser::ArithmeticExprContext::DIV() {
  return getToken(ExamenParser::DIV, 0);
}

tree::TerminalNode* ExamenParser::ArithmeticExprContext::PLUS() {
  return getToken(ExamenParser::PLUS, 0);
}

tree::TerminalNode* ExamenParser::ArithmeticExprContext::MINUS() {
  return getToken(ExamenParser::MINUS, 0);
}

ExamenParser::ArithmeticExprContext::ArithmeticExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::ArithmeticExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpr(this);
}
void ExamenParser::ArithmeticExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpr(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

ExamenParser::ExprContext* ExamenParser::SubExprContext::expr() {
  return getRuleContext<ExamenParser::ExprContext>(0);
}

ExamenParser::SubExprContext::SubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void ExamenParser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<ExamenParser::ExprContext *> ExamenParser::RelationalExprContext::expr() {
  return getRuleContexts<ExamenParser::ExprContext>();
}

ExamenParser::ExprContext* ExamenParser::RelationalExprContext::expr(size_t i) {
  return getRuleContext<ExamenParser::ExprContext>(i);
}

tree::TerminalNode* ExamenParser::RelationalExprContext::EQ() {
  return getToken(ExamenParser::EQ, 0);
}

tree::TerminalNode* ExamenParser::RelationalExprContext::NEQ() {
  return getToken(ExamenParser::NEQ, 0);
}

tree::TerminalNode* ExamenParser::RelationalExprContext::GT() {
  return getToken(ExamenParser::GT, 0);
}

tree::TerminalNode* ExamenParser::RelationalExprContext::LT() {
  return getToken(ExamenParser::LT, 0);
}

tree::TerminalNode* ExamenParser::RelationalExprContext::LET() {
  return getToken(ExamenParser::LET, 0);
}

tree::TerminalNode* ExamenParser::RelationalExprContext::GET() {
  return getToken(ExamenParser::GET, 0);
}

ExamenParser::RelationalExprContext::RelationalExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::RelationalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpr(this);
}
void ExamenParser::RelationalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpr(this);
}
//----------------- IdExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::IdExprContext::ID() {
  return getToken(ExamenParser::ID, 0);
}

ExamenParser::IdExprContext::IdExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::IdExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpr(this);
}
void ExamenParser::IdExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpr(this);
}

ExamenParser::ExprContext* ExamenParser::expr() {
   return expr(0);
}

ExamenParser::ExprContext* ExamenParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExamenParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExamenParser::ExprContext *previousContext = _localctx;
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, ExamenParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(13);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExamenParser::PLUS:
      case ExamenParser::MINUS:
      case ExamenParser::NOT: {
        _localctx = _tracker.createInstance<UnaryArithmeticExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(3);
        dynamic_cast<UnaryArithmeticExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExamenParser::PLUS)
          | (1ULL << ExamenParser::MINUS)
          | (1ULL << ExamenParser::NOT))) != 0))) {
          dynamic_cast<UnaryArithmeticExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(4);
        expr(11);
        break;
      }

      case ExamenParser::T__0: {
        _localctx = _tracker.createInstance<SubExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(5);
        match(ExamenParser::T__0);
        setState(6);
        expr(0);
        setState(7);
        match(ExamenParser::T__1);
        break;
      }

      case ExamenParser::INT: {
        _localctx = _tracker.createInstance<IntExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(9);
        match(ExamenParser::INT);
        break;
      }

      case ExamenParser::FLOAT: {
        _localctx = _tracker.createInstance<FloatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(10);
        match(ExamenParser::FLOAT);
        break;
      }

      case ExamenParser::ID: {
        _localctx = _tracker.createInstance<IdExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(11);
        match(ExamenParser::ID);
        break;
      }

      case ExamenParser::CHAR: {
        _localctx = _tracker.createInstance<CharExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(12);
        match(ExamenParser::CHAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(32);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(30);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(15);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(16);
          dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExamenParser::MUL

          || _la == ExamenParser::DIV)) {
            dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(17);
          expr(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(18);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(19);
          dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExamenParser::PLUS

          || _la == ExamenParser::MINUS)) {
            dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(20);
          expr(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(21);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(22);
          dynamic_cast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ExamenParser::EQ)
            | (1ULL << ExamenParser::NEQ)
            | (1ULL << ExamenParser::LT)
            | (1ULL << ExamenParser::GT)
            | (1ULL << ExamenParser::LET)
            | (1ULL << ExamenParser::GET))) != 0))) {
            dynamic_cast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(23);
          expr(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BooleanExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(24);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(25);
          dynamic_cast<BooleanExprContext *>(_localctx)->op = match(ExamenParser::AND);
          setState(26);
          expr(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BooleanExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(27);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(28);
          dynamic_cast<BooleanExprContext *>(_localctx)->op = match(ExamenParser::OR);
          setState(29);
          expr(7);
          break;
        }

        } 
      }
      setState(34);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ExamenParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExamenParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExamenParser::_decisionToDFA;
atn::PredictionContextCache ExamenParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExamenParser::_atn;
std::vector<uint16_t> ExamenParser::_serializedATN;

std::vector<std::string> ExamenParser::_ruleNames = {
  "expr"
};

std::vector<std::string> ExamenParser::_literalNames = {
  "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'and'", "'not'", "'or'", 
  "'=='", "'!='", "'<'", "'>'", "'<='", "'>='"
};

std::vector<std::string> ExamenParser::_symbolicNames = {
  "", "", "", "PLUS", "MINUS", "MUL", "DIV", "AND", "NOT", "OR", "EQ", "NEQ", 
  "LT", "GT", "LET", "GET", "INT", "FLOAT", "CHAR", "STRING", "ID", "WS"
};

dfa::Vocabulary ExamenParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExamenParser::_tokenNames;

ExamenParser::Initializer::Initializer() {
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
    0x3, 0x17, 0x26, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x10, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x21, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x24, 0xb, 0x2, 0x3, 0x2, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x6, 0x4, 0x2, 0x5, 0x6, 0xa, 0xa, 0x3, 0x2, 0x7, 0x8, 0x3, 0x2, 0x5, 
    0x6, 0x3, 0x2, 0xc, 0x11, 0x2, 0x2e, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x5, 0x8, 0x2, 0x1, 0x2, 0x5, 0x6, 0x9, 0x2, 0x2, 0x2, 0x6, 0x10, 0x5, 
    0x2, 0x2, 0xd, 0x7, 0x8, 0x7, 0x3, 0x2, 0x2, 0x8, 0x9, 0x5, 0x2, 0x2, 
    0x2, 0x9, 0xa, 0x7, 0x4, 0x2, 0x2, 0xa, 0x10, 0x3, 0x2, 0x2, 0x2, 0xb, 
    0x10, 0x7, 0x12, 0x2, 0x2, 0xc, 0x10, 0x7, 0x13, 0x2, 0x2, 0xd, 0x10, 
    0x7, 0x16, 0x2, 0x2, 0xe, 0x10, 0x7, 0x14, 0x2, 0x2, 0xf, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0xf, 0x7, 0x3, 0x2, 0x2, 0x2, 0xf, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0xc, 0x3, 0x2, 0x2, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0x10, 0x22, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 
    0xc, 0xc, 0x2, 0x2, 0x12, 0x13, 0x9, 0x3, 0x2, 0x2, 0x13, 0x21, 0x5, 
    0x2, 0x2, 0xd, 0x14, 0x15, 0xc, 0xb, 0x2, 0x2, 0x15, 0x16, 0x9, 0x4, 
    0x2, 0x2, 0x16, 0x21, 0x5, 0x2, 0x2, 0xc, 0x17, 0x18, 0xc, 0xa, 0x2, 
    0x2, 0x18, 0x19, 0x9, 0x5, 0x2, 0x2, 0x19, 0x21, 0x5, 0x2, 0x2, 0xb, 
    0x1a, 0x1b, 0xc, 0x9, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x9, 0x2, 0x2, 0x1c, 
    0x21, 0x5, 0x2, 0x2, 0xa, 0x1d, 0x1e, 0xc, 0x8, 0x2, 0x2, 0x1e, 0x1f, 
    0x7, 0xb, 0x2, 0x2, 0x1f, 0x21, 0x5, 0x2, 0x2, 0x9, 0x20, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x14, 0x3, 0x2, 0x2, 0x2, 0x20, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x21, 0x24, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x3, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x5, 0xf, 0x20, 0x22, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExamenParser::Initializer ExamenParser::_init;
