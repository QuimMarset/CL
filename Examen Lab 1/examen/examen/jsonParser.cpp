
// Generated from json.g4 by ANTLR 4.7.1


#include "jsonListener.h"

#include "jsonParser.h"


using namespace antlrcpp;
using namespace antlr4;

jsonParser::jsonParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

jsonParser::~jsonParser() {
  delete _interpreter;
}

std::string jsonParser::getGrammarFileName() const {
  return "json.g4";
}

const std::vector<std::string>& jsonParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& jsonParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- JsonContext ------------------------------------------------------------------

jsonParser::JsonContext::JsonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

jsonParser::ObjectContext* jsonParser::JsonContext::object() {
  return getRuleContext<jsonParser::ObjectContext>(0);
}


size_t jsonParser::JsonContext::getRuleIndex() const {
  return jsonParser::RuleJson;
}

void jsonParser::JsonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJson(this);
}

void jsonParser::JsonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJson(this);
}

jsonParser::JsonContext* jsonParser::json() {
  JsonContext *_localctx = _tracker.createInstance<JsonContext>(_ctx, getState());
  enterRule(_localctx, 0, jsonParser::RuleJson);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(6);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

jsonParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t jsonParser::ObjectContext::getRuleIndex() const {
  return jsonParser::RuleObject;
}

void jsonParser::ObjectContext::copyFrom(ObjectContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* jsonParser::StringContext::ATOM() {
  return getToken(jsonParser::ATOM, 0);
}

jsonParser::StringContext::StringContext(ObjectContext *ctx) { copyFrom(ctx); }

void jsonParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void jsonParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}
//----------------- DictContext ------------------------------------------------------------------

std::vector<jsonParser::PairContext *> jsonParser::DictContext::pair() {
  return getRuleContexts<jsonParser::PairContext>();
}

jsonParser::PairContext* jsonParser::DictContext::pair(size_t i) {
  return getRuleContext<jsonParser::PairContext>(i);
}

jsonParser::DictContext::DictContext(ObjectContext *ctx) { copyFrom(ctx); }

void jsonParser::DictContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDict(this);
}
void jsonParser::DictContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDict(this);
}
//----------------- ListContext ------------------------------------------------------------------

std::vector<jsonParser::ObjectContext *> jsonParser::ListContext::object() {
  return getRuleContexts<jsonParser::ObjectContext>();
}

jsonParser::ObjectContext* jsonParser::ListContext::object(size_t i) {
  return getRuleContext<jsonParser::ObjectContext>(i);
}

jsonParser::ListContext::ListContext(ObjectContext *ctx) { copyFrom(ctx); }

void jsonParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}
void jsonParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}
jsonParser::ObjectContext* jsonParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 2, jsonParser::RuleObject);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(33);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case jsonParser::ATOM: {
        _localctx = dynamic_cast<ObjectContext *>(_tracker.createInstance<jsonParser::StringContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(8);
        match(jsonParser::ATOM);
        break;
      }

      case jsonParser::T__0: {
        _localctx = dynamic_cast<ObjectContext *>(_tracker.createInstance<jsonParser::DictContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(9);
        match(jsonParser::T__0);
        setState(18);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == jsonParser::ATOM) {
          setState(10);
          pair();
          setState(15);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == jsonParser::T__1) {
            setState(11);
            match(jsonParser::T__1);
            setState(12);
            pair();
            setState(17);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(20);
        match(jsonParser::T__2);
        break;
      }

      case jsonParser::T__3: {
        _localctx = dynamic_cast<ObjectContext *>(_tracker.createInstance<jsonParser::ListContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(21);
        match(jsonParser::T__3);
        setState(30);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << jsonParser::T__0)
          | (1ULL << jsonParser::T__3)
          | (1ULL << jsonParser::ATOM))) != 0)) {
          setState(22);
          object();
          setState(27);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == jsonParser::T__1) {
            setState(23);
            match(jsonParser::T__1);
            setState(24);
            object();
            setState(29);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(32);
        match(jsonParser::T__4);
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

//----------------- PairContext ------------------------------------------------------------------

jsonParser::PairContext::PairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::PairContext::ATOM() {
  return getToken(jsonParser::ATOM, 0);
}

jsonParser::ObjectContext* jsonParser::PairContext::object() {
  return getRuleContext<jsonParser::ObjectContext>(0);
}


size_t jsonParser::PairContext::getRuleIndex() const {
  return jsonParser::RulePair;
}

void jsonParser::PairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPair(this);
}

void jsonParser::PairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPair(this);
}

jsonParser::PairContext* jsonParser::pair() {
  PairContext *_localctx = _tracker.createInstance<PairContext>(_ctx, getState());
  enterRule(_localctx, 4, jsonParser::RulePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(jsonParser::ATOM);
    setState(36);
    match(jsonParser::T__5);
    setState(37);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> jsonParser::_decisionToDFA;
atn::PredictionContextCache jsonParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN jsonParser::_atn;
std::vector<uint16_t> jsonParser::_serializedATN;

std::vector<std::string> jsonParser::_ruleNames = {
  "json", "object", "pair"
};

std::vector<std::string> jsonParser::_literalNames = {
  "", "'{'", "','", "'}'", "'['", "']'", "':'"
};

std::vector<std::string> jsonParser::_symbolicNames = {
  "", "", "", "", "", "", "", "ATOM", "WS"
};

dfa::Vocabulary jsonParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> jsonParser::_tokenNames;

jsonParser::Initializer::Initializer() {
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
    0x3, 0xa, 0x2a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x10, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x13, 0xb, 0x3, 0x5, 
    0x3, 0x15, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x7, 0x3, 0x1c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1f, 0xb, 0x3, 0x5, 0x3, 
    0x21, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x24, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x2, 0x2, 0x5, 0x2, 0x4, 0x6, 0x2, 0x2, 
    0x2, 0x2c, 0x2, 0x8, 0x3, 0x2, 0x2, 0x2, 0x4, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x5, 0x4, 0x3, 0x2, 0x9, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x24, 0x7, 0x9, 0x2, 0x2, 0xb, 0x14, 0x7, 0x3, 
    0x2, 0x2, 0xc, 0x11, 0x5, 0x6, 0x4, 0x2, 0xd, 0xe, 0x7, 0x4, 0x2, 0x2, 
    0xe, 0x10, 0x5, 0x6, 0x4, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0x10, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0xc, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x24, 0x7, 0x5, 0x2, 0x2, 
    0x17, 0x20, 0x7, 0x6, 0x2, 0x2, 0x18, 0x1d, 0x5, 0x4, 0x3, 0x2, 0x19, 
    0x1a, 0x7, 0x4, 0x2, 0x2, 0x1a, 0x1c, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x24, 0x7, 0x7, 0x2, 0x2, 0x23, 0xa, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x23, 0x17, 0x3, 0x2, 0x2, 0x2, 0x24, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x9, 0x2, 0x2, 0x26, 0x27, 0x7, 
    0x8, 0x2, 0x2, 0x27, 0x28, 0x5, 0x4, 0x3, 0x2, 0x28, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x7, 0x11, 0x14, 0x1d, 0x20, 0x23, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

jsonParser::Initializer jsonParser::_init;
