
// Generated from KaeliParser.g4 by ANTLR 4.13.1


#include "KaeliParserVisitor.h"

#include "KaeliParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct KaeliParserStaticData final {
  KaeliParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KaeliParserStaticData(const KaeliParserStaticData&) = delete;
  KaeliParserStaticData(KaeliParserStaticData&&) = delete;
  KaeliParserStaticData& operator=(const KaeliParserStaticData&) = delete;
  KaeliParserStaticData& operator=(KaeliParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag kaeliparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
KaeliParserStaticData *kaeliparserParserStaticData = nullptr;

void kaeliparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (kaeliparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(kaeliparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KaeliParserStaticData>(
    std::vector<std::string>{
      "program", "stat", "expr", "addsub", "multdiv", "array", "variable", 
      "funcParams", "funcDef", "funcArgs", "funcCall", "for", "if"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", 
      "','", "';'", "'['", "']'", "", "':'", "'END'", "", "", "'importar'", 
      "'funcion'", "'iterar'", "'mientras'", "'desde'", "'hasta'", "'en'", 
      "", "", "", "", "'NADA'", "'retornar'"
    },
    std::vector<std::string>{
      "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
      "EQUAL", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", 
      "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", 
      "NADA", "RETURN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,157,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,5,0,28,8,0,10,
  	0,12,0,31,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,51,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,64,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,77,8,2,10,
  	2,12,2,80,9,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,5,5,90,8,5,10,5,12,5,93,
  	9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,5,7,104,8,7,10,7,12,7,107,9,7,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,116,8,8,10,8,12,8,119,9,8,1,8,1,8,1,9,
  	1,9,1,9,5,9,126,8,9,10,9,12,9,129,9,9,1,10,1,10,1,10,1,10,1,10,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,144,8,11,3,11,146,8,11,1,12,1,12,
  	1,12,1,12,5,12,152,8,12,10,12,12,12,155,9,12,1,12,0,1,4,13,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,0,5,1,0,3,6,1,0,7,8,1,0,3,4,1,0,5,6,1,0,27,28,
  	166,0,29,1,0,0,0,2,50,1,0,0,0,4,63,1,0,0,0,6,81,1,0,0,0,8,83,1,0,0,0,
  	10,85,1,0,0,0,12,96,1,0,0,0,14,100,1,0,0,0,16,108,1,0,0,0,18,122,1,0,
  	0,0,20,130,1,0,0,0,22,145,1,0,0,0,24,147,1,0,0,0,26,28,3,2,1,0,27,26,
  	1,0,0,0,28,31,1,0,0,0,29,27,1,0,0,0,29,30,1,0,0,0,30,32,1,0,0,0,31,29,
  	1,0,0,0,32,33,5,0,0,1,33,1,1,0,0,0,34,35,3,12,6,0,35,36,5,11,0,0,36,51,
  	1,0,0,0,37,38,3,4,2,0,38,39,5,11,0,0,39,51,1,0,0,0,40,51,3,16,8,0,41,
  	42,3,22,11,0,42,43,5,16,0,0,43,51,1,0,0,0,44,45,3,24,12,0,45,46,5,16,
  	0,0,46,51,1,0,0,0,47,48,3,10,5,0,48,49,5,11,0,0,49,51,1,0,0,0,50,34,1,
  	0,0,0,50,37,1,0,0,0,50,40,1,0,0,0,50,41,1,0,0,0,50,44,1,0,0,0,50,47,1,
  	0,0,0,51,3,1,0,0,0,52,53,6,2,-1,0,53,64,5,28,0,0,54,64,5,29,0,0,55,64,
  	5,17,0,0,56,64,5,27,0,0,57,58,5,1,0,0,58,59,3,4,2,0,59,60,5,2,0,0,60,
  	64,1,0,0,0,61,64,3,20,10,0,62,64,3,10,5,0,63,52,1,0,0,0,63,54,1,0,0,0,
  	63,55,1,0,0,0,63,56,1,0,0,0,63,57,1,0,0,0,63,61,1,0,0,0,63,62,1,0,0,0,
  	64,78,1,0,0,0,65,66,10,5,0,0,66,67,7,0,0,0,67,77,3,4,2,6,68,69,10,4,0,
  	0,69,70,5,9,0,0,70,71,5,9,0,0,71,77,3,4,2,5,72,73,10,3,0,0,73,74,7,1,
  	0,0,74,75,5,9,0,0,75,77,3,4,2,4,76,65,1,0,0,0,76,68,1,0,0,0,76,72,1,0,
  	0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,5,1,0,0,0,80,78,1,0,
  	0,0,81,82,7,2,0,0,82,7,1,0,0,0,83,84,7,3,0,0,84,9,1,0,0,0,85,86,5,12,
  	0,0,86,91,3,4,2,0,87,88,5,10,0,0,88,90,3,4,2,0,89,87,1,0,0,0,90,93,1,
  	0,0,0,91,89,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,93,91,1,0,0,0,94,95,5,
  	13,0,0,95,11,1,0,0,0,96,97,5,27,0,0,97,98,5,9,0,0,98,99,3,4,2,0,99,13,
  	1,0,0,0,100,105,5,27,0,0,101,102,5,10,0,0,102,104,5,27,0,0,103,101,1,
  	0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,15,1,0,0,0,
  	107,105,1,0,0,0,108,109,5,20,0,0,109,110,5,27,0,0,110,111,5,1,0,0,111,
  	112,3,14,7,0,112,113,5,2,0,0,113,117,5,15,0,0,114,116,3,2,1,0,115,114,
  	1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,120,1,0,0,
  	0,119,117,1,0,0,0,120,121,5,16,0,0,121,17,1,0,0,0,122,127,3,4,2,0,123,
  	124,5,10,0,0,124,126,3,4,2,0,125,123,1,0,0,0,126,129,1,0,0,0,127,125,
  	1,0,0,0,127,128,1,0,0,0,128,19,1,0,0,0,129,127,1,0,0,0,130,131,5,27,0,
  	0,131,132,5,1,0,0,132,133,3,18,9,0,133,134,5,2,0,0,134,21,1,0,0,0,135,
  	146,5,21,0,0,136,137,5,23,0,0,137,138,7,4,0,0,138,139,5,24,0,0,139,146,
  	7,4,0,0,140,143,5,25,0,0,141,144,5,27,0,0,142,144,3,10,5,0,143,141,1,
  	0,0,0,143,142,1,0,0,0,144,146,1,0,0,0,145,135,1,0,0,0,145,136,1,0,0,0,
  	145,140,1,0,0,0,146,23,1,0,0,0,147,148,5,26,0,0,148,149,3,4,2,0,149,153,
  	5,15,0,0,150,152,3,2,1,0,151,150,1,0,0,0,152,155,1,0,0,0,153,151,1,0,
  	0,0,153,154,1,0,0,0,154,25,1,0,0,0,155,153,1,0,0,0,12,29,50,63,76,78,
  	91,105,117,127,143,145,153
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  kaeliparserParserStaticData = staticData.release();
}

}

KaeliParser::KaeliParser(TokenStream *input) : KaeliParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

KaeliParser::KaeliParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  KaeliParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *kaeliparserParserStaticData->atn, kaeliparserParserStaticData->decisionToDFA, kaeliparserParserStaticData->sharedContextCache, options);
}

KaeliParser::~KaeliParser() {
  delete _interpreter;
}

const atn::ATN& KaeliParser::getATN() const {
  return *kaeliparserParserStaticData->atn;
}

std::string KaeliParser::getGrammarFileName() const {
  return "KaeliParser.g4";
}

const std::vector<std::string>& KaeliParser::getRuleNames() const {
  return kaeliparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& KaeliParser::getVocabulary() const {
  return kaeliparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KaeliParser::getSerializedATN() const {
  return kaeliparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

KaeliParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::ProgramContext::EOF() {
  return getToken(KaeliParser::EOF, 0);
}

std::vector<KaeliParser::StatContext *> KaeliParser::ProgramContext::stat() {
  return getRuleContexts<KaeliParser::StatContext>();
}

KaeliParser::StatContext* KaeliParser::ProgramContext::stat(size_t i) {
  return getRuleContext<KaeliParser::StatContext>(i);
}


size_t KaeliParser::ProgramContext::getRuleIndex() const {
  return KaeliParser::RuleProgram;
}


std::any KaeliParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::ProgramContext* KaeliParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, KaeliParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1051856898) != 0)) {
      setState(26);
      stat();
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(32);
    match(KaeliParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

KaeliParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KaeliParser::VariableContext* KaeliParser::StatContext::variable() {
  return getRuleContext<KaeliParser::VariableContext>(0);
}

tree::TerminalNode* KaeliParser::StatContext::SEMI() {
  return getToken(KaeliParser::SEMI, 0);
}

KaeliParser::ExprContext* KaeliParser::StatContext::expr() {
  return getRuleContext<KaeliParser::ExprContext>(0);
}

KaeliParser::FuncDefContext* KaeliParser::StatContext::funcDef() {
  return getRuleContext<KaeliParser::FuncDefContext>(0);
}

KaeliParser::ForContext* KaeliParser::StatContext::for_() {
  return getRuleContext<KaeliParser::ForContext>(0);
}

tree::TerminalNode* KaeliParser::StatContext::END_BLOCK() {
  return getToken(KaeliParser::END_BLOCK, 0);
}

KaeliParser::IfContext* KaeliParser::StatContext::if_() {
  return getRuleContext<KaeliParser::IfContext>(0);
}

KaeliParser::ArrayContext* KaeliParser::StatContext::array() {
  return getRuleContext<KaeliParser::ArrayContext>(0);
}


size_t KaeliParser::StatContext::getRuleIndex() const {
  return KaeliParser::RuleStat;
}


std::any KaeliParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::StatContext* KaeliParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, KaeliParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(34);
      variable();
      setState(35);
      match(KaeliParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(37);
      expr(0);
      setState(38);
      match(KaeliParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      funcDef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      for_();
      setState(42);
      match(KaeliParser::END_BLOCK);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(44);
      if_();
      setState(45);
      match(KaeliParser::END_BLOCK);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(47);
      array();
      setState(48);
      match(KaeliParser::SEMI);
      break;
    }

    default:
      break;
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

KaeliParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::ExprContext::NUM() {
  return getToken(KaeliParser::NUM, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::BOOL() {
  return getToken(KaeliParser::BOOL, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::STRING() {
  return getToken(KaeliParser::STRING, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::ID() {
  return getToken(KaeliParser::ID, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::LAPREN() {
  return getToken(KaeliParser::LAPREN, 0);
}

std::vector<KaeliParser::ExprContext *> KaeliParser::ExprContext::expr() {
  return getRuleContexts<KaeliParser::ExprContext>();
}

KaeliParser::ExprContext* KaeliParser::ExprContext::expr(size_t i) {
  return getRuleContext<KaeliParser::ExprContext>(i);
}

tree::TerminalNode* KaeliParser::ExprContext::RPAREN() {
  return getToken(KaeliParser::RPAREN, 0);
}

KaeliParser::FuncCallContext* KaeliParser::ExprContext::funcCall() {
  return getRuleContext<KaeliParser::FuncCallContext>(0);
}

KaeliParser::ArrayContext* KaeliParser::ExprContext::array() {
  return getRuleContext<KaeliParser::ArrayContext>(0);
}

tree::TerminalNode* KaeliParser::ExprContext::MUL() {
  return getToken(KaeliParser::MUL, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::DIV() {
  return getToken(KaeliParser::DIV, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::ADD() {
  return getToken(KaeliParser::ADD, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::RESTA() {
  return getToken(KaeliParser::RESTA, 0);
}

std::vector<tree::TerminalNode *> KaeliParser::ExprContext::EQUAL() {
  return getTokens(KaeliParser::EQUAL);
}

tree::TerminalNode* KaeliParser::ExprContext::EQUAL(size_t i) {
  return getToken(KaeliParser::EQUAL, i);
}

tree::TerminalNode* KaeliParser::ExprContext::LESS() {
  return getToken(KaeliParser::LESS, 0);
}

tree::TerminalNode* KaeliParser::ExprContext::GREATER() {
  return getToken(KaeliParser::GREATER, 0);
}


size_t KaeliParser::ExprContext::getRuleIndex() const {
  return KaeliParser::RuleExpr;
}


std::any KaeliParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


KaeliParser::ExprContext* KaeliParser::expr() {
   return expr(0);
}

KaeliParser::ExprContext* KaeliParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KaeliParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  KaeliParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, KaeliParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(53);
      match(KaeliParser::NUM);
      break;
    }

    case 2: {
      setState(54);
      match(KaeliParser::BOOL);
      break;
    }

    case 3: {
      setState(55);
      match(KaeliParser::STRING);
      break;
    }

    case 4: {
      setState(56);
      match(KaeliParser::ID);
      break;
    }

    case 5: {
      setState(57);
      match(KaeliParser::LAPREN);
      setState(58);
      expr(0);
      setState(59);
      match(KaeliParser::RPAREN);
      break;
    }

    case 6: {
      setState(61);
      funcCall();
      break;
    }

    case 7: {
      setState(62);
      array();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(78);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(76);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(65);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(66);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 120) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(67);
          expr(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(68);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(69);
          match(KaeliParser::EQUAL);
          setState(70);
          match(KaeliParser::EQUAL);
          setState(71);
          expr(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(72);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(73);
          _la = _input->LA(1);
          if (!(_la == KaeliParser::LESS

          || _la == KaeliParser::GREATER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(74);
          match(KaeliParser::EQUAL);
          setState(75);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(80);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddsubContext ------------------------------------------------------------------

KaeliParser::AddsubContext::AddsubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::AddsubContext::ADD() {
  return getToken(KaeliParser::ADD, 0);
}

tree::TerminalNode* KaeliParser::AddsubContext::RESTA() {
  return getToken(KaeliParser::RESTA, 0);
}


size_t KaeliParser::AddsubContext::getRuleIndex() const {
  return KaeliParser::RuleAddsub;
}


std::any KaeliParser::AddsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitAddsub(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::AddsubContext* KaeliParser::addsub() {
  AddsubContext *_localctx = _tracker.createInstance<AddsubContext>(_ctx, getState());
  enterRule(_localctx, 6, KaeliParser::RuleAddsub);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    _la = _input->LA(1);
    if (!(_la == KaeliParser::ADD

    || _la == KaeliParser::RESTA)) {
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

//----------------- MultdivContext ------------------------------------------------------------------

KaeliParser::MultdivContext::MultdivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::MultdivContext::MUL() {
  return getToken(KaeliParser::MUL, 0);
}

tree::TerminalNode* KaeliParser::MultdivContext::DIV() {
  return getToken(KaeliParser::DIV, 0);
}


size_t KaeliParser::MultdivContext::getRuleIndex() const {
  return KaeliParser::RuleMultdiv;
}


std::any KaeliParser::MultdivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitMultdiv(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::MultdivContext* KaeliParser::multdiv() {
  MultdivContext *_localctx = _tracker.createInstance<MultdivContext>(_ctx, getState());
  enterRule(_localctx, 8, KaeliParser::RuleMultdiv);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    _la = _input->LA(1);
    if (!(_la == KaeliParser::MUL

    || _la == KaeliParser::DIV)) {
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

KaeliParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::ArrayContext::LBRACKET() {
  return getToken(KaeliParser::LBRACKET, 0);
}

std::vector<KaeliParser::ExprContext *> KaeliParser::ArrayContext::expr() {
  return getRuleContexts<KaeliParser::ExprContext>();
}

KaeliParser::ExprContext* KaeliParser::ArrayContext::expr(size_t i) {
  return getRuleContext<KaeliParser::ExprContext>(i);
}

tree::TerminalNode* KaeliParser::ArrayContext::RBRACKET() {
  return getToken(KaeliParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> KaeliParser::ArrayContext::COMMA() {
  return getTokens(KaeliParser::COMMA);
}

tree::TerminalNode* KaeliParser::ArrayContext::COMMA(size_t i) {
  return getToken(KaeliParser::COMMA, i);
}


size_t KaeliParser::ArrayContext::getRuleIndex() const {
  return KaeliParser::RuleArray;
}


std::any KaeliParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::ArrayContext* KaeliParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 10, KaeliParser::RuleArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(KaeliParser::LBRACKET);
    setState(86);
    expr(0);
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KaeliParser::COMMA) {
      setState(87);
      match(KaeliParser::COMMA);
      setState(88);
      expr(0);
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    match(KaeliParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

KaeliParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::VariableContext::ID() {
  return getToken(KaeliParser::ID, 0);
}

tree::TerminalNode* KaeliParser::VariableContext::EQUAL() {
  return getToken(KaeliParser::EQUAL, 0);
}

KaeliParser::ExprContext* KaeliParser::VariableContext::expr() {
  return getRuleContext<KaeliParser::ExprContext>(0);
}


size_t KaeliParser::VariableContext::getRuleIndex() const {
  return KaeliParser::RuleVariable;
}


std::any KaeliParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::VariableContext* KaeliParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 12, KaeliParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(KaeliParser::ID);
    setState(97);
    match(KaeliParser::EQUAL);
    setState(98);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncParamsContext ------------------------------------------------------------------

KaeliParser::FuncParamsContext::FuncParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KaeliParser::FuncParamsContext::ID() {
  return getTokens(KaeliParser::ID);
}

tree::TerminalNode* KaeliParser::FuncParamsContext::ID(size_t i) {
  return getToken(KaeliParser::ID, i);
}

std::vector<tree::TerminalNode *> KaeliParser::FuncParamsContext::COMMA() {
  return getTokens(KaeliParser::COMMA);
}

tree::TerminalNode* KaeliParser::FuncParamsContext::COMMA(size_t i) {
  return getToken(KaeliParser::COMMA, i);
}


size_t KaeliParser::FuncParamsContext::getRuleIndex() const {
  return KaeliParser::RuleFuncParams;
}


std::any KaeliParser::FuncParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitFuncParams(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::FuncParamsContext* KaeliParser::funcParams() {
  FuncParamsContext *_localctx = _tracker.createInstance<FuncParamsContext>(_ctx, getState());
  enterRule(_localctx, 14, KaeliParser::RuleFuncParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(KaeliParser::ID);
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KaeliParser::COMMA) {
      setState(101);
      match(KaeliParser::COMMA);
      setState(102);
      match(KaeliParser::ID);
      setState(107);
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

//----------------- FuncDefContext ------------------------------------------------------------------

KaeliParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::FuncDefContext::FUNC() {
  return getToken(KaeliParser::FUNC, 0);
}

tree::TerminalNode* KaeliParser::FuncDefContext::ID() {
  return getToken(KaeliParser::ID, 0);
}

tree::TerminalNode* KaeliParser::FuncDefContext::LAPREN() {
  return getToken(KaeliParser::LAPREN, 0);
}

KaeliParser::FuncParamsContext* KaeliParser::FuncDefContext::funcParams() {
  return getRuleContext<KaeliParser::FuncParamsContext>(0);
}

tree::TerminalNode* KaeliParser::FuncDefContext::RPAREN() {
  return getToken(KaeliParser::RPAREN, 0);
}

tree::TerminalNode* KaeliParser::FuncDefContext::START_BLOCK() {
  return getToken(KaeliParser::START_BLOCK, 0);
}

tree::TerminalNode* KaeliParser::FuncDefContext::END_BLOCK() {
  return getToken(KaeliParser::END_BLOCK, 0);
}

std::vector<KaeliParser::StatContext *> KaeliParser::FuncDefContext::stat() {
  return getRuleContexts<KaeliParser::StatContext>();
}

KaeliParser::StatContext* KaeliParser::FuncDefContext::stat(size_t i) {
  return getRuleContext<KaeliParser::StatContext>(i);
}


size_t KaeliParser::FuncDefContext::getRuleIndex() const {
  return KaeliParser::RuleFuncDef;
}


std::any KaeliParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::FuncDefContext* KaeliParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 16, KaeliParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(KaeliParser::FUNC);
    setState(109);
    match(KaeliParser::ID);
    setState(110);
    match(KaeliParser::LAPREN);
    setState(111);
    funcParams();
    setState(112);
    match(KaeliParser::RPAREN);
    setState(113);
    match(KaeliParser::START_BLOCK);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1051856898) != 0)) {
      setState(114);
      stat();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
    match(KaeliParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncArgsContext ------------------------------------------------------------------

KaeliParser::FuncArgsContext::FuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KaeliParser::ExprContext *> KaeliParser::FuncArgsContext::expr() {
  return getRuleContexts<KaeliParser::ExprContext>();
}

KaeliParser::ExprContext* KaeliParser::FuncArgsContext::expr(size_t i) {
  return getRuleContext<KaeliParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> KaeliParser::FuncArgsContext::COMMA() {
  return getTokens(KaeliParser::COMMA);
}

tree::TerminalNode* KaeliParser::FuncArgsContext::COMMA(size_t i) {
  return getToken(KaeliParser::COMMA, i);
}


size_t KaeliParser::FuncArgsContext::getRuleIndex() const {
  return KaeliParser::RuleFuncArgs;
}


std::any KaeliParser::FuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::FuncArgsContext* KaeliParser::funcArgs() {
  FuncArgsContext *_localctx = _tracker.createInstance<FuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 18, KaeliParser::RuleFuncArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    expr(0);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KaeliParser::COMMA) {
      setState(123);
      match(KaeliParser::COMMA);
      setState(124);
      expr(0);
      setState(129);
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

//----------------- FuncCallContext ------------------------------------------------------------------

KaeliParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::FuncCallContext::ID() {
  return getToken(KaeliParser::ID, 0);
}

tree::TerminalNode* KaeliParser::FuncCallContext::LAPREN() {
  return getToken(KaeliParser::LAPREN, 0);
}

KaeliParser::FuncArgsContext* KaeliParser::FuncCallContext::funcArgs() {
  return getRuleContext<KaeliParser::FuncArgsContext>(0);
}

tree::TerminalNode* KaeliParser::FuncCallContext::RPAREN() {
  return getToken(KaeliParser::RPAREN, 0);
}


size_t KaeliParser::FuncCallContext::getRuleIndex() const {
  return KaeliParser::RuleFuncCall;
}


std::any KaeliParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::FuncCallContext* KaeliParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 20, KaeliParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(KaeliParser::ID);
    setState(131);
    match(KaeliParser::LAPREN);
    setState(132);
    funcArgs();
    setState(133);
    match(KaeliParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForContext ------------------------------------------------------------------

KaeliParser::ForContext::ForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::ForContext::FOR() {
  return getToken(KaeliParser::FOR, 0);
}

tree::TerminalNode* KaeliParser::ForContext::DESDE() {
  return getToken(KaeliParser::DESDE, 0);
}

tree::TerminalNode* KaeliParser::ForContext::HASTA() {
  return getToken(KaeliParser::HASTA, 0);
}

std::vector<tree::TerminalNode *> KaeliParser::ForContext::NUM() {
  return getTokens(KaeliParser::NUM);
}

tree::TerminalNode* KaeliParser::ForContext::NUM(size_t i) {
  return getToken(KaeliParser::NUM, i);
}

std::vector<tree::TerminalNode *> KaeliParser::ForContext::ID() {
  return getTokens(KaeliParser::ID);
}

tree::TerminalNode* KaeliParser::ForContext::ID(size_t i) {
  return getToken(KaeliParser::ID, i);
}

tree::TerminalNode* KaeliParser::ForContext::EN() {
  return getToken(KaeliParser::EN, 0);
}

KaeliParser::ArrayContext* KaeliParser::ForContext::array() {
  return getRuleContext<KaeliParser::ArrayContext>(0);
}


size_t KaeliParser::ForContext::getRuleIndex() const {
  return KaeliParser::RuleFor;
}


std::any KaeliParser::ForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitFor(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::ForContext* KaeliParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 22, KaeliParser::RuleFor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KaeliParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(135);
        match(KaeliParser::FOR);
        break;
      }

      case KaeliParser::DESDE: {
        enterOuterAlt(_localctx, 2);
        setState(136);
        match(KaeliParser::DESDE);
        setState(137);
        _la = _input->LA(1);
        if (!(_la == KaeliParser::ID

        || _la == KaeliParser::NUM)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(138);
        match(KaeliParser::HASTA);
        setState(139);
        _la = _input->LA(1);
        if (!(_la == KaeliParser::ID

        || _la == KaeliParser::NUM)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case KaeliParser::EN: {
        enterOuterAlt(_localctx, 3);
        setState(140);
        match(KaeliParser::EN);
        setState(143);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case KaeliParser::ID: {
            setState(141);
            match(KaeliParser::ID);
            break;
          }

          case KaeliParser::LBRACKET: {
            setState(142);
            array();
            break;
          }

        default:
          throw NoViableAltException(this);
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

//----------------- IfContext ------------------------------------------------------------------

KaeliParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaeliParser::IfContext::COND() {
  return getToken(KaeliParser::COND, 0);
}

KaeliParser::ExprContext* KaeliParser::IfContext::expr() {
  return getRuleContext<KaeliParser::ExprContext>(0);
}

tree::TerminalNode* KaeliParser::IfContext::START_BLOCK() {
  return getToken(KaeliParser::START_BLOCK, 0);
}

std::vector<KaeliParser::StatContext *> KaeliParser::IfContext::stat() {
  return getRuleContexts<KaeliParser::StatContext>();
}

KaeliParser::StatContext* KaeliParser::IfContext::stat(size_t i) {
  return getRuleContext<KaeliParser::StatContext>(i);
}


size_t KaeliParser::IfContext::getRuleIndex() const {
  return KaeliParser::RuleIf;
}


std::any KaeliParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaeliParserVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

KaeliParser::IfContext* KaeliParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 24, KaeliParser::RuleIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(KaeliParser::COND);
    setState(148);
    expr(0);
    setState(149);
    match(KaeliParser::START_BLOCK);
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1051856898) != 0)) {
      setState(150);
      stat();
      setState(155);
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

bool KaeliParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KaeliParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void KaeliParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  kaeliparserParserInitialize();
#else
  ::antlr4::internal::call_once(kaeliparserParserOnceFlag, kaeliparserParserInitialize);
#endif
}
