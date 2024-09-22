
// Generated from KaeliLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  KaeliLexer : public antlr4::Lexer {
public:
  enum {
    LAPREN = 1, RPAREN = 2, ADD = 3, RESTA = 4, MUL = 5, DIV = 6, LESS = 7, 
    GREATER = 8, EQUAL = 9, COMMA = 10, SEMI = 11, LBRACKET = 12, RBRACKET = 13, 
    LINE_COMMENT = 14, START_BLOCK = 15, END_BLOCK = 16, STRING = 17, COMMENT = 18, 
    IMPORT = 19, FUNC = 20, FOR = 21, WHILE = 22, DESDE = 23, HASTA = 24, 
    EN = 25, COND = 26, ID = 27, NUM = 28, BOOL = 29, NADA = 30, RETURN = 31, 
    WS = 32
  };

  explicit KaeliLexer(antlr4::CharStream *input);

  ~KaeliLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

