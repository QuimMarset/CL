
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

std::vector<ExamenParser::DeclarationContext *> ExamenParser::ProgramContext::declaration() {
  return getRuleContexts<ExamenParser::DeclarationContext>();
}

ExamenParser::DeclarationContext* ExamenParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<ExamenParser::DeclarationContext>(i);
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
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      declaration();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExamenParser::UNION)
      | (1ULL << ExamenParser::STRUCT)
      | (1ULL << ExamenParser::INT)
      | (1ULL << ExamenParser::DOUBLE)
      | (1ULL << ExamenParser::CHAR))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ExamenParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExamenParser::TypeContext* ExamenParser::DeclarationContext::type() {
  return getRuleContext<ExamenParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> ExamenParser::DeclarationContext::ID() {
  return getTokens(ExamenParser::ID);
}

tree::TerminalNode* ExamenParser::DeclarationContext::ID(size_t i) {
  return getToken(ExamenParser::ID, i);
}


size_t ExamenParser::DeclarationContext::getRuleIndex() const {
  return ExamenParser::RuleDeclaration;
}

void ExamenParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void ExamenParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

ExamenParser::DeclarationContext* ExamenParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, ExamenParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    type();
    setState(12);
    match(ExamenParser::ID);
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExamenParser::T__0) {
      setState(13);
      match(ExamenParser::T__0);
      setState(14);
      match(ExamenParser::ID);
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(20);
    match(ExamenParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ExamenParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExamenParser::TypeContext::getRuleIndex() const {
  return ExamenParser::RuleType;
}

void ExamenParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BasicTypeContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::BasicTypeContext::INT() {
  return getToken(ExamenParser::INT, 0);
}

tree::TerminalNode* ExamenParser::BasicTypeContext::DOUBLE() {
  return getToken(ExamenParser::DOUBLE, 0);
}

tree::TerminalNode* ExamenParser::BasicTypeContext::CHAR() {
  return getToken(ExamenParser::CHAR, 0);
}

tree::TerminalNode* ExamenParser::BasicTypeContext::POINTER() {
  return getToken(ExamenParser::POINTER, 0);
}

ExamenParser::BasicTypeContext::BasicTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ExamenParser::BasicTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicType(this);
}
void ExamenParser::BasicTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicType(this);
}
//----------------- StructTypeContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::StructTypeContext::STRUCT() {
  return getToken(ExamenParser::STRUCT, 0);
}

std::vector<ExamenParser::DeclarationContext *> ExamenParser::StructTypeContext::declaration() {
  return getRuleContexts<ExamenParser::DeclarationContext>();
}

ExamenParser::DeclarationContext* ExamenParser::StructTypeContext::declaration(size_t i) {
  return getRuleContext<ExamenParser::DeclarationContext>(i);
}

ExamenParser::StructTypeContext::StructTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ExamenParser::StructTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructType(this);
}
void ExamenParser::StructTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructType(this);
}
//----------------- UnionTypeContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::UnionTypeContext::UNION() {
  return getToken(ExamenParser::UNION, 0);
}

std::vector<ExamenParser::DeclarationContext *> ExamenParser::UnionTypeContext::declaration() {
  return getRuleContexts<ExamenParser::DeclarationContext>();
}

ExamenParser::DeclarationContext* ExamenParser::UnionTypeContext::declaration(size_t i) {
  return getRuleContext<ExamenParser::DeclarationContext>(i);
}

ExamenParser::UnionTypeContext::UnionTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ExamenParser::UnionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionType(this);
}
void ExamenParser::UnionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionType(this);
}
ExamenParser::TypeContext* ExamenParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, ExamenParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExamenParser::UNION: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ExamenParser::UnionTypeContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(22);
        match(ExamenParser::UNION);
        setState(23);
        match(ExamenParser::T__2);
        setState(25); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(24);
          declaration();
          setState(27); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExamenParser::UNION)
          | (1ULL << ExamenParser::STRUCT)
          | (1ULL << ExamenParser::INT)
          | (1ULL << ExamenParser::DOUBLE)
          | (1ULL << ExamenParser::CHAR))) != 0));
        setState(29);
        match(ExamenParser::T__3);
        break;
      }

      case ExamenParser::STRUCT: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ExamenParser::StructTypeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(31);
        match(ExamenParser::STRUCT);
        setState(32);
        match(ExamenParser::T__2);
        setState(34); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(33);
          declaration();
          setState(36); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExamenParser::UNION)
          | (1ULL << ExamenParser::STRUCT)
          | (1ULL << ExamenParser::INT)
          | (1ULL << ExamenParser::DOUBLE)
          | (1ULL << ExamenParser::CHAR))) != 0));
        setState(38);
        match(ExamenParser::T__3);
        break;
      }

      case ExamenParser::INT:
      case ExamenParser::DOUBLE:
      case ExamenParser::CHAR: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ExamenParser::BasicTypeContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(40);
        dynamic_cast<BasicTypeContext *>(_localctx)->typeDecl = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExamenParser::INT)
          | (1ULL << ExamenParser::DOUBLE)
          | (1ULL << ExamenParser::CHAR))) != 0))) {
          dynamic_cast<BasicTypeContext *>(_localctx)->typeDecl = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(42);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExamenParser::POINTER) {
          setState(41);
          match(ExamenParser::POINTER);
        }
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

// Static vars and initialization.
std::vector<dfa::DFA> ExamenParser::_decisionToDFA;
atn::PredictionContextCache ExamenParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExamenParser::_atn;
std::vector<uint16_t> ExamenParser::_serializedATN;

std::vector<std::string> ExamenParser::_ruleNames = {
  "program", "declaration", "type"
};

std::vector<std::string> ExamenParser::_literalNames = {
  "", "','", "';'", "'{'", "'}'", "'union'", "'struct'", "'int'", "'double'", 
  "'char'", "'*'"
};

std::vector<std::string> ExamenParser::_symbolicNames = {
  "", "", "", "", "", "UNION", "STRUCT", "INT", "DOUBLE", "CHAR", "POINTER", 
  "ID", "WS"
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
    0x3, 0xe, 0x31, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x12, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x15, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x6, 0x4, 0x1c, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x1d, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x25, 0xa, 0x4, 0xd, 0x4, 
    0xe, 0x4, 0x26, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2d, 
    0xa, 0x4, 0x5, 0x4, 0x2f, 0xa, 0x4, 0x3, 0x4, 0x2, 0x2, 0x5, 0x2, 0x4, 
    0x6, 0x2, 0x3, 0x3, 0x2, 0x9, 0xb, 0x2, 0x34, 0x2, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0xa, 0x5, 0x4, 0x3, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x5, 0x6, 0x4, 0x2, 0xe, 
    0x13, 0x7, 0xd, 0x2, 0x2, 0xf, 0x10, 0x7, 0x3, 0x2, 0x2, 0x10, 0x12, 
    0x7, 0xd, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x16, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x16, 0x17, 0x7, 0x4, 0x2, 0x2, 0x17, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x7, 0x7, 0x2, 0x2, 0x19, 0x1b, 0x7, 0x5, 0x2, 0x2, 0x1a, 
    0x1c, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x6, 
    0x2, 0x2, 0x20, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x8, 0x2, 
    0x2, 0x22, 0x24, 0x7, 0x5, 0x2, 0x2, 0x23, 0x25, 0x5, 0x4, 0x3, 0x2, 
    0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x6, 0x2, 0x2, 0x29, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2c, 0x9, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x7, 0xc, 
    0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb, 0x13, 0x1d, 0x26, 0x2c, 0x2e, 
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
