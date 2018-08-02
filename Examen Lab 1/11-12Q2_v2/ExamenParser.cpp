
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


//----------------- IdentificadorContext ------------------------------------------------------------------

ExamenParser::IdentificadorContext::IdentificadorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExamenParser::IdentContext* ExamenParser::IdentificadorContext::ident() {
  return getRuleContext<ExamenParser::IdentContext>(0);
}

std::vector<ExamenParser::IndexContext *> ExamenParser::IdentificadorContext::index() {
  return getRuleContexts<ExamenParser::IndexContext>();
}

ExamenParser::IndexContext* ExamenParser::IdentificadorContext::index(size_t i) {
  return getRuleContext<ExamenParser::IndexContext>(i);
}


size_t ExamenParser::IdentificadorContext::getRuleIndex() const {
  return ExamenParser::RuleIdentificador;
}

void ExamenParser::IdentificadorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentificador(this);
}

void ExamenParser::IdentificadorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentificador(this);
}

ExamenParser::IdentificadorContext* ExamenParser::identificador() {
  IdentificadorContext *_localctx = _tracker.createInstance<IdentificadorContext>(_ctx, getState());
  enterRule(_localctx, 0, ExamenParser::RuleIdentificador);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(6);
    ident();
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExamenParser::T__0) {
      setState(7);
      match(ExamenParser::T__0);
      setState(8);
      index();
      setState(9);
      match(ExamenParser::T__1);
      setState(15);
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

//----------------- IndexContext ------------------------------------------------------------------

ExamenParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExamenParser::IndexContext::getRuleIndex() const {
  return ExamenParser::RuleIndex;
}

void ExamenParser::IndexContext::copyFrom(IndexContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntIndexContext ------------------------------------------------------------------

tree::TerminalNode* ExamenParser::IntIndexContext::INT() {
  return getToken(ExamenParser::INT, 0);
}

ExamenParser::IntIndexContext::IntIndexContext(IndexContext *ctx) { copyFrom(ctx); }

void ExamenParser::IntIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntIndex(this);
}
void ExamenParser::IntIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntIndex(this);
}
//----------------- IdentIndexContext ------------------------------------------------------------------

ExamenParser::IdentificadorContext* ExamenParser::IdentIndexContext::identificador() {
  return getRuleContext<ExamenParser::IdentificadorContext>(0);
}

ExamenParser::IdentIndexContext::IdentIndexContext(IndexContext *ctx) { copyFrom(ctx); }

void ExamenParser::IdentIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentIndex(this);
}
void ExamenParser::IdentIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentIndex(this);
}
ExamenParser::IndexContext* ExamenParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 2, ExamenParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExamenParser::INT: {
        _localctx = dynamic_cast<IndexContext *>(_tracker.createInstance<ExamenParser::IntIndexContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(16);
        match(ExamenParser::INT);
        break;
      }

      case ExamenParser::ID: {
        _localctx = dynamic_cast<IndexContext *>(_tracker.createInstance<ExamenParser::IdentIndexContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(17);
        identificador();
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

//----------------- IdentContext ------------------------------------------------------------------

ExamenParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExamenParser::IdentContext::ID() {
  return getToken(ExamenParser::ID, 0);
}


size_t ExamenParser::IdentContext::getRuleIndex() const {
  return ExamenParser::RuleIdent;
}

void ExamenParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void ExamenParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExamenListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}

ExamenParser::IdentContext* ExamenParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 4, ExamenParser::RuleIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(ExamenParser::ID);
   
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
  "identificador", "index", "ident"
};

std::vector<std::string> ExamenParser::_literalNames = {
  "", "'['", "']'"
};

std::vector<std::string> ExamenParser::_symbolicNames = {
  "", "", "", "INT", "ID", "WS"
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
    0x3, 0x7, 0x19, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xe, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x11, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x15, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x2, 0x2, 0x5, 0x2, 
    0x4, 0x6, 0x2, 0x2, 0x2, 0x17, 0x2, 0x8, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x16, 0x3, 0x2, 0x2, 0x2, 0x8, 0xf, 0x5, 0x6, 
    0x4, 0x2, 0x9, 0xa, 0x7, 0x3, 0x2, 0x2, 0xa, 0xb, 0x5, 0x4, 0x3, 0x2, 
    0xb, 0xc, 0x7, 0x4, 0x2, 0x2, 0xc, 0xe, 0x3, 0x2, 0x2, 0x2, 0xd, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x11, 0x3, 0x2, 0x2, 0x2, 0xf, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 0x10, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x7, 0x5, 0x2, 0x2, 0x13, 
    0x15, 0x5, 0x2, 0x2, 0x2, 0x14, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x15, 0x5, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
    0x6, 0x2, 0x2, 0x17, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4, 0xf, 0x14, 
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
