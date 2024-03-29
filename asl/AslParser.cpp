
// Generated from Asl.g4 by ANTLR 4.7.1


#include "AslListener.h"

#include "AslParser.h"


using namespace antlrcpp;
using namespace antlr4;

AslParser::AslParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

AslParser::~AslParser() {
  delete _interpreter;
}

std::string AslParser::getGrammarFileName() const {
  return "Asl.g4";
}

const std::vector<std::string>& AslParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& AslParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

AslParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ProgramContext::EOF() {
  return getToken(AslParser::EOF, 0);
}

std::vector<AslParser::FunctionContext *> AslParser::ProgramContext::function() {
  return getRuleContexts<AslParser::FunctionContext>();
}

AslParser::FunctionContext* AslParser::ProgramContext::function(size_t i) {
  return getRuleContext<AslParser::FunctionContext>(i);
}


size_t AslParser::ProgramContext::getRuleIndex() const {
  return AslParser::RuleProgram;
}

void AslParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void AslParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

AslParser::ProgramContext* AslParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AslParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(36);
      function();
      setState(39); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AslParser::FUNC);
    setState(41);
    match(AslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

AslParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::FunctionContext::FUNC() {
  return getToken(AslParser::FUNC, 0);
}

tree::TerminalNode* AslParser::FunctionContext::ID() {
  return getToken(AslParser::ID, 0);
}

tree::TerminalNode* AslParser::FunctionContext::ENDFUNC() {
  return getToken(AslParser::ENDFUNC, 0);
}

AslParser::BasicTypeContext* AslParser::FunctionContext::basicType() {
  return getRuleContext<AslParser::BasicTypeContext>(0);
}

AslParser::DeclarationsContext* AslParser::FunctionContext::declarations() {
  return getRuleContext<AslParser::DeclarationsContext>(0);
}

AslParser::StatementsContext* AslParser::FunctionContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

AslParser::ReturnInstContext* AslParser::FunctionContext::returnInst() {
  return getRuleContext<AslParser::ReturnInstContext>(0);
}

AslParser::ParamsContext* AslParser::FunctionContext::params() {
  return getRuleContext<AslParser::ParamsContext>(0);
}


size_t AslParser::FunctionContext::getRuleIndex() const {
  return AslParser::RuleFunction;
}

void AslParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void AslParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

AslParser::FunctionContext* AslParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, AslParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(AslParser::FUNC);
    setState(44);
    match(AslParser::ID);
    setState(45);
    match(AslParser::T__0);
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::ID) {
      setState(46);
      params();
    }
    setState(49);
    match(AslParser::T__1);
    setState(59);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::T__2: {
        setState(50);
        match(AslParser::T__2);
        setState(51);
        basicType();
        setState(52);
        declarations();
        setState(53);
        statements();
        setState(54);
        returnInst();
        break;
      }

      case AslParser::VAR:
      case AslParser::IF:
      case AslParser::WHILE:
      case AslParser::ENDFUNC:
      case AslParser::READ:
      case AslParser::WRITE:
      case AslParser::RETURN:
      case AslParser::ID: {
        setState(56);
        declarations();
        setState(57);
        statements();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(61);
    match(AslParser::ENDFUNC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

AslParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AslParser::ParamsContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::ParamsContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

std::vector<AslParser::TypeContext *> AslParser::ParamsContext::type() {
  return getRuleContexts<AslParser::TypeContext>();
}

AslParser::TypeContext* AslParser::ParamsContext::type(size_t i) {
  return getRuleContext<AslParser::TypeContext>(i);
}


size_t AslParser::ParamsContext::getRuleIndex() const {
  return AslParser::RuleParams;
}

void AslParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void AslParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

AslParser::ParamsContext* AslParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 4, AslParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(AslParser::ID);
    setState(64);
    match(AslParser::T__2);
    setState(65);
    type();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(66);
      match(AslParser::T__3);
      setState(67);
      match(AslParser::ID);
      setState(68);
      match(AslParser::T__2);
      setState(69);
      type();
      setState(74);
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

//----------------- DeclarationsContext ------------------------------------------------------------------

AslParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::Variable_declContext *> AslParser::DeclarationsContext::variable_decl() {
  return getRuleContexts<AslParser::Variable_declContext>();
}

AslParser::Variable_declContext* AslParser::DeclarationsContext::variable_decl(size_t i) {
  return getRuleContext<AslParser::Variable_declContext>(i);
}


size_t AslParser::DeclarationsContext::getRuleIndex() const {
  return AslParser::RuleDeclarations;
}

void AslParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void AslParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}

AslParser::DeclarationsContext* AslParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 6, AslParser::RuleDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::VAR) {
      setState(75);
      variable_decl();
      setState(80);
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

//----------------- Variable_declContext ------------------------------------------------------------------

AslParser::Variable_declContext::Variable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Variable_declContext::VAR() {
  return getToken(AslParser::VAR, 0);
}

std::vector<tree::TerminalNode *> AslParser::Variable_declContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::Variable_declContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

AslParser::TypeContext* AslParser::Variable_declContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}


size_t AslParser::Variable_declContext::getRuleIndex() const {
  return AslParser::RuleVariable_decl;
}

void AslParser::Variable_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_decl(this);
}

void AslParser::Variable_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_decl(this);
}

AslParser::Variable_declContext* AslParser::variable_decl() {
  Variable_declContext *_localctx = _tracker.createInstance<Variable_declContext>(_ctx, getState());
  enterRule(_localctx, 8, AslParser::RuleVariable_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(AslParser::VAR);
    setState(82);
    match(AslParser::ID);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(83);
      match(AslParser::T__3);
      setState(84);
      match(AslParser::ID);
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    match(AslParser::T__2);
    setState(91);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

AslParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::BasicTypeContext* AslParser::TypeContext::basicType() {
  return getRuleContext<AslParser::BasicTypeContext>(0);
}

AslParser::ArrayContext* AslParser::TypeContext::array() {
  return getRuleContext<AslParser::ArrayContext>(0);
}


size_t AslParser::TypeContext::getRuleIndex() const {
  return AslParser::RuleType;
}

void AslParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void AslParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

AslParser::TypeContext* AslParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, AslParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::INT:
      case AslParser::FLOAT:
      case AslParser::CHAR:
      case AslParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(93);
        basicType();
        break;
      }

      case AslParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(94);
        array();
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

//----------------- BasicTypeContext ------------------------------------------------------------------

AslParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::BasicTypeContext::INT() {
  return getToken(AslParser::INT, 0);
}

tree::TerminalNode* AslParser::BasicTypeContext::FLOAT() {
  return getToken(AslParser::FLOAT, 0);
}

tree::TerminalNode* AslParser::BasicTypeContext::CHAR() {
  return getToken(AslParser::CHAR, 0);
}

tree::TerminalNode* AslParser::BasicTypeContext::BOOL() {
  return getToken(AslParser::BOOL, 0);
}


size_t AslParser::BasicTypeContext::getRuleIndex() const {
  return AslParser::RuleBasicType;
}

void AslParser::BasicTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicType(this);
}

void AslParser::BasicTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicType(this);
}

AslParser::BasicTypeContext* AslParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, AslParser::RuleBasicType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::INT)
      | (1ULL << AslParser::FLOAT)
      | (1ULL << AslParser::CHAR)
      | (1ULL << AslParser::BOOL))) != 0))) {
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

//----------------- ArrayContext ------------------------------------------------------------------

AslParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ArrayContext::ARRAY() {
  return getToken(AslParser::ARRAY, 0);
}

tree::TerminalNode* AslParser::ArrayContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

tree::TerminalNode* AslParser::ArrayContext::OF() {
  return getToken(AslParser::OF, 0);
}

AslParser::BasicTypeContext* AslParser::ArrayContext::basicType() {
  return getRuleContext<AslParser::BasicTypeContext>(0);
}


size_t AslParser::ArrayContext::getRuleIndex() const {
  return AslParser::RuleArray;
}

void AslParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void AslParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}

AslParser::ArrayContext* AslParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 14, AslParser::RuleArray);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(AslParser::ARRAY);
    setState(100);
    match(AslParser::T__4);
    setState(101);
    match(AslParser::INTVAL);
    setState(102);
    match(AslParser::T__5);
    setState(103);
    match(AslParser::OF);
    setState(104);
    basicType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

AslParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::IdentContext* AslParser::FunctionCallContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

std::vector<AslParser::ExprContext *> AslParser::FunctionCallContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::FunctionCallContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}


size_t AslParser::FunctionCallContext::getRuleIndex() const {
  return AslParser::RuleFunctionCall;
}

void AslParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void AslParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

AslParser::FunctionCallContext* AslParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 16, AslParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    ident();
    setState(107);
    match(AslParser::T__0);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::T__0)
      | (1ULL << AslParser::NOT)
      | (1ULL << AslParser::PLUS)
      | (1ULL << AslParser::MINUS)
      | (1ULL << AslParser::INTVAL)
      | (1ULL << AslParser::FLOATVAL)
      | (1ULL << AslParser::BOOLVAL)
      | (1ULL << AslParser::CHARVAL)
      | (1ULL << AslParser::ID))) != 0)) {
      setState(108);
      expr(0);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AslParser::T__3) {
        setState(109);
        match(AslParser::T__3);
        setState(110);
        expr(0);
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(118);
    match(AslParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

AslParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::StatementContext *> AslParser::StatementsContext::statement() {
  return getRuleContexts<AslParser::StatementContext>();
}

AslParser::StatementContext* AslParser::StatementsContext::statement(size_t i) {
  return getRuleContext<AslParser::StatementContext>(i);
}


size_t AslParser::StatementsContext::getRuleIndex() const {
  return AslParser::RuleStatements;
}

void AslParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void AslParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}

AslParser::StatementsContext* AslParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 18, AslParser::RuleStatements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        statement(); 
      }
      setState(125);
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

//----------------- ReturnInstContext ------------------------------------------------------------------

AslParser::ReturnInstContext::ReturnInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ReturnInstContext::RETURN() {
  return getToken(AslParser::RETURN, 0);
}

AslParser::ExprContext* AslParser::ReturnInstContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}


size_t AslParser::ReturnInstContext::getRuleIndex() const {
  return AslParser::RuleReturnInst;
}

void AslParser::ReturnInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnInst(this);
}

void AslParser::ReturnInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnInst(this);
}

AslParser::ReturnInstContext* AslParser::returnInst() {
  ReturnInstContext *_localctx = _tracker.createInstance<ReturnInstContext>(_ctx, getState());
  enterRule(_localctx, 20, AslParser::RuleReturnInst);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(AslParser::RETURN);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::T__0)
      | (1ULL << AslParser::NOT)
      | (1ULL << AslParser::PLUS)
      | (1ULL << AslParser::MINUS)
      | (1ULL << AslParser::INTVAL)
      | (1ULL << AslParser::FLOATVAL)
      | (1ULL << AslParser::BOOLVAL)
      | (1ULL << AslParser::CHARVAL)
      | (1ULL << AslParser::ID))) != 0)) {
      setState(127);
      expr(0);
    }
    setState(130);
    match(AslParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::StatementContext::getRuleIndex() const {
  return AslParser::RuleStatement;
}

void AslParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WriteExprContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteExprContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

AslParser::ExprContext* AslParser::WriteExprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::WriteExprContext::WriteExprContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::WriteExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWriteExpr(this);
}
void AslParser::WriteExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWriteExpr(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WhileStmtContext::WHILE() {
  return getToken(AslParser::WHILE, 0);
}

AslParser::ExprContext* AslParser::WhileStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::WhileStmtContext::DO() {
  return getToken(AslParser::DO, 0);
}

AslParser::StatementsContext* AslParser::WhileStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::WhileStmtContext::ENDWHILE() {
  return getToken(AslParser::ENDWHILE, 0);
}

AslParser::WhileStmtContext::WhileStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}
void AslParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::IfStmtContext::IF() {
  return getToken(AslParser::IF, 0);
}

AslParser::ExprContext* AslParser::IfStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::THEN() {
  return getToken(AslParser::THEN, 0);
}

AslParser::StatementsContext* AslParser::IfStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::ENDIF() {
  return getToken(AslParser::ENDIF, 0);
}

AslParser::ElseCondContext* AslParser::IfStmtContext::elseCond() {
  return getRuleContext<AslParser::ElseCondContext>(0);
}

AslParser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void AslParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}
//----------------- FunctionCallStmtContext ------------------------------------------------------------------

AslParser::FunctionCallContext* AslParser::FunctionCallStmtContext::functionCall() {
  return getRuleContext<AslParser::FunctionCallContext>(0);
}

AslParser::FunctionCallStmtContext::FunctionCallStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::FunctionCallStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallStmt(this);
}
void AslParser::FunctionCallStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallStmt(this);
}
//----------------- ReadStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ReadStmtContext::READ() {
  return getToken(AslParser::READ, 0);
}

AslParser::Left_exprContext* AslParser::ReadStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

AslParser::ReadStmtContext::ReadStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::ReadStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReadStmt(this);
}
void AslParser::ReadStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReadStmt(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

AslParser::Left_exprContext* AslParser::AssignStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

tree::TerminalNode* AslParser::AssignStmtContext::ASSIGN() {
  return getToken(AslParser::ASSIGN, 0);
}

AslParser::ExprContext* AslParser::AssignStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::AssignStmtContext::AssignStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::AssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStmt(this);
}
void AslParser::AssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStmt(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

AslParser::ReturnInstContext* AslParser::ReturnStmtContext::returnInst() {
  return getRuleContext<AslParser::ReturnInstContext>(0);
}

AslParser::ReturnStmtContext::ReturnStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}
void AslParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}
//----------------- WriteStringContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteStringContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

tree::TerminalNode* AslParser::WriteStringContext::STRING() {
  return getToken(AslParser::STRING, 0);
}

AslParser::WriteStringContext::WriteStringContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::WriteStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWriteString(this);
}
void AslParser::WriteStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWriteString(this);
}
AslParser::StatementContext* AslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, AslParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(132);
      left_expr();
      setState(133);
      match(AslParser::ASSIGN);
      setState(134);
      expr(0);
      setState(135);
      match(AslParser::T__6);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(137);
      match(AslParser::IF);
      setState(138);
      expr(0);
      setState(139);
      match(AslParser::THEN);
      setState(140);
      statements();
      setState(142);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AslParser::ELSE) {
        setState(141);
        elseCond();
      }
      setState(144);
      match(AslParser::ENDIF);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WhileStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(146);
      match(AslParser::WHILE);
      setState(147);
      expr(0);
      setState(148);
      match(AslParser::DO);
      setState(149);
      statements();
      setState(150);
      match(AslParser::ENDWHILE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::FunctionCallStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(152);
      functionCall();
      setState(153);
      match(AslParser::T__6);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReadStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(155);
      match(AslParser::READ);
      setState(156);
      left_expr();
      setState(157);
      match(AslParser::T__6);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteExprContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(159);
      match(AslParser::WRITE);
      setState(160);
      expr(0);
      setState(161);
      match(AslParser::T__6);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteStringContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(163);
      match(AslParser::WRITE);
      setState(164);
      match(AslParser::STRING);
      setState(165);
      match(AslParser::T__6);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReturnStmtContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(166);
      returnInst();
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

//----------------- ElseCondContext ------------------------------------------------------------------

AslParser::ElseCondContext::ElseCondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ElseCondContext::ELSE() {
  return getToken(AslParser::ELSE, 0);
}

AslParser::StatementsContext* AslParser::ElseCondContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}


size_t AslParser::ElseCondContext::getRuleIndex() const {
  return AslParser::RuleElseCond;
}

void AslParser::ElseCondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseCond(this);
}

void AslParser::ElseCondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseCond(this);
}

AslParser::ElseCondContext* AslParser::elseCond() {
  ElseCondContext *_localctx = _tracker.createInstance<ElseCondContext>(_ctx, getState());
  enterRule(_localctx, 24, AslParser::RuleElseCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(AslParser::ELSE);
    setState(170);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

AslParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::ExprContext::getRuleIndex() const {
  return AslParser::RuleExpr;
}

void AslParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentExprContext ------------------------------------------------------------------

AslParser::Ident_referContext* AslParser::IdentExprContext::ident_refer() {
  return getRuleContext<AslParser::Ident_referContext>(0);
}

AslParser::IdentExprContext::IdentExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::IdentExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentExpr(this);
}
void AslParser::IdentExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentExpr(this);
}
//----------------- UnaryExprContext ------------------------------------------------------------------

AslParser::ExprContext* AslParser::UnaryExprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::UnaryExprContext::NOT() {
  return getToken(AslParser::NOT, 0);
}

tree::TerminalNode* AslParser::UnaryExprContext::MINUS() {
  return getToken(AslParser::MINUS, 0);
}

tree::TerminalNode* AslParser::UnaryExprContext::PLUS() {
  return getToken(AslParser::PLUS, 0);
}

AslParser::UnaryExprContext::UnaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::UnaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpr(this);
}
void AslParser::UnaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpr(this);
}
//----------------- ValueExprContext ------------------------------------------------------------------

AslParser::ValueContext* AslParser::ValueExprContext::value() {
  return getRuleContext<AslParser::ValueContext>(0);
}

AslParser::ValueExprContext::ValueExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ValueExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueExpr(this);
}
void AslParser::ValueExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueExpr(this);
}
//----------------- BooleanExprContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::BooleanExprContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::BooleanExprContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::BooleanExprContext::AND() {
  return getToken(AslParser::AND, 0);
}

tree::TerminalNode* AslParser::BooleanExprContext::OR() {
  return getToken(AslParser::OR, 0);
}

AslParser::BooleanExprContext::BooleanExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::BooleanExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanExpr(this);
}
void AslParser::BooleanExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanExpr(this);
}
//----------------- FunctionCallExprContext ------------------------------------------------------------------

AslParser::FunctionCallContext* AslParser::FunctionCallExprContext::functionCall() {
  return getRuleContext<AslParser::FunctionCallContext>(0);
}

AslParser::FunctionCallExprContext::FunctionCallExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::FunctionCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpr(this);
}
void AslParser::FunctionCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpr(this);
}
//----------------- ArithmeticExprContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::ArithmeticExprContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ArithmeticExprContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::ArithmeticExprContext::MUL() {
  return getToken(AslParser::MUL, 0);
}

tree::TerminalNode* AslParser::ArithmeticExprContext::DIV() {
  return getToken(AslParser::DIV, 0);
}

tree::TerminalNode* AslParser::ArithmeticExprContext::MOD() {
  return getToken(AslParser::MOD, 0);
}

tree::TerminalNode* AslParser::ArithmeticExprContext::PLUS() {
  return getToken(AslParser::PLUS, 0);
}

tree::TerminalNode* AslParser::ArithmeticExprContext::MINUS() {
  return getToken(AslParser::MINUS, 0);
}

AslParser::ArithmeticExprContext::ArithmeticExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ArithmeticExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpr(this);
}
void AslParser::ArithmeticExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpr(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

AslParser::ExprContext* AslParser::SubExprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::SubExprContext::SubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void AslParser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::RelationalExprContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::RelationalExprContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::RelationalExprContext::EQ() {
  return getToken(AslParser::EQ, 0);
}

tree::TerminalNode* AslParser::RelationalExprContext::NEQ() {
  return getToken(AslParser::NEQ, 0);
}

tree::TerminalNode* AslParser::RelationalExprContext::GT() {
  return getToken(AslParser::GT, 0);
}

tree::TerminalNode* AslParser::RelationalExprContext::LT() {
  return getToken(AslParser::LT, 0);
}

tree::TerminalNode* AslParser::RelationalExprContext::LET() {
  return getToken(AslParser::LET, 0);
}

tree::TerminalNode* AslParser::RelationalExprContext::GET() {
  return getToken(AslParser::GET, 0);
}

AslParser::RelationalExprContext::RelationalExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::RelationalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpr(this);
}
void AslParser::RelationalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpr(this);
}

AslParser::ExprContext* AslParser::expr() {
   return expr(0);
}

AslParser::ExprContext* AslParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AslParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  AslParser::ExprContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, AslParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(182);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(173);
      dynamic_cast<UnaryExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::NOT)
        | (1ULL << AslParser::PLUS)
        | (1ULL << AslParser::MINUS))) != 0))) {
        dynamic_cast<UnaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(174);
      expr(10);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SubExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(175);
      match(AslParser::T__0);
      setState(176);
      expr(0);
      setState(177);
      match(AslParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValueExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(179);
      value();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(180);
      functionCall();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdentExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(181);
      ident_refer();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(199);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(184);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(185);
          dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AslParser::MUL)
            | (1ULL << AslParser::DIV)
            | (1ULL << AslParser::MOD))) != 0))) {
            dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(186);
          expr(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(187);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(188);
          dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == AslParser::PLUS

          || _la == AslParser::MINUS)) {
            dynamic_cast<ArithmeticExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(189);
          expr(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(190);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(191);
          dynamic_cast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AslParser::EQ)
            | (1ULL << AslParser::NEQ)
            | (1ULL << AslParser::GT)
            | (1ULL << AslParser::LT)
            | (1ULL << AslParser::GET)
            | (1ULL << AslParser::LET))) != 0))) {
            dynamic_cast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(192);
          expr(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BooleanExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(193);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(194);
          dynamic_cast<BooleanExprContext *>(_localctx)->op = match(AslParser::AND);
          setState(195);
          expr(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BooleanExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(196);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(197);
          dynamic_cast<BooleanExprContext *>(_localctx)->op = match(AslParser::OR);
          setState(198);
          expr(6);
          break;
        }

        } 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

AslParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ValueContext::BOOLVAL() {
  return getToken(AslParser::BOOLVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::CHARVAL() {
  return getToken(AslParser::CHARVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::FLOATVAL() {
  return getToken(AslParser::FLOATVAL, 0);
}


size_t AslParser::ValueContext::getRuleIndex() const {
  return AslParser::RuleValue;
}

void AslParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void AslParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

AslParser::ValueContext* AslParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 28, AslParser::RuleValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::INTVAL)
      | (1ULL << AslParser::FLOATVAL)
      | (1ULL << AslParser::BOOLVAL)
      | (1ULL << AslParser::CHARVAL))) != 0))) {
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

//----------------- Left_exprContext ------------------------------------------------------------------

AslParser::Left_exprContext::Left_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::Ident_referContext* AslParser::Left_exprContext::ident_refer() {
  return getRuleContext<AslParser::Ident_referContext>(0);
}


size_t AslParser::Left_exprContext::getRuleIndex() const {
  return AslParser::RuleLeft_expr;
}

void AslParser::Left_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeft_expr(this);
}

void AslParser::Left_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeft_expr(this);
}

AslParser::Left_exprContext* AslParser::left_expr() {
  Left_exprContext *_localctx = _tracker.createInstance<Left_exprContext>(_ctx, getState());
  enterRule(_localctx, 30, AslParser::RuleLeft_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    ident_refer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ident_referContext ------------------------------------------------------------------

AslParser::Ident_referContext::Ident_referContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::IdentContext* AslParser::Ident_referContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

AslParser::ExprContext* AslParser::Ident_referContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}


size_t AslParser::Ident_referContext::getRuleIndex() const {
  return AslParser::RuleIdent_refer;
}

void AslParser::Ident_referContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_refer(this);
}

void AslParser::Ident_referContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_refer(this);
}

AslParser::Ident_referContext* AslParser::ident_refer() {
  Ident_referContext *_localctx = _tracker.createInstance<Ident_referContext>(_ctx, getState());
  enterRule(_localctx, 32, AslParser::RuleIdent_refer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    ident();
    setState(213);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(209);
      match(AslParser::T__4);
      setState(210);
      expr(0);
      setState(211);
      match(AslParser::T__5);
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

//----------------- IdentContext ------------------------------------------------------------------

AslParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::IdentContext::ID() {
  return getToken(AslParser::ID, 0);
}


size_t AslParser::IdentContext::getRuleIndex() const {
  return AslParser::RuleIdent;
}

void AslParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void AslParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}

AslParser::IdentContext* AslParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 34, AslParser::RuleIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(AslParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool AslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AslParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> AslParser::_decisionToDFA;
atn::PredictionContextCache AslParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN AslParser::_atn;
std::vector<uint16_t> AslParser::_serializedATN;

std::vector<std::string> AslParser::_ruleNames = {
  "program", "function", "params", "declarations", "variable_decl", "type", 
  "basicType", "array", "functionCall", "statements", "returnInst", "statement", 
  "elseCond", "expr", "value", "left_expr", "ident_refer", "ident"
};

std::vector<std::string> AslParser::_literalNames = {
  "", "'('", "')'", "':'", "','", "'['", "']'", "';'", "'='", "'=='", "'!='", 
  "'>'", "'<'", "'>='", "'<='", "'and'", "'or'", "'not'", "'+'", "'*'", 
  "'/'", "'-'", "'%'", "'var'", "'int'", "'float'", "'char'", "'bool'", 
  "'array'", "'of'", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", 
  "'endwhile'", "'func'", "'endfunc'", "'read'", "'write'", "'return'"
};

std::vector<std::string> AslParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "ASSIGN", "EQ", "NEQ", "GT", "LT", "GET", 
  "LET", "AND", "OR", "NOT", "PLUS", "MUL", "DIV", "MINUS", "MOD", "VAR", 
  "INT", "FLOAT", "CHAR", "BOOL", "ARRAY", "OF", "IF", "THEN", "ELSE", "ENDIF", 
  "WHILE", "DO", "ENDWHILE", "FUNC", "ENDFUNC", "READ", "WRITE", "RETURN", 
  "INTVAL", "FLOATVAL", "BOOLVAL", "CHARVAL", "ID", "STRING", "COMMENT", 
  "WS"
};

dfa::Vocabulary AslParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> AslParser::_tokenNames;

AslParser::Initializer::Initializer() {
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
    0x3, 0x33, 0xdc, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x6, 0x2, 0x28, 0xa, 0x2, 
    0xd, 0x2, 0xe, 0x2, 0x29, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x32, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x3e, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x49, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x4c, 0xb, 0x4, 0x3, 0x5, 0x7, 0x5, 0x4f, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x52, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x58, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x5b, 0xb, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x62, 0xa, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x7, 0xa, 0x72, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x75, 0xb, 0xa, 0x5, 0xa, 
    0x77, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 0xb, 0x7c, 0xa, 0xb, 
    0xc, 0xb, 0xe, 0xb, 0x7f, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x83, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x91, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xaa, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb9, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0xca, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xcd, 0xb, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd8, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x2, 0x3, 0x1c, 0x14, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x2, 0x8, 0x3, 0x2, 0x1a, 0x1d, 0x4, 0x2, 0x13, 0x14, 0x17, 0x17, 
    0x4, 0x2, 0x15, 0x16, 0x18, 0x18, 0x4, 0x2, 0x14, 0x14, 0x17, 0x17, 
    0x3, 0x2, 0xb, 0x10, 0x3, 0x2, 0x2c, 0x2f, 0x2, 0xe6, 0x2, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x50, 0x3, 0x2, 0x2, 0x2, 0xa, 0x53, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0xe, 0x63, 0x3, 0x2, 0x2, 0x2, 0x10, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x80, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa9, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xab, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xce, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x28, 0x5, 0x4, 0x3, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x2, 
    0x2, 0x3, 0x2c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x27, 0x2, 
    0x2, 0x2e, 0x2f, 0x7, 0x30, 0x2, 0x2, 0x2f, 0x31, 0x7, 0x3, 0x2, 0x2, 
    0x30, 0x32, 0x5, 0x6, 0x4, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x3d, 
    0x7, 0x4, 0x2, 0x2, 0x34, 0x35, 0x7, 0x5, 0x2, 0x2, 0x35, 0x36, 0x5, 
    0xe, 0x8, 0x2, 0x36, 0x37, 0x5, 0x8, 0x5, 0x2, 0x37, 0x38, 0x5, 0x14, 
    0xb, 0x2, 0x38, 0x39, 0x5, 0x16, 0xc, 0x2, 0x39, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x3b, 0x5, 0x8, 0x5, 0x2, 0x3b, 0x3c, 0x5, 0x14, 0xb, 0x2, 
    0x3c, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x34, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 
    0x7, 0x28, 0x2, 0x2, 0x40, 0x5, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 
    0x30, 0x2, 0x2, 0x42, 0x43, 0x7, 0x5, 0x2, 0x2, 0x43, 0x4a, 0x5, 0xc, 
    0x7, 0x2, 0x44, 0x45, 0x7, 0x6, 0x2, 0x2, 0x45, 0x46, 0x7, 0x30, 0x2, 
    0x2, 0x46, 0x47, 0x7, 0x5, 0x2, 0x2, 0x47, 0x49, 0x5, 0xc, 0x7, 0x2, 
    0x48, 0x44, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x5, 
    0xa, 0x6, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x9, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x53, 0x54, 0x7, 0x19, 0x2, 0x2, 0x54, 0x59, 0x7, 0x30, 0x2, 0x2, 0x55, 
    0x56, 0x7, 0x6, 0x2, 0x2, 0x56, 0x58, 0x7, 0x30, 0x2, 0x2, 0x57, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x5, 0x2, 
    0x2, 0x5d, 0x5e, 0x5, 0xc, 0x7, 0x2, 0x5e, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x62, 0x5, 0xe, 0x8, 0x2, 0x60, 0x62, 0x5, 0x10, 0x9, 0x2, 0x61, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x9, 0x2, 0x2, 0x2, 0x64, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x1e, 0x2, 0x2, 0x66, 0x67, 0x7, 0x7, 
    0x2, 0x2, 0x67, 0x68, 0x7, 0x2c, 0x2, 0x2, 0x68, 0x69, 0x7, 0x8, 0x2, 
    0x2, 0x69, 0x6a, 0x7, 0x1f, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0xe, 0x8, 0x2, 
    0x6b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x24, 0x13, 0x2, 0x6d, 
    0x76, 0x7, 0x3, 0x2, 0x2, 0x6e, 0x73, 0x5, 0x1c, 0xf, 0x2, 0x6f, 0x70, 
    0x7, 0x6, 0x2, 0x2, 0x70, 0x72, 0x5, 0x1c, 0xf, 0x2, 0x71, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x79, 0x7, 0x4, 0x2, 0x2, 0x79, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 
    0x5, 0x18, 0xd, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x82, 0x7, 0x2b, 0x2, 0x2, 0x81, 0x83, 0x5, 0x1c, 0xf, 0x2, 
    0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x9, 0x2, 0x2, 0x85, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x5, 0x20, 0x11, 0x2, 0x87, 0x88, 0x7, 
    0xa, 0x2, 0x2, 0x88, 0x89, 0x5, 0x1c, 0xf, 0x2, 0x89, 0x8a, 0x7, 0x9, 
    0x2, 0x2, 0x8a, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x20, 0x2, 
    0x2, 0x8c, 0x8d, 0x5, 0x1c, 0xf, 0x2, 0x8d, 0x8e, 0x7, 0x21, 0x2, 0x2, 
    0x8e, 0x90, 0x5, 0x14, 0xb, 0x2, 0x8f, 0x91, 0x5, 0x1a, 0xe, 0x2, 0x90, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x23, 0x2, 0x2, 0x93, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x24, 0x2, 0x2, 0x95, 0x96, 0x5, 0x1c, 
    0xf, 0x2, 0x96, 0x97, 0x7, 0x25, 0x2, 0x2, 0x97, 0x98, 0x5, 0x14, 0xb, 
    0x2, 0x98, 0x99, 0x7, 0x26, 0x2, 0x2, 0x99, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x5, 0x12, 0xa, 0x2, 0x9b, 0x9c, 0x7, 0x9, 0x2, 0x2, 0x9c, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x29, 0x2, 0x2, 0x9e, 0x9f, 
    0x5, 0x20, 0x11, 0x2, 0x9f, 0xa0, 0x7, 0x9, 0x2, 0x2, 0xa0, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x2a, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x1c, 
    0xf, 0x2, 0xa3, 0xa4, 0x7, 0x9, 0x2, 0x2, 0xa4, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0xa6, 0x7, 0x2a, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x31, 0x2, 0x2, 
    0xa7, 0xaa, 0x7, 0x9, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x16, 0xc, 0x2, 0xa9, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x8b, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xac, 0x7, 0x22, 0x2, 0x2, 0xac, 0xad, 0x5, 0x14, 0xb, 0x2, 
    0xad, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x8, 0xf, 0x1, 0x2, 0xaf, 
    0xb0, 0x9, 0x3, 0x2, 0x2, 0xb0, 0xb9, 0x5, 0x1c, 0xf, 0xc, 0xb1, 0xb2, 
    0x7, 0x3, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x1c, 0xf, 0x2, 0xb3, 0xb4, 0x7, 
    0x4, 0x2, 0x2, 0xb4, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb9, 0x5, 0x1e, 
    0x10, 0x2, 0xb6, 0xb9, 0x5, 0x12, 0xa, 0x2, 0xb7, 0xb9, 0x5, 0x22, 0x12, 
    0x2, 0xb8, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0xc, 0xb, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x4, 0x2, 0x2, 0xbc, 0xca, 0x5, 
    0x1c, 0xf, 0xc, 0xbd, 0xbe, 0xc, 0xa, 0x2, 0x2, 0xbe, 0xbf, 0x9, 0x5, 
    0x2, 0x2, 0xbf, 0xca, 0x5, 0x1c, 0xf, 0xb, 0xc0, 0xc1, 0xc, 0x9, 0x2, 
    0x2, 0xc1, 0xc2, 0x9, 0x6, 0x2, 0x2, 0xc2, 0xca, 0x5, 0x1c, 0xf, 0xa, 
    0xc3, 0xc4, 0xc, 0x8, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x11, 0x2, 0x2, 0xc5, 
    0xca, 0x5, 0x1c, 0xf, 0x9, 0xc6, 0xc7, 0xc, 0x7, 0x2, 0x2, 0xc7, 0xc8, 
    0x7, 0x12, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x1c, 0xf, 0x8, 0xc9, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x9, 0x7, 0x2, 0x2, 0xcf, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x22, 0x12, 0x2, 0xd1, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd7, 0x5, 0x24, 0x13, 0x2, 0xd3, 0xd4, 0x7, 0x7, 
    0x2, 0x2, 0xd4, 0xd5, 0x5, 0x1c, 0xf, 0x2, 0xd5, 0xd6, 0x7, 0x8, 0x2, 
    0x2, 0xd6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xda, 0x7, 0x30, 0x2, 0x2, 0xda, 0x25, 0x3, 0x2, 0x2, 0x2, 0x13, 0x29, 
    0x31, 0x3d, 0x4a, 0x50, 0x59, 0x61, 0x73, 0x76, 0x7d, 0x82, 0x90, 0xa9, 
    0xb8, 0xc9, 0xcb, 0xd7, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

AslParser::Initializer AslParser::_init;
