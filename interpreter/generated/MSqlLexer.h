
// Generated from ./MSqlLexer.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  MSqlLexer : public antlr4::Lexer {
public:
  enum {
    SPACE = 1, AS = 2, CREATE = 3, SELECT = 4, FROM = 5, TABLE = 6, MAX = 7, 
    SUM = 8, AVG = 9, MIN = 10, COUNT = 11, ALL = 12, DISTINCT = 13, WHERE = 14, 
    GROUP = 15, BY = 16, ORDER = 17, HAVING = 18, NOT = 19, IS = 20, TRUE = 21, 
    FALSE = 22, UNKNOWN = 23, BETWEEN = 24, AND = 25, IN = 26, OR = 27, 
    ASC = 28, DESC = 29, LIMIT = 30, OFFSET = 31, CONSTRAINT = 32, PRIMARY = 33, 
    KEY = 34, DEFAULT = 35, CHECK = 36, FOREIGN = 37, NULL_LITERAL = 38, 
    INDEX = 39, UNIQUE = 40, DROP = 41, ON = 42, INSERT = 43, INTO = 44, 
    VALUES = 45, VALUE = 46, ANY = 47, SOME = 48, BINARY = 49, COLLATE = 50, 
    SOUNDS = 51, LIKE = 52, REGEXP = 53, ESCAPE = 54, RLIKE = 55, MEMBER = 56, 
    OF = 57, ROW = 58, EXISTS = 59, INTERVAL = 60, DIV = 61, MOD = 62, DELETE = 63, 
    PARTITION = 64, USING = 65, BIT_STRING = 66, INT = 67, CHAR = 68, FLOAT = 69, 
    SIGNED = 70, UNSIGNED = 71, ZEROFILL = 72, STAR = 73, DIVIDE = 74, MODULE = 75, 
    PLUS = 76, MINUSMINUS = 77, MINUS = 78, EQUAL_SYMBOL = 79, GREATER_SYMBOL = 80, 
    LESS_SYMBOL = 81, EXCLAMATION_SYMBOL = 82, BIT_NOT_OP = 83, BIT_OR_OP = 84, 
    BIT_AND_OP = 85, BIT_XOR_OP = 86, DOT = 87, LR_BRACKET = 88, RR_BRACKET = 89, 
    COMMA = 90, SEMI = 91, AT_SIGN = 92, SINGLE_QUOTE_SYMB = 93, DOUBLE_QUOTE_SYMB = 94, 
    REVERSE_QUOTE_SYMB = 95, COLON_SYMB = 96, ARMSCII8 = 97, ASCII = 98, 
    BIG5 = 99, CP1250 = 100, CP1251 = 101, CP1256 = 102, CP1257 = 103, CP850 = 104, 
    CP852 = 105, CP866 = 106, CP932 = 107, DEC8 = 108, EUCJPMS = 109, EUCKR = 110, 
    GB2312 = 111, GBK = 112, GEOSTD8 = 113, GREEK = 114, HEBREW = 115, HP8 = 116, 
    KEYBCS2 = 117, KOI8R = 118, KOI8U = 119, LATIN1 = 120, LATIN2 = 121, 
    LATIN5 = 122, LATIN7 = 123, MACCE = 124, MACROMAN = 125, SJIS = 126, 
    SWE7 = 127, TIS620 = 128, UCS2 = 129, UJIS = 130, UTF16 = 131, UTF16LE = 132, 
    UTF32 = 133, UTF8 = 134, UTF8MB3 = 135, UTF8MB4 = 136, START_NATIONAL_STRING_LITERAL = 137, 
    STRING_LITERAL = 138, DECIMAL_LITERAL = 139, HEXADECIMAL_LITERAL = 140, 
    REAL_LITERAL = 141, NULL_SPEC_LITERAL = 142, STRING_CHARSET_NAME = 143, 
    DOT_ID = 144, ID = 145, REVERSE_QUOTE_ID = 146, TEXT_STRING = 147, LOCAL_ID = 148, 
    GLOBAL_ID = 149, ERROR_RECONGNIGION = 150
  };

  enum {
    ERRORCHANNEL = 2
  };

  explicit MSqlLexer(antlr4::CharStream *input);
  ~MSqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

