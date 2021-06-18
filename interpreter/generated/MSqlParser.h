
// Generated from ./MSqlParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  MSqlParser : public antlr4::Parser {
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
    RuleSqlStatements = 0, RuleCreateTable = 1, RuleCreateDefinitions = 2, 
    RuleCreateDefinition = 3, RuleColumnDefinition = 4, RuleDataType = 5, 
    RuleLengthOneDimension = 6, RuleLengthTwoOptionalDimension = 7, RuleColumnConstraint = 8, 
    RuleTableConstraint = 9, RuleDropTable = 10, RuleCreateIndex = 11, RuleIndexColumnNames = 12, 
    RuleIndexColumnName = 13, RuleDropIndex = 14, RuleSelectStatement = 15, 
    RuleSelectElements = 16, RuleSelectElement = 17, RuleTableSources = 18, 
    RuleWhereClause = 19, RuleFromClause = 20, RuleGroupByClause = 21, RuleGroupByItem = 22, 
    RuleHavingClause = 23, RuleOrderByClause = 24, RuleOrderByExpression = 25, 
    RuleLimitClause = 26, RuleLogicalOperator = 27, RuleComparisonOperator = 28, 
    RuleBitOperator = 29, RuleMathOperator = 30, RuleJsonOperator = 31, 
    RuleValue = 32, RuleDecimalLiteral = 33, RuleHexadecimalLiteral = 34, 
    RuleBooleanLiteral = 35, RuleTextLiteral = 36, RuleStringLiteral = 37, 
    RuleCollationName = 38, RuleNullNotnull = 39, RuleDefaultValue = 40, 
    RuleUnaryOperator = 41, RuleConstant = 42, RuleFullColumnName = 43, 
    RuleFunctionCall = 44, RuleAggregateWindowedFunction = 45, RuleFunctionArg = 46, 
    RuleFunctionArgs = 47, RuleUid = 48, RuleFullId = 49, RuleDottedId = 50, 
    RuleTableName = 51, RuleTables = 52, RuleInsertStatement = 53, RuleUidList = 54, 
    RuleInsertStatementValue = 55, RuleExpressions = 56, RuleExpression = 57, 
    RulePredicate = 58, RuleExpressionAtom = 59, RuleMysqlVariable = 60, 
    RuleExpressionsWithDefaults = 61, RuleExpressionOrDefault = 62, RuleDeleteStatement = 63, 
    RuleSingleDeleteStatement = 64, RuleMultipleDeleteStatement = 65, RuleLimitClauseAtom = 66
  };

  explicit MSqlParser(antlr4::TokenStream *input);
  ~MSqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SqlStatementsContext;
  class CreateTableContext;
  class CreateDefinitionsContext;
  class CreateDefinitionContext;
  class ColumnDefinitionContext;
  class DataTypeContext;
  class LengthOneDimensionContext;
  class LengthTwoOptionalDimensionContext;
  class ColumnConstraintContext;
  class TableConstraintContext;
  class DropTableContext;
  class CreateIndexContext;
  class IndexColumnNamesContext;
  class IndexColumnNameContext;
  class DropIndexContext;
  class SelectStatementContext;
  class SelectElementsContext;
  class SelectElementContext;
  class TableSourcesContext;
  class WhereClauseContext;
  class FromClauseContext;
  class GroupByClauseContext;
  class GroupByItemContext;
  class HavingClauseContext;
  class OrderByClauseContext;
  class OrderByExpressionContext;
  class LimitClauseContext;
  class LogicalOperatorContext;
  class ComparisonOperatorContext;
  class BitOperatorContext;
  class MathOperatorContext;
  class JsonOperatorContext;
  class ValueContext;
  class DecimalLiteralContext;
  class HexadecimalLiteralContext;
  class BooleanLiteralContext;
  class TextLiteralContext;
  class StringLiteralContext;
  class CollationNameContext;
  class NullNotnullContext;
  class DefaultValueContext;
  class UnaryOperatorContext;
  class ConstantContext;
  class FullColumnNameContext;
  class FunctionCallContext;
  class AggregateWindowedFunctionContext;
  class FunctionArgContext;
  class FunctionArgsContext;
  class UidContext;
  class FullIdContext;
  class DottedIdContext;
  class TableNameContext;
  class TablesContext;
  class InsertStatementContext;
  class UidListContext;
  class InsertStatementValueContext;
  class ExpressionsContext;
  class ExpressionContext;
  class PredicateContext;
  class ExpressionAtomContext;
  class MysqlVariableContext;
  class ExpressionsWithDefaultsContext;
  class ExpressionOrDefaultContext;
  class DeleteStatementContext;
  class SingleDeleteStatementContext;
  class MultipleDeleteStatementContext;
  class LimitClauseAtomContext; 

  class  SqlStatementsContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateTableContext *createTable();
    CreateIndexContext *createIndex();
    DropTableContext *dropTable();
    DropIndexContext *dropIndex();
    InsertStatementContext *insertStatement();
    DeleteStatementContext *deleteStatement();
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqlStatementsContext* sqlStatements();

  class  CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *SEMI();
    CreateDefinitionsContext *createDefinitions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableContext* createTable();

  class  CreateDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<CreateDefinitionContext *> createDefinition();
    CreateDefinitionContext* createDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDefinitionsContext* createDefinitions();

  class  CreateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateDefinitionContext() = default;
    void copyFrom(CreateDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnDeclarationContext : public CreateDefinitionContext {
  public:
    ColumnDeclarationContext(CreateDefinitionContext *ctx);

    UidContext *uid();
    ColumnDefinitionContext *columnDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstraintDeclarationContext : public CreateDefinitionContext {
  public:
    ConstraintDeclarationContext(CreateDefinitionContext *ctx);

    TableConstraintContext *tableConstraint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CreateDefinitionContext* createDefinition();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    std::vector<ColumnConstraintContext *> columnConstraint();
    ColumnConstraintContext* columnConstraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ZEROFILL();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *FLOAT();
    LengthTwoOptionalDimensionContext *lengthTwoOptionalDimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class  LengthOneDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthOneDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthOneDimensionContext* lengthOneDimension();

  class  LengthTwoOptionalDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoOptionalDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthTwoOptionalDimensionContext* lengthTwoOptionalDimension();

  class  ColumnConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnConstraintContext() = default;
    void copyFrom(ColumnConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrimaryKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    PrimaryKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CheckColumnConstraintContext : public ColumnConstraintContext {
  public:
    CheckColumnConstraintContext(ColumnConstraintContext *ctx);

    MSqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UniqueKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    UniqueKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullColumnConstraintContext : public ColumnConstraintContext {
  public:
    NullColumnConstraintContext(ColumnConstraintContext *ctx);

    NullNotnullContext *nullNotnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    DefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ColumnConstraintContext* columnConstraint();

  class  TableConstraintContext : public antlr4::ParserRuleContext {
  public:
    MSqlParser::UidContext *name = nullptr;
    TableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *CHECK();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintContext* tableConstraint();

  class  DropTableContext : public antlr4::ParserRuleContext {
  public:
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableContext* dropTable();

  class  CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexContext* createIndex();

  class  IndexColumnNamesContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<IndexColumnNameContext *> indexColumnName();
    IndexColumnNameContext* indexColumnName(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexColumnNamesContext* indexColumnNames();

  class  IndexColumnNameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *sortType = nullptr;
    IndexColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexColumnNameContext* indexColumnName();

  class  DropIndexContext : public antlr4::ParserRuleContext {
  public:
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropIndexContext* dropIndex();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    antlr4::tree::TerminalNode *SEMI();
    FromClauseContext *fromClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementContext* selectStatement();

  class  SelectElementsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *star = nullptr;
    SelectElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectElementContext *> selectElement();
    SelectElementContext* selectElement(size_t i);
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectElementsContext* selectElements();

  class  SelectElementContext : public antlr4::ParserRuleContext {
  public:
    SelectElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectElementContext() = default;
    void copyFrom(SelectElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectFunctionElementContext : public SelectElementContext {
  public:
    SelectFunctionElementContext(SelectElementContext *ctx);

    FunctionCallContext *functionCall();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectColumnElementContext : public SelectElementContext {
  public:
    SelectColumnElementContext(SelectElementContext *ctx);

    FullColumnNameContext *fullColumnName();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SelectElementContext* selectElement();

  class  TableSourcesContext : public antlr4::ParserRuleContext {
  public:
    TableSourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableSourcesContext* tableSources();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    MSqlParser::ExpressionContext *whereExpr = nullptr;
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<GroupByItemContext *> groupByItem();
    GroupByItemContext* groupByItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByClauseContext* groupByClause();

  class  GroupByItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;
    GroupByItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullColumnNameContext *fullColumnName();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByItemContext* groupByItem();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByClauseContext* orderByClause();

  class  OrderByExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;
    OrderByExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullColumnNameContext *fullColumnName();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByExpressionContext* orderByExpression();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    MSqlParser::DecimalLiteralContext *offset = nullptr;
    MSqlParser::DecimalLiteralContext *limit = nullptr;
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *OFFSET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class  LogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    std::vector<antlr4::tree::TerminalNode *> BIT_AND_OP();
    antlr4::tree::TerminalNode* BIT_AND_OP(size_t i);
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> BIT_OR_OP();
    antlr4::tree::TerminalNode* BIT_OR_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOperatorContext* logicalOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *GREATER_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  BitOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LESS_SYMBOL();
    antlr4::tree::TerminalNode* LESS_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GREATER_SYMBOL();
    antlr4::tree::TerminalNode* GREATER_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *BIT_AND_OP();
    antlr4::tree::TerminalNode *BIT_XOR_OP();
    antlr4::tree::TerminalNode *BIT_OR_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitOperatorContext* bitOperator();

  class  MathOperatorContext : public antlr4::ParserRuleContext {
  public:
    MathOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MINUSMINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathOperatorContext* mathOperator();

  class  JsonOperatorContext : public antlr4::ParserRuleContext {
  public:
    JsonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    std::vector<antlr4::tree::TerminalNode *> GREATER_SYMBOL();
    antlr4::tree::TerminalNode* GREATER_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonOperatorContext* jsonOperator();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    TextLiteralContext *textLiteral();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  DecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalLiteralContext* decimalLiteral();

  class  HexadecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexadecimalLiteralContext* hexadecimalLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  TextLiteralContext : public antlr4::ParserRuleContext {
  public:
    TextLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextLiteralContext* textLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *START_NATIONAL_STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollationNameContext* collationName();

  class  NullNotnullContext : public antlr4::ParserRuleContext {
  public:
    NullNotnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullNotnullContext* nullNotnull();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    UnaryOperatorContext *unaryOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultValueContext* defaultValue();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();
    antlr4::tree::TerminalNode *BIT_NOT_OP();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nullLiteral = nullptr;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *MINUS();
    HexadecimalLiteralContext *hexadecimalLiteral();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  FullColumnNameContext : public antlr4::ParserRuleContext {
  public:
    FullColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    std::vector<DottedIdContext *> dottedId();
    DottedIdContext* dottedId(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullColumnNameContext* fullColumnName();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionCallContext() = default;
    void copyFrom(FunctionCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AggregateFunctionCallContext : public FunctionCallContext {
  public:
    AggregateFunctionCallContext(FunctionCallContext *ctx);

    AggregateWindowedFunctionContext *aggregateWindowedFunction();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunctionCallContext* functionCall();

  class  AggregateWindowedFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *starArg = nullptr;
    antlr4::Token *aggregator = nullptr;
    AggregateWindowedFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *STAR();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregateWindowedFunctionContext* aggregateWindowedFunction();

  class  FunctionArgContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullColumnNameContext *fullColumnName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgContext* functionArg();

  class  FunctionArgsContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FullColumnNameContext *> fullColumnName();
    FullColumnNameContext* fullColumnName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgsContext* functionArgs();

  class  UidContext : public antlr4::ParserRuleContext {
  public:
    UidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UidContext* uid();

  class  FullIdContext : public antlr4::ParserRuleContext {
  public:
    FullIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *DOT_ID();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullIdContext* fullId();

  class  DottedIdContext : public antlr4::ParserRuleContext {
  public:
    DottedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();
    antlr4::tree::TerminalNode *DOT();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DottedIdContext* dottedId();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdContext *fullId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class  TablesContext : public antlr4::ParserRuleContext {
  public:
    TablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablesContext* tables();

  class  InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    MSqlParser::UidListContext *columns = nullptr;
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    UidListContext *uidList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementContext* insertStatement();

  class  UidListContext : public antlr4::ParserRuleContext {
  public:
    UidListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UidListContext* uidList();

  class  InsertStatementValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *insertFormat = nullptr;
    InsertStatementValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<ExpressionsWithDefaultsContext *> expressionsWithDefaults();
    ExpressionsWithDefaultsContext* expressionsWithDefaults(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementValueContext* insertStatementValue();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsContext* expressions();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IsExpressionContext : public ExpressionContext {
  public:
    IsExpressionContext(ExpressionContext *ctx);

    antlr4::Token *testValue = nullptr;
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExpressionContext : public ExpressionContext {
  public:
    NotExpressionContext(ExpressionContext *ctx);

    antlr4::Token *notOperator = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalExpressionContext : public ExpressionContext {
  public:
    LogicalExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    LogicalOperatorContext *logicalOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicateExpressionContext : public ExpressionContext {
  public:
    PredicateExpressionContext(ExpressionContext *ctx);

    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() = default;
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SoundsLikePredicateContext : public PredicateContext {
  public:
    SoundsLikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *LIKE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpressionAtomPredicateContext : public PredicateContext {
  public:
    ExpressionAtomPredicateContext(PredicateContext *ctx);

    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *LOCAL_ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JsonMemberOfPredicateContext : public PredicateContext {
  public:
    JsonMemberOfPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InPredicateContext : public PredicateContext {
  public:
    InPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    SelectStatementContext *selectStatement();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubqueryComparasionPredicateContext : public PredicateContext {
  public:
    SubqueryComparasionPredicateContext(PredicateContext *ctx);

    antlr4::Token *quantifier = nullptr;
    PredicateContext *predicate();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BetweenPredicateContext : public PredicateContext {
  public:
    BetweenPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryComparasionPredicateContext : public PredicateContext {
  public:
    BinaryComparasionPredicateContext(PredicateContext *ctx);

    MSqlParser::PredicateContext *left = nullptr;
    MSqlParser::PredicateContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IsNullPredicateContext : public PredicateContext {
  public:
    IsNullPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    NullNotnullContext *nullNotnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LikePredicateContext : public PredicateContext {
  public:
    LikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RegexpPredicateContext : public PredicateContext {
  public:
    RegexpPredicateContext(PredicateContext *ctx);

    antlr4::Token *regex = nullptr;
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateContext* predicate();
  PredicateContext* predicate(int precedence);
  class  ExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionAtomContext() = default;
    void copyFrom(ExpressionAtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryExpressionAtomContext : public ExpressionAtomContext {
  public:
    UnaryExpressionAtomContext(ExpressionAtomContext *ctx);

    UnaryOperatorContext *unaryOperator();
    ExpressionAtomContext *expressionAtom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CollateExpressionAtomContext : public ExpressionAtomContext {
  public:
    CollateExpressionAtomContext(ExpressionAtomContext *ctx);

    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MysqlVariableExpressionAtomContext : public ExpressionAtomContext {
  public:
    MysqlVariableExpressionAtomContext(ExpressionAtomContext *ctx);

    MysqlVariableContext *mysqlVariable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NestedExpressionAtomContext : public ExpressionAtomContext {
  public:
    NestedExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NestedRowExpressionAtomContext : public ExpressionAtomContext {
  public:
    NestedRowExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MathExpressionAtomContext : public ExpressionAtomContext {
  public:
    MathExpressionAtomContext(ExpressionAtomContext *ctx);

    MSqlParser::ExpressionAtomContext *left = nullptr;
    MSqlParser::ExpressionAtomContext *right = nullptr;
    MathOperatorContext *mathOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExistsExpressionAtomContext : public ExpressionAtomContext {
  public:
    ExistsExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JsonExpressionAtomContext : public ExpressionAtomContext {
  public:
    JsonExpressionAtomContext(ExpressionAtomContext *ctx);

    MSqlParser::ExpressionAtomContext *left = nullptr;
    MSqlParser::ExpressionAtomContext *right = nullptr;
    JsonOperatorContext *jsonOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubqueryExpressionAtomContext : public ExpressionAtomContext {
  public:
    SubqueryExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantExpressionAtomContext : public ExpressionAtomContext {
  public:
    ConstantExpressionAtomContext(ExpressionAtomContext *ctx);

    ConstantContext *constant();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExpressionAtomContext : public ExpressionAtomContext {
  public:
    FunctionCallExpressionAtomContext(ExpressionAtomContext *ctx);

    FunctionCallContext *functionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryExpressionAtomContext : public ExpressionAtomContext {
  public:
    BinaryExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *BINARY();
    ExpressionAtomContext *expressionAtom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FullColumnNameExpressionAtomContext : public ExpressionAtomContext {
  public:
    FullColumnNameExpressionAtomContext(ExpressionAtomContext *ctx);

    FullColumnNameContext *fullColumnName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitExpressionAtomContext : public ExpressionAtomContext {
  public:
    BitExpressionAtomContext(ExpressionAtomContext *ctx);

    MSqlParser::ExpressionAtomContext *left = nullptr;
    MSqlParser::ExpressionAtomContext *right = nullptr;
    BitOperatorContext *bitOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionAtomContext* expressionAtom();
  ExpressionAtomContext* expressionAtom(int precedence);
  class  MysqlVariableContext : public antlr4::ParserRuleContext {
  public:
    MysqlVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MysqlVariableContext* mysqlVariable();

  class  ExpressionsWithDefaultsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsWithDefaultsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionOrDefaultContext *> expressionOrDefault();
    ExpressionOrDefaultContext* expressionOrDefault(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsWithDefaultsContext* expressionsWithDefaults();

  class  ExpressionOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExpressionOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionOrDefaultContext* expressionOrDefault();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleDeleteStatementContext *singleDeleteStatement();
    MultipleDeleteStatementContext *multipleDeleteStatement();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  SingleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    SingleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    OrderByClauseContext *orderByClause();
    antlr4::tree::TerminalNode *LIMIT();
    LimitClauseAtomContext *limitClauseAtom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleDeleteStatementContext* singleDeleteStatement();

  class  MultipleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    MultipleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipleDeleteStatementContext* multipleDeleteStatement();

  class  LimitClauseAtomContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    MysqlVariableContext *mysqlVariable();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseAtomContext* limitClauseAtom();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

