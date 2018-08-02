
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


//----------------- ProgramContext ------------------------------------------------------------------

ExamenParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExamenParser::InstructionContext *> ExamenParser::ProgramContext::instruction() {
  return getRuleContexts<ExamenParser::InstructionContext>();
}

ExamenParser::InstructionContext* ExamenParser::ProgramContext::instruction(size_t i) {
  return getRuleContext<ExamenParser::InstructionContext>(i);
}


size_t ExamenParser::ProgramContext::getRuleIndex() const {
  return ExamenParser::RuleProgram;
}

void ExamenParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ExamenParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

ExamenParser::ProgramContext* ExamenParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExamenParser::RuleProgram);
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
      setState(6);
      instruction();
      setState(7);
      match(ExamenParser::T__0);
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExamenParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ExamenParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExamenParser::InstructionContext::getRuleIndex() const {
  return ExamenParser::RuleInstruction;
}

void ExamenParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PushInstContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::PushInstContext::ID() {
  return getToken(ExamenParser::ID, 0);
}

tree::TerminalNode* ExamenParser::PushInstContext::PUSH() {
  return getToken(ExamenParser::PUSH, 0);
}

ExamenParser::ExprContext* ExamenParser::PushInstContext::expr() {
  return getRuleContext<ExamenParser::ExprContext>(0);
}

ExamenParser::PushInstContext::PushInstContext(InstructionContext *ctx) { copyFrom(ctx); }

void ExamenParser::PushInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushInst(this);
}
void ExamenParser::PushInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushInst(this);
}
//----------------- PopInstContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::PopInstContext::ID() {
  return getToken(ExamenParser::ID, 0);
}

tree::TerminalNode* ExamenParser::PopInstContext::POP() {
  return getToken(ExamenParser::POP, 0);
}

ExamenParser::PopInstContext::PopInstContext(InstructionContext *ctx) { copyFrom(ctx); }

void ExamenParser::PopInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPopInst(this);
}
void ExamenParser::PopInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPopInst(this);
}
//----------------- AssignInstContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::AssignInstContext::ID() {
  return getToken(ExamenParser::ID, 0);
}

tree::TerminalNode* ExamenParser::AssignInstContext::ASSIGN() {
  return getToken(ExamenParser::ASSIGN, 0);
}

ExamenParser::ExprContext* ExamenParser::AssignInstContext::expr() {
  return getRuleContext<ExamenParser::ExprContext>(0);
}

ExamenParser::AssignInstContext::AssignInstContext(InstructionContext *ctx) { copyFrom(ctx); }

void ExamenParser::AssignInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignInst(this);
}
void ExamenParser::AssignInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignInst(this);
}
ExamenParser::InstructionContext* ExamenParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 2, ExamenParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ExamenParser::AssignInstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(13);
      match(ExamenParser::ID);
      setState(14);
      match(ExamenParser::ASSIGN);
      setState(15);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ExamenParser::PushInstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(16);
      match(ExamenParser::ID);
      setState(17);
      match(ExamenParser::T__1);
      setState(18);
      match(ExamenParser::PUSH);
      setState(19);
      match(ExamenParser::T__2);
      setState(20);
      expr(0);
      setState(21);
      match(ExamenParser::T__3);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ExamenParser::PopInstContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(23);
      match(ExamenParser::ID);
      setState(24);
      match(ExamenParser::T__1);
      setState(25);
      match(ExamenParser::POP);
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

ExamenParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExamenParser::ExprContext::getRuleIndex() const {
  return ExamenParser::RuleExpr;
}

void ExamenParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::IdentExprContext::ID() {
  return getToken(ExamenParser::ID, 0);
}

ExamenParser::IdentExprContext::IdentExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::IdentExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentExpr(this);
}
void ExamenParser::IdentExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentExpr(this);
}
//----------------- StringExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::StringExprContext::STRING() {
  return getToken(ExamenParser::STRING, 0);
}

ExamenParser::StringExprContext::StringExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::StringExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringExpr(this);
}
void ExamenParser::StringExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringExpr(this);
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
//----------------- StackTopExprContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::StackTopExprContext::ID() {
  return getToken(ExamenParser::ID, 0);
}

tree::TerminalNode* ExamenParser::StackTopExprContext::TOP() {
  return getToken(ExamenParser::TOP, 0);
}

ExamenParser::StackTopExprContext::StackTopExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::StackTopExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStackTopExpr(this);
}
void ExamenParser::StackTopExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStackTopExpr(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

std::vector<ExamenParser::ExprContext *> ExamenParser::AddExprContext::expr() {
  return getRuleContexts<ExamenParser::ExprContext>();
}

ExamenParser::ExprContext* ExamenParser::AddExprContext::expr(size_t i) {
  return getRuleContext<ExamenParser::ExprContext>(i);
}

tree::TerminalNode* ExamenParser::AddExprContext::PLUS() {
  return getToken(ExamenParser::PLUS, 0);
}

ExamenParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExamenParser::AddExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpr(this);
}
void ExamenParser::AddExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpr(this);
}

ExamenParser::ExprContext* ExamenParser::expr() {
   return expr(0);
}

ExamenParser::ExprContext* ExamenParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExamenParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExamenParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ExamenParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StackTopExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(29);
      match(ExamenParser::ID);
      setState(30);
      match(ExamenParser::T__1);
      setState(31);
      match(ExamenParser::TOP);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IdentExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(ExamenParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IntExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(33);
      match(ExamenParser::INT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StringExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(34);
      match(ExamenParser::STRING);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(42);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(37);

        if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
        setState(38);
        match(ExamenParser::PLUS);
        setState(39);
        expr(6); 
      }
      setState(44);
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

bool ExamenParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExamenParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);

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
  "program", "instruction", "expr"
};

std::vector<std::string> ExamenParser::_literalNames = {
  "", "';'", "'.'", "'('", "')'", "", "", "'='", "'+'", "'top'", "'push'", 
  "'pop'"
};

std::vector<std::string> ExamenParser::_symbolicNames = {
  "", "", "", "", "", "INT", "STRING", "ASSIGN", "PLUS", "TOP", "PUSH", 
  "POP", "ID", "WS"
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
    0x3, 0xf, 0x30, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x1d, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x26, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x2b, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2e, 0xb, 
    0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 0x4, 0x6, 0x2, 0x2, 0x2, 0x33, 
    0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x5, 0x4, 0x3, 0x2, 0x9, 0xa, 0x7, 0x3, 
    0x2, 0x2, 0xa, 0xc, 0x3, 0x2, 0x2, 0x2, 0xb, 0x8, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x7, 0xe, 
    0x2, 0x2, 0x10, 0x11, 0x7, 0x9, 0x2, 0x2, 0x11, 0x1d, 0x5, 0x6, 0x4, 
    0x2, 0x12, 0x13, 0x7, 0xe, 0x2, 0x2, 0x13, 0x14, 0x7, 0x4, 0x2, 0x2, 
    0x14, 0x15, 0x7, 0xc, 0x2, 0x2, 0x15, 0x16, 0x7, 0x5, 0x2, 0x2, 0x16, 
    0x17, 0x5, 0x6, 0x4, 0x2, 0x17, 0x18, 0x7, 0x6, 0x2, 0x2, 0x18, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0xe, 0x2, 0x2, 0x1a, 0x1b, 0x7, 
    0x4, 0x2, 0x2, 0x1b, 0x1d, 0x7, 0xd, 0x2, 0x2, 0x1c, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x12, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x8, 0x4, 0x1, 0x2, 
    0x1f, 0x20, 0x7, 0xe, 0x2, 0x2, 0x20, 0x21, 0x7, 0x4, 0x2, 0x2, 0x21, 
    0x26, 0x7, 0xb, 0x2, 0x2, 0x22, 0x26, 0x7, 0xe, 0x2, 0x2, 0x23, 0x26, 
    0x7, 0x7, 0x2, 0x2, 0x24, 0x26, 0x7, 0x8, 0x2, 0x2, 0x25, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x28, 0xc, 0x7, 0x2, 0x2, 0x28, 0x29, 0x7, 0xa, 0x2, 0x2, 
    0x29, 0x2b, 0x5, 0x6, 0x4, 0x8, 0x2a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0xd, 0x1c, 0x25, 0x2c, 
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
