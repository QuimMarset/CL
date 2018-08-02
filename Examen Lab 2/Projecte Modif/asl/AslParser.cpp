
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
    setState(45); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(44);
      function();
      setState(47); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AslParser::FUNC);
    setState(49);
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
    setState(51);
    match(AslParser::FUNC);
    setState(52);
    match(AslParser::ID);
    setState(53);
    match(AslParser::T__0);
    setState(55);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::ID) {
      setState(54);
      params();
    }
    setState(57);
    match(AslParser::T__1);
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::T__2: {
        setState(58);
        match(AslParser::T__2);
        setState(59);
        basicType();
        setState(60);
        declarations();
        setState(61);
        statements();
        setState(62);
        returnInst();
        break;
      }

      case AslParser::T__4:
      case AslParser::VAR:
      case AslParser::IF:
      case AslParser::WHILE:
      case AslParser::ENDFUNC:
      case AslParser::READ:
      case AslParser::WRITE:
      case AslParser::RETURN:
      case AslParser::REPEAT:
      case AslParser::SWITCH:
      case AslParser::ID: {
        setState(64);
        declarations();
        setState(65);
        statements();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(69);
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
    setState(71);
    match(AslParser::ID);
    setState(72);
    match(AslParser::T__2);
    setState(73);
    type();
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(74);
      match(AslParser::T__3);
      setState(75);
      match(AslParser::ID);
      setState(76);
      match(AslParser::T__2);
      setState(77);
      type();
      setState(82);
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
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::VAR) {
      setState(83);
      variable_decl();
      setState(88);
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
    setState(89);
    match(AslParser::VAR);
    setState(90);
    match(AslParser::ID);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(91);
      match(AslParser::T__3);
      setState(92);
      match(AslParser::ID);
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(AslParser::T__2);
    setState(99);
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
    setState(103);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::INT:
      case AslParser::FLOAT:
      case AslParser::CHAR:
      case AslParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(101);
        basicType();
        break;
      }

      case AslParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(102);
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
    setState(105);
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

AslParser::TypeContext* AslParser::ArrayContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
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
    setState(107);
    match(AslParser::ARRAY);
    setState(108);
    match(AslParser::T__4);
    setState(109);
    match(AslParser::INTVAL);
    setState(110);
    match(AslParser::T__5);
    setState(111);
    match(AslParser::OF);
    setState(112);
    type();
   
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
    setState(114);
    ident();
    setState(115);
    match(AslParser::T__0);
    setState(124);
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
      setState(116);
      expr(0);
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AslParser::T__3) {
        setState(117);
        match(AslParser::T__3);
        setState(118);
        expr(0);
        setState(123);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(126);
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
    setState(131);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(128);
        statement(); 
      }
      setState(133);
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
    setState(134);
    match(AslParser::RETURN);
    setState(136);
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
      setState(135);
      expr(0);
    }
    setState(138);
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

//----------------- SwitchStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::SwitchStmtContext::SWITCH() {
  return getToken(AslParser::SWITCH, 0);
}

AslParser::ExprContext* AslParser::SwitchStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::SwitchStmtContext::ENDSWITCH() {
  return getToken(AslParser::ENDSWITCH, 0);
}

std::vector<AslParser::CaseValContext *> AslParser::SwitchStmtContext::caseVal() {
  return getRuleContexts<AslParser::CaseValContext>();
}

AslParser::CaseValContext* AslParser::SwitchStmtContext::caseVal(size_t i) {
  return getRuleContext<AslParser::CaseValContext>(i);
}

AslParser::DefaultCaseContext* AslParser::SwitchStmtContext::defaultCase() {
  return getRuleContext<AslParser::DefaultCaseContext>(0);
}

AslParser::SwitchStmtContext::SwitchStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::SwitchStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStmt(this);
}
void AslParser::SwitchStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStmt(this);
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
//----------------- RepeatStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::RepeatStmtContext::REPEAT() {
  return getToken(AslParser::REPEAT, 0);
}

AslParser::StatementsContext* AslParser::RepeatStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::RepeatStmtContext::UNTIL() {
  return getToken(AslParser::UNTIL, 0);
}

AslParser::ExprContext* AslParser::RepeatStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::RepeatStmtContext::ENDREPEAT() {
  return getToken(AslParser::ENDREPEAT, 0);
}

AslParser::RepeatStmtContext::RepeatStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::RepeatStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStmt(this);
}
void AslParser::RepeatStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStmt(this);
}
//----------------- MultiAssignStmtContext ------------------------------------------------------------------

AslParser::Multi_idContext* AslParser::MultiAssignStmtContext::multi_id() {
  return getRuleContext<AslParser::Multi_idContext>(0);
}

tree::TerminalNode* AslParser::MultiAssignStmtContext::ASSIGN() {
  return getToken(AslParser::ASSIGN, 0);
}

AslParser::Multi_exprContext* AslParser::MultiAssignStmtContext::multi_expr() {
  return getRuleContext<AslParser::Multi_exprContext>(0);
}

AslParser::MultiAssignStmtContext::MultiAssignStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::MultiAssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiAssignStmt(this);
}
void AslParser::MultiAssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiAssignStmt(this);
}
AslParser::StatementContext* AslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, AslParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(140);
      left_expr();
      setState(141);
      match(AslParser::ASSIGN);
      setState(142);
      expr(0);
      setState(143);
      match(AslParser::T__6);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(AslParser::IF);
      setState(146);
      expr(0);
      setState(147);
      match(AslParser::THEN);
      setState(148);
      statements();
      setState(150);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AslParser::ELSE) {
        setState(149);
        elseCond();
      }
      setState(152);
      match(AslParser::ENDIF);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WhileStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(154);
      match(AslParser::WHILE);
      setState(155);
      expr(0);
      setState(156);
      match(AslParser::DO);
      setState(157);
      statements();
      setState(158);
      match(AslParser::ENDWHILE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::RepeatStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(160);
      match(AslParser::REPEAT);
      setState(161);
      statements();
      setState(162);
      match(AslParser::UNTIL);
      setState(163);
      expr(0);
      setState(164);
      match(AslParser::ENDREPEAT);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::FunctionCallStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(166);
      functionCall();
      setState(167);
      match(AslParser::T__6);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReadStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(169);
      match(AslParser::READ);
      setState(170);
      left_expr();
      setState(171);
      match(AslParser::T__6);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteExprContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(173);
      match(AslParser::WRITE);
      setState(174);
      expr(0);
      setState(175);
      match(AslParser::T__6);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteStringContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(177);
      match(AslParser::WRITE);
      setState(178);
      match(AslParser::STRING);
      setState(179);
      match(AslParser::T__6);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReturnStmtContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(180);
      returnInst();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::MultiAssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(181);
      match(AslParser::T__4);
      setState(182);
      multi_id();
      setState(183);
      match(AslParser::T__5);
      setState(184);
      match(AslParser::ASSIGN);
      setState(185);
      match(AslParser::T__4);
      setState(186);
      multi_expr();
      setState(187);
      match(AslParser::T__5);
      setState(188);
      match(AslParser::T__6);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::SwitchStmtContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(190);
      match(AslParser::SWITCH);
      setState(191);
      match(AslParser::T__0);
      setState(192);
      expr(0);
      setState(193);
      match(AslParser::T__1);
      setState(195); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(194);
        caseVal();
        setState(197); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == AslParser::CASE);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AslParser::DEFAULT) {
        setState(199);
        defaultCase();
      }
      setState(202);
      match(AslParser::ENDSWITCH);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::SwitchStmtContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(204);
      match(AslParser::SWITCH);
      setState(205);
      match(AslParser::T__0);
      setState(206);
      expr(0);
      setState(207);
      match(AslParser::T__1);
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AslParser::CASE) {
        setState(208);
        caseVal();
        setState(213);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(214);
      defaultCase();
      setState(215);
      match(AslParser::ENDSWITCH);
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
    setState(219);
    match(AslParser::ELSE);
    setState(220);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_idContext ------------------------------------------------------------------

AslParser::Multi_idContext::Multi_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::Left_exprContext *> AslParser::Multi_idContext::left_expr() {
  return getRuleContexts<AslParser::Left_exprContext>();
}

AslParser::Left_exprContext* AslParser::Multi_idContext::left_expr(size_t i) {
  return getRuleContext<AslParser::Left_exprContext>(i);
}


size_t AslParser::Multi_idContext::getRuleIndex() const {
  return AslParser::RuleMulti_id;
}

void AslParser::Multi_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_id(this);
}

void AslParser::Multi_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_id(this);
}

AslParser::Multi_idContext* AslParser::multi_id() {
  Multi_idContext *_localctx = _tracker.createInstance<Multi_idContext>(_ctx, getState());
  enterRule(_localctx, 26, AslParser::RuleMulti_id);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    left_expr();
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(223);
      match(AslParser::T__3);
      setState(224);
      left_expr();
      setState(229);
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

//----------------- Multi_exprContext ------------------------------------------------------------------

AslParser::Multi_exprContext::Multi_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::ExprContext *> AslParser::Multi_exprContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::Multi_exprContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}


size_t AslParser::Multi_exprContext::getRuleIndex() const {
  return AslParser::RuleMulti_expr;
}

void AslParser::Multi_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_expr(this);
}

void AslParser::Multi_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_expr(this);
}

AslParser::Multi_exprContext* AslParser::multi_expr() {
  Multi_exprContext *_localctx = _tracker.createInstance<Multi_exprContext>(_ctx, getState());
  enterRule(_localctx, 28, AslParser::RuleMulti_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    expr(0);
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(231);
      match(AslParser::T__3);
      setState(232);
      expr(0);
      setState(237);
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

//----------------- CaseValContext ------------------------------------------------------------------

AslParser::CaseValContext::CaseValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::CaseValContext::CASE() {
  return getToken(AslParser::CASE, 0);
}

AslParser::ValueContext* AslParser::CaseValContext::value() {
  return getRuleContext<AslParser::ValueContext>(0);
}

AslParser::StatementsContext* AslParser::CaseValContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}


size_t AslParser::CaseValContext::getRuleIndex() const {
  return AslParser::RuleCaseVal;
}

void AslParser::CaseValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseVal(this);
}

void AslParser::CaseValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseVal(this);
}

AslParser::CaseValContext* AslParser::caseVal() {
  CaseValContext *_localctx = _tracker.createInstance<CaseValContext>(_ctx, getState());
  enterRule(_localctx, 30, AslParser::RuleCaseVal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(AslParser::CASE);
    setState(239);
    value();
    setState(240);
    match(AslParser::T__2);
    setState(241);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultCaseContext ------------------------------------------------------------------

AslParser::DefaultCaseContext::DefaultCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::DefaultCaseContext::DEFAULT() {
  return getToken(AslParser::DEFAULT, 0);
}

AslParser::StatementsContext* AslParser::DefaultCaseContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}


size_t AslParser::DefaultCaseContext::getRuleIndex() const {
  return AslParser::RuleDefaultCase;
}

void AslParser::DefaultCaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultCase(this);
}

void AslParser::DefaultCaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultCase(this);
}

AslParser::DefaultCaseContext* AslParser::defaultCase() {
  DefaultCaseContext *_localctx = _tracker.createInstance<DefaultCaseContext>(_ctx, getState());
  enterRule(_localctx, 32, AslParser::RuleDefaultCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(AslParser::DEFAULT);
    setState(244);
    match(AslParser::T__2);
    setState(245);
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
//----------------- PowerExprContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::PowerExprContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::PowerExprContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::PowerExprContext::POWER() {
  return getToken(AslParser::POWER, 0);
}

AslParser::PowerExprContext::PowerExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::PowerExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpr(this);
}
void AslParser::PowerExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpr(this);
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, AslParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(248);
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
      setState(249);
      expr(11);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SubExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(250);
      match(AslParser::T__0);
      setState(251);
      expr(0);
      setState(252);
      match(AslParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValueExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(254);
      value();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(255);
      functionCall();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdentExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(256);
      ident_refer();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(279);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(277);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(259);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(260);
          dynamic_cast<PowerExprContext *>(_localctx)->op = match(AslParser::POWER);
          setState(261);
          expr(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(262);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(263);
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
          setState(264);
          expr(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(265);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(266);
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
          setState(267);
          expr(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(268);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(269);
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
          setState(270);
          expr(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BooleanExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(271);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(272);
          dynamic_cast<BooleanExprContext *>(_localctx)->op = match(AslParser::AND);
          setState(273);
          expr(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BooleanExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(274);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(275);
          dynamic_cast<BooleanExprContext *>(_localctx)->op = match(AslParser::OR);
          setState(276);
          expr(6);
          break;
        }

        } 
      }
      setState(281);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  enterRule(_localctx, 36, AslParser::RuleValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
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
  enterRule(_localctx, 38, AslParser::RuleLeft_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
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

std::vector<AslParser::ExprContext *> AslParser::Ident_referContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::Ident_referContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
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
  enterRule(_localctx, 40, AslParser::RuleIdent_refer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(286);
    ident();
    setState(293);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(287);
        match(AslParser::T__4);
        setState(288);
        expr(0);
        setState(289);
        match(AslParser::T__5); 
      }
      setState(295);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
  enterRule(_localctx, 42, AslParser::RuleIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
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
    case 17: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AslParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);

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
  "elseCond", "multi_id", "multi_expr", "caseVal", "defaultCase", "expr", 
  "value", "left_expr", "ident_refer", "ident"
};

std::vector<std::string> AslParser::_literalNames = {
  "", "'('", "')'", "':'", "','", "'['", "']'", "';'", "'='", "'=='", "'!='", 
  "'>'", "'<'", "'>='", "'<='", "'and'", "'or'", "'not'", "'+'", "'*'", 
  "'/'", "'-'", "'%'", "'var'", "'int'", "'float'", "'char'", "'bool'", 
  "'array'", "'of'", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", 
  "'endwhile'", "'func'", "'endfunc'", "'read'", "'write'", "'return'", 
  "'repeat'", "'until'", "'endrepeat'", "'^'", "'switch'", "'case'", "'default'", 
  "'endswitch'"
};

std::vector<std::string> AslParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "ASSIGN", "EQ", "NEQ", "GT", "LT", "GET", 
  "LET", "AND", "OR", "NOT", "PLUS", "MUL", "DIV", "MINUS", "MOD", "VAR", 
  "INT", "FLOAT", "CHAR", "BOOL", "ARRAY", "OF", "IF", "THEN", "ELSE", "ENDIF", 
  "WHILE", "DO", "ENDWHILE", "FUNC", "ENDFUNC", "READ", "WRITE", "RETURN", 
  "REPEAT", "UNTIL", "ENDREPEAT", "POWER", "SWITCH", "CASE", "DEFAULT", 
  "ENDSWITCH", "INTVAL", "FLOATVAL", "BOOLVAL", "CHARVAL", "ID", "STRING", 
  "COMMENT", "WS"
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
    0x3, 0x3b, 0x12d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x6, 
    0x2, 0x30, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x31, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3a, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x46, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x51, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x54, 0xb, 0x4, 0x3, 0x5, 0x7, 
    0x5, 0x57, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x5a, 0xb, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x60, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x63, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x6a, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7a, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x7d, 
    0xb, 0xa, 0x5, 0xa, 0x7f, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 
    0xb, 0x84, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x87, 0xb, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x8b, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0x99, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xc6, 0xa, 0xd, 
    0xd, 0xd, 0xe, 0xd, 0xc7, 0x3, 0xd, 0x5, 0xd, 0xcb, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0xd4, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xd7, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xdc, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xe4, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0xe7, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xec, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0xef, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x104, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x118, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x11b, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x7, 0x16, 0x126, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x129, 0xb, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x2, 0x3, 0x24, 0x18, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x8, 0x3, 0x2, 0x1a, 
    0x1d, 0x4, 0x2, 0x13, 0x14, 0x17, 0x17, 0x4, 0x2, 0x15, 0x16, 0x18, 
    0x18, 0x4, 0x2, 0x14, 0x14, 0x17, 0x17, 0x3, 0x2, 0xb, 0x10, 0x3, 0x2, 
    0x34, 0x37, 0x2, 0x13d, 0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x49, 0x3, 0x2, 0x2, 0x2, 0x8, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x85, 0x3, 0x2, 0x2, 0x2, 0x16, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x22, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x103, 0x3, 0x2, 0x2, 0x2, 0x26, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x120, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x2e, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x34, 0x7, 0x2, 0x2, 0x3, 0x34, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x36, 0x7, 0x27, 0x2, 0x2, 0x36, 0x37, 0x7, 0x38, 0x2, 0x2, 0x37, 
    0x39, 0x7, 0x3, 0x2, 0x2, 0x38, 0x3a, 0x5, 0x6, 0x4, 0x2, 0x39, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x45, 0x7, 0x4, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x5, 
    0x2, 0x2, 0x3d, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x3e, 0x3f, 0x5, 0x8, 0x5, 
    0x2, 0x3f, 0x40, 0x5, 0x14, 0xb, 0x2, 0x40, 0x41, 0x5, 0x16, 0xc, 0x2, 
    0x41, 0x46, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0x8, 0x5, 0x2, 0x43, 
    0x44, 0x5, 0x14, 0xb, 0x2, 0x44, 0x46, 0x3, 0x2, 0x2, 0x2, 0x45, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x42, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x28, 0x2, 0x2, 0x48, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4a, 0x7, 0x38, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x5, 0x2, 
    0x2, 0x4b, 0x52, 0x5, 0xc, 0x7, 0x2, 0x4c, 0x4d, 0x7, 0x6, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0x38, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x5, 0x2, 0x2, 0x4f, 
    0x51, 0x5, 0xc, 0x7, 0x2, 0x50, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x7, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x55, 0x57, 0x5, 0xa, 0x6, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x19, 0x2, 0x2, 0x5c, 0x61, 
    0x7, 0x38, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x6, 0x2, 0x2, 0x5e, 0x60, 0x7, 
    0x38, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x7, 0x5, 0x2, 0x2, 0x65, 0x66, 0x5, 0xc, 0x7, 0x2, 0x66, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x5, 0xe, 0x8, 0x2, 0x68, 0x6a, 
    0x5, 0x10, 0x9, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x9, 0x2, 
    0x2, 0x2, 0x6c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x1e, 0x2, 
    0x2, 0x6e, 0x6f, 0x7, 0x7, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x34, 0x2, 0x2, 
    0x70, 0x71, 0x7, 0x8, 0x2, 0x2, 0x71, 0x72, 0x7, 0x1f, 0x2, 0x2, 0x72, 
    0x73, 0x5, 0xc, 0x7, 0x2, 0x73, 0x11, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
    0x5, 0x2c, 0x17, 0x2, 0x75, 0x7e, 0x7, 0x3, 0x2, 0x2, 0x76, 0x7b, 0x5, 
    0x24, 0x13, 0x2, 0x77, 0x78, 0x7, 0x6, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x24, 
    0x13, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x4, 0x2, 0x2, 0x81, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x84, 0x5, 0x18, 0xd, 0x2, 0x83, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x2b, 0x2, 0x2, 0x89, 
    0x8b, 0x5, 0x24, 0x13, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
    0x9, 0x2, 0x2, 0x8d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x28, 
    0x15, 0x2, 0x8f, 0x90, 0x7, 0xa, 0x2, 0x2, 0x90, 0x91, 0x5, 0x24, 0x13, 
    0x2, 0x91, 0x92, 0x7, 0x9, 0x2, 0x2, 0x92, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x20, 0x2, 0x2, 0x94, 0x95, 0x5, 0x24, 0x13, 0x2, 0x95, 
    0x96, 0x7, 0x21, 0x2, 0x2, 0x96, 0x98, 0x5, 0x14, 0xb, 0x2, 0x97, 0x99, 
    0x5, 0x1a, 0xe, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x23, 
    0x2, 0x2, 0x9b, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x24, 0x2, 
    0x2, 0x9d, 0x9e, 0x5, 0x24, 0x13, 0x2, 0x9e, 0x9f, 0x7, 0x25, 0x2, 0x2, 
    0x9f, 0xa0, 0x5, 0x14, 0xb, 0x2, 0xa0, 0xa1, 0x7, 0x26, 0x2, 0x2, 0xa1, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x2c, 0x2, 0x2, 0xa3, 0xa4, 
    0x5, 0x14, 0xb, 0x2, 0xa4, 0xa5, 0x7, 0x2d, 0x2, 0x2, 0xa5, 0xa6, 0x5, 
    0x24, 0x13, 0x2, 0xa6, 0xa7, 0x7, 0x2e, 0x2, 0x2, 0xa7, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xa9, 0x5, 0x12, 0xa, 0x2, 0xa9, 0xaa, 0x7, 0x9, 0x2, 
    0x2, 0xaa, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x29, 0x2, 0x2, 
    0xac, 0xad, 0x5, 0x28, 0x15, 0x2, 0xad, 0xae, 0x7, 0x9, 0x2, 0x2, 0xae, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x2a, 0x2, 0x2, 0xb0, 0xb1, 
    0x5, 0x24, 0x13, 0x2, 0xb1, 0xb2, 0x7, 0x9, 0x2, 0x2, 0xb2, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x2a, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x39, 
    0x2, 0x2, 0xb5, 0xdc, 0x7, 0x9, 0x2, 0x2, 0xb6, 0xdc, 0x5, 0x16, 0xc, 
    0x2, 0xb7, 0xb8, 0x7, 0x7, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x1c, 0xf, 0x2, 
    0xb9, 0xba, 0x7, 0x8, 0x2, 0x2, 0xba, 0xbb, 0x7, 0xa, 0x2, 0x2, 0xbb, 
    0xbc, 0x7, 0x7, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x1e, 0x10, 0x2, 0xbd, 0xbe, 
    0x7, 0x8, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x9, 0x2, 0x2, 0xbf, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x30, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x3, 
    0x2, 0x2, 0xc2, 0xc3, 0x5, 0x24, 0x13, 0x2, 0xc3, 0xc5, 0x7, 0x4, 0x2, 
    0x2, 0xc4, 0xc6, 0x5, 0x20, 0x11, 0x2, 0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 
    0x5, 0x22, 0x12, 0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x33, 
    0x2, 0x2, 0xcd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x30, 0x2, 
    0x2, 0xcf, 0xd0, 0x7, 0x3, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x24, 0x13, 0x2, 
    0xd1, 0xd5, 0x7, 0x4, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0x20, 0x11, 0x2, 0xd3, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x22, 
    0x12, 0x2, 0xd9, 0xda, 0x7, 0x33, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xab, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x22, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x14, 0xb, 0x2, 
    0xdf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe5, 0x5, 0x28, 0x15, 0x2, 0xe1, 
    0xe2, 0x7, 0x6, 0x2, 0x2, 0xe2, 0xe4, 0x5, 0x28, 0x15, 0x2, 0xe3, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xed, 0x5, 0x24, 0x13, 
    0x2, 0xe9, 0xea, 0x7, 0x6, 0x2, 0x2, 0xea, 0xec, 0x5, 0x24, 0x13, 0x2, 
    0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 
    0x31, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x26, 0x14, 0x2, 0xf2, 0xf3, 0x7, 0x5, 
    0x2, 0x2, 0xf3, 0xf4, 0x5, 0x14, 0xb, 0x2, 0xf4, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xf5, 0xf6, 0x7, 0x32, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x5, 0x2, 0x2, 
    0xf7, 0xf8, 0x5, 0x14, 0xb, 0x2, 0xf8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xfa, 0x8, 0x13, 0x1, 0x2, 0xfa, 0xfb, 0x9, 0x3, 0x2, 0x2, 0xfb, 0x104, 
    0x5, 0x24, 0x13, 0xd, 0xfc, 0xfd, 0x7, 0x3, 0x2, 0x2, 0xfd, 0xfe, 0x5, 
    0x24, 0x13, 0x2, 0xfe, 0xff, 0x7, 0x4, 0x2, 0x2, 0xff, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x104, 0x5, 0x26, 0x14, 0x2, 0x101, 0x104, 0x5, 0x12, 
    0xa, 0x2, 0x102, 0x104, 0x5, 0x2a, 0x16, 0x2, 0x103, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x103, 0x100, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x119, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0xc, 0xc, 0x2, 
    0x2, 0x106, 0x107, 0x7, 0x2f, 0x2, 0x2, 0x107, 0x118, 0x5, 0x24, 0x13, 
    0xd, 0x108, 0x109, 0xc, 0xb, 0x2, 0x2, 0x109, 0x10a, 0x9, 0x4, 0x2, 
    0x2, 0x10a, 0x118, 0x5, 0x24, 0x13, 0xc, 0x10b, 0x10c, 0xc, 0xa, 0x2, 
    0x2, 0x10c, 0x10d, 0x9, 0x5, 0x2, 0x2, 0x10d, 0x118, 0x5, 0x24, 0x13, 
    0xb, 0x10e, 0x10f, 0xc, 0x9, 0x2, 0x2, 0x10f, 0x110, 0x9, 0x6, 0x2, 
    0x2, 0x110, 0x118, 0x5, 0x24, 0x13, 0xa, 0x111, 0x112, 0xc, 0x8, 0x2, 
    0x2, 0x112, 0x113, 0x7, 0x11, 0x2, 0x2, 0x113, 0x118, 0x5, 0x24, 0x13, 
    0x9, 0x114, 0x115, 0xc, 0x7, 0x2, 0x2, 0x115, 0x116, 0x7, 0x12, 0x2, 
    0x2, 0x116, 0x118, 0x5, 0x24, 0x13, 0x8, 0x117, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x108, 0x3, 0x2, 0x2, 0x2, 0x117, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x117, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x114, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x11d, 0x9, 0x7, 0x2, 0x2, 0x11d, 0x27, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11f, 0x5, 0x2a, 0x16, 0x2, 0x11f, 0x29, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x127, 0x5, 0x2c, 0x17, 0x2, 0x121, 0x122, 0x7, 0x7, 0x2, 0x2, 0x122, 
    0x123, 0x5, 0x24, 0x13, 0x2, 0x123, 0x124, 0x7, 0x8, 0x2, 0x2, 0x124, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x125, 0x121, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x38, 0x2, 0x2, 0x12b, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x31, 0x39, 0x45, 0x52, 0x58, 0x61, 0x69, 
    0x7b, 0x7e, 0x85, 0x8a, 0x98, 0xc7, 0xca, 0xd5, 0xdb, 0xe5, 0xed, 0x103, 
    0x117, 0x119, 0x127, 
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
