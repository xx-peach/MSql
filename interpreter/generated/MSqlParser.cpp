
// Generated from ./MSqlParser.g4 by ANTLR 4.9


#include "MSqlParserListener.h"
#include "MSqlParserVisitor.h"

#include "MSqlParser.h"


using namespace antlrcpp;
using namespace antlr4;

MSqlParser::MSqlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MSqlParser::~MSqlParser() {
  delete _interpreter;
}

std::string MSqlParser::getGrammarFileName() const {
  return "MSqlParser.g4";
}

const std::vector<std::string>& MSqlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MSqlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SqlStatementsContext ------------------------------------------------------------------

MSqlParser::SqlStatementsContext::SqlStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::CreateTableContext* MSqlParser::SqlStatementsContext::createTable() {
  return getRuleContext<MSqlParser::CreateTableContext>(0);
}

MSqlParser::CreateIndexContext* MSqlParser::SqlStatementsContext::createIndex() {
  return getRuleContext<MSqlParser::CreateIndexContext>(0);
}

MSqlParser::DropTableContext* MSqlParser::SqlStatementsContext::dropTable() {
  return getRuleContext<MSqlParser::DropTableContext>(0);
}

MSqlParser::DropIndexContext* MSqlParser::SqlStatementsContext::dropIndex() {
  return getRuleContext<MSqlParser::DropIndexContext>(0);
}

MSqlParser::InsertStatementContext* MSqlParser::SqlStatementsContext::insertStatement() {
  return getRuleContext<MSqlParser::InsertStatementContext>(0);
}

MSqlParser::DeleteStatementContext* MSqlParser::SqlStatementsContext::deleteStatement() {
  return getRuleContext<MSqlParser::DeleteStatementContext>(0);
}

MSqlParser::SelectStatementContext* MSqlParser::SqlStatementsContext::selectStatement() {
  return getRuleContext<MSqlParser::SelectStatementContext>(0);
}


size_t MSqlParser::SqlStatementsContext::getRuleIndex() const {
  return MSqlParser::RuleSqlStatements;
}

void MSqlParser::SqlStatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqlStatements(this);
}

void MSqlParser::SqlStatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqlStatements(this);
}


antlrcpp::Any MSqlParser::SqlStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSqlStatements(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::SqlStatementsContext* MSqlParser::sqlStatements() {
  SqlStatementsContext *_localctx = _tracker.createInstance<SqlStatementsContext>(_ctx, getState());
  enterRule(_localctx, 0, MSqlParser::RuleSqlStatements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      createTable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      createIndex();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(136);
      dropTable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(137);
      dropIndex();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(138);
      insertStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(139);
      deleteStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(140);
      selectStatement();
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

//----------------- CreateTableContext ------------------------------------------------------------------

MSqlParser::CreateTableContext::CreateTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::CreateTableContext::CREATE() {
  return getToken(MSqlParser::CREATE, 0);
}

tree::TerminalNode* MSqlParser::CreateTableContext::TABLE() {
  return getToken(MSqlParser::TABLE, 0);
}

MSqlParser::TableNameContext* MSqlParser::CreateTableContext::tableName() {
  return getRuleContext<MSqlParser::TableNameContext>(0);
}

tree::TerminalNode* MSqlParser::CreateTableContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}

MSqlParser::CreateDefinitionsContext* MSqlParser::CreateTableContext::createDefinitions() {
  return getRuleContext<MSqlParser::CreateDefinitionsContext>(0);
}


size_t MSqlParser::CreateTableContext::getRuleIndex() const {
  return MSqlParser::RuleCreateTable;
}

void MSqlParser::CreateTableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateTable(this);
}

void MSqlParser::CreateTableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateTable(this);
}


antlrcpp::Any MSqlParser::CreateTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitCreateTable(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::CreateTableContext* MSqlParser::createTable() {
  CreateTableContext *_localctx = _tracker.createInstance<CreateTableContext>(_ctx, getState());
  enterRule(_localctx, 2, MSqlParser::RuleCreateTable);
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
    setState(143);
    match(MSqlParser::CREATE);
    setState(144);
    match(MSqlParser::TABLE);
    setState(145);
    tableName();
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::LR_BRACKET) {
      setState(146);
      createDefinitions();
    }
    setState(149);
    match(MSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateDefinitionsContext ------------------------------------------------------------------

MSqlParser::CreateDefinitionsContext::CreateDefinitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::CreateDefinitionsContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

std::vector<MSqlParser::CreateDefinitionContext *> MSqlParser::CreateDefinitionsContext::createDefinition() {
  return getRuleContexts<MSqlParser::CreateDefinitionContext>();
}

MSqlParser::CreateDefinitionContext* MSqlParser::CreateDefinitionsContext::createDefinition(size_t i) {
  return getRuleContext<MSqlParser::CreateDefinitionContext>(i);
}

tree::TerminalNode* MSqlParser::CreateDefinitionsContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::CreateDefinitionsContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::CreateDefinitionsContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::CreateDefinitionsContext::getRuleIndex() const {
  return MSqlParser::RuleCreateDefinitions;
}

void MSqlParser::CreateDefinitionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateDefinitions(this);
}

void MSqlParser::CreateDefinitionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateDefinitions(this);
}


antlrcpp::Any MSqlParser::CreateDefinitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitCreateDefinitions(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::CreateDefinitionsContext* MSqlParser::createDefinitions() {
  CreateDefinitionsContext *_localctx = _tracker.createInstance<CreateDefinitionsContext>(_ctx, getState());
  enterRule(_localctx, 4, MSqlParser::RuleCreateDefinitions);
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
    setState(151);
    match(MSqlParser::LR_BRACKET);
    setState(152);
    createDefinition();
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(153);
      match(MSqlParser::COMMA);
      setState(154);
      createDefinition();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160);
    match(MSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateDefinitionContext ------------------------------------------------------------------

MSqlParser::CreateDefinitionContext::CreateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::CreateDefinitionContext::getRuleIndex() const {
  return MSqlParser::RuleCreateDefinition;
}

void MSqlParser::CreateDefinitionContext::copyFrom(CreateDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ColumnDeclarationContext ------------------------------------------------------------------

MSqlParser::UidContext* MSqlParser::ColumnDeclarationContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

MSqlParser::ColumnDefinitionContext* MSqlParser::ColumnDeclarationContext::columnDefinition() {
  return getRuleContext<MSqlParser::ColumnDefinitionContext>(0);
}

MSqlParser::ColumnDeclarationContext::ColumnDeclarationContext(CreateDefinitionContext *ctx) { copyFrom(ctx); }

void MSqlParser::ColumnDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnDeclaration(this);
}
void MSqlParser::ColumnDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnDeclaration(this);
}

antlrcpp::Any MSqlParser::ColumnDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitColumnDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstraintDeclarationContext ------------------------------------------------------------------

MSqlParser::TableConstraintContext* MSqlParser::ConstraintDeclarationContext::tableConstraint() {
  return getRuleContext<MSqlParser::TableConstraintContext>(0);
}

MSqlParser::ConstraintDeclarationContext::ConstraintDeclarationContext(CreateDefinitionContext *ctx) { copyFrom(ctx); }

void MSqlParser::ConstraintDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraintDeclaration(this);
}
void MSqlParser::ConstraintDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraintDeclaration(this);
}

antlrcpp::Any MSqlParser::ConstraintDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitConstraintDeclaration(this);
  else
    return visitor->visitChildren(this);
}
MSqlParser::CreateDefinitionContext* MSqlParser::createDefinition() {
  CreateDefinitionContext *_localctx = _tracker.createInstance<CreateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 6, MSqlParser::RuleCreateDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::ID: {
        _localctx = dynamic_cast<CreateDefinitionContext *>(_tracker.createInstance<MSqlParser::ColumnDeclarationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(162);
        uid();
        setState(163);
        columnDefinition();
        break;
      }

      case MSqlParser::CONSTRAINT:
      case MSqlParser::PRIMARY:
      case MSqlParser::CHECK:
      case MSqlParser::UNIQUE:
      case MSqlParser::RR_BRACKET:
      case MSqlParser::COMMA: {
        _localctx = dynamic_cast<CreateDefinitionContext *>(_tracker.createInstance<MSqlParser::ConstraintDeclarationContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(165);
        tableConstraint();
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

//----------------- ColumnDefinitionContext ------------------------------------------------------------------

MSqlParser::ColumnDefinitionContext::ColumnDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::DataTypeContext* MSqlParser::ColumnDefinitionContext::dataType() {
  return getRuleContext<MSqlParser::DataTypeContext>(0);
}

std::vector<MSqlParser::ColumnConstraintContext *> MSqlParser::ColumnDefinitionContext::columnConstraint() {
  return getRuleContexts<MSqlParser::ColumnConstraintContext>();
}

MSqlParser::ColumnConstraintContext* MSqlParser::ColumnDefinitionContext::columnConstraint(size_t i) {
  return getRuleContext<MSqlParser::ColumnConstraintContext>(i);
}


size_t MSqlParser::ColumnDefinitionContext::getRuleIndex() const {
  return MSqlParser::RuleColumnDefinition;
}

void MSqlParser::ColumnDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnDefinition(this);
}

void MSqlParser::ColumnDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnDefinition(this);
}


antlrcpp::Any MSqlParser::ColumnDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitColumnDefinition(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ColumnDefinitionContext* MSqlParser::columnDefinition() {
  ColumnDefinitionContext *_localctx = _tracker.createInstance<ColumnDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 8, MSqlParser::RuleColumnDefinition);
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
    setState(168);
    dataType();
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MSqlParser::NOT)
      | (1ULL << MSqlParser::CONSTRAINT)
      | (1ULL << MSqlParser::PRIMARY)
      | (1ULL << MSqlParser::KEY)
      | (1ULL << MSqlParser::DEFAULT)
      | (1ULL << MSqlParser::CHECK)
      | (1ULL << MSqlParser::NULL_LITERAL)
      | (1ULL << MSqlParser::UNIQUE))) != 0) || _la == MSqlParser::NULL_SPEC_LITERAL) {
      setState(169);
      columnConstraint();
      setState(174);
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

//----------------- DataTypeContext ------------------------------------------------------------------

MSqlParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::DataTypeContext::CHAR() {
  return getToken(MSqlParser::CHAR, 0);
}

MSqlParser::LengthOneDimensionContext* MSqlParser::DataTypeContext::lengthOneDimension() {
  return getRuleContext<MSqlParser::LengthOneDimensionContext>(0);
}

tree::TerminalNode* MSqlParser::DataTypeContext::INT() {
  return getToken(MSqlParser::INT, 0);
}

tree::TerminalNode* MSqlParser::DataTypeContext::ZEROFILL() {
  return getToken(MSqlParser::ZEROFILL, 0);
}

tree::TerminalNode* MSqlParser::DataTypeContext::SIGNED() {
  return getToken(MSqlParser::SIGNED, 0);
}

tree::TerminalNode* MSqlParser::DataTypeContext::UNSIGNED() {
  return getToken(MSqlParser::UNSIGNED, 0);
}

tree::TerminalNode* MSqlParser::DataTypeContext::FLOAT() {
  return getToken(MSqlParser::FLOAT, 0);
}

MSqlParser::LengthTwoOptionalDimensionContext* MSqlParser::DataTypeContext::lengthTwoOptionalDimension() {
  return getRuleContext<MSqlParser::LengthTwoOptionalDimensionContext>(0);
}


size_t MSqlParser::DataTypeContext::getRuleIndex() const {
  return MSqlParser::RuleDataType;
}

void MSqlParser::DataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataType(this);
}

void MSqlParser::DataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataType(this);
}


antlrcpp::Any MSqlParser::DataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDataType(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DataTypeContext* MSqlParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, MSqlParser::RuleDataType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(199);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        match(MSqlParser::CHAR);
        setState(177);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::LR_BRACKET) {
          setState(176);
          lengthOneDimension();
        }
        break;
      }

      case MSqlParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(179);
        match(MSqlParser::INT);
        setState(181);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::LR_BRACKET) {
          setState(180);
          lengthOneDimension();
        }
        setState(184);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::SIGNED

        || _la == MSqlParser::UNSIGNED) {
          setState(183);
          _la = _input->LA(1);
          if (!(_la == MSqlParser::SIGNED

          || _la == MSqlParser::UNSIGNED)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(187);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::ZEROFILL) {
          setState(186);
          match(MSqlParser::ZEROFILL);
        }
        break;
      }

      case MSqlParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(189);
        match(MSqlParser::FLOAT);
        setState(191);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::LR_BRACKET) {
          setState(190);
          lengthTwoOptionalDimension();
        }
        setState(194);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::SIGNED

        || _la == MSqlParser::UNSIGNED) {
          setState(193);
          _la = _input->LA(1);
          if (!(_la == MSqlParser::SIGNED

          || _la == MSqlParser::UNSIGNED)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(197);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::ZEROFILL) {
          setState(196);
          match(MSqlParser::ZEROFILL);
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

//----------------- LengthOneDimensionContext ------------------------------------------------------------------

MSqlParser::LengthOneDimensionContext::LengthOneDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::LengthOneDimensionContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::DecimalLiteralContext* MSqlParser::LengthOneDimensionContext::decimalLiteral() {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(0);
}

tree::TerminalNode* MSqlParser::LengthOneDimensionContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}


size_t MSqlParser::LengthOneDimensionContext::getRuleIndex() const {
  return MSqlParser::RuleLengthOneDimension;
}

void MSqlParser::LengthOneDimensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLengthOneDimension(this);
}

void MSqlParser::LengthOneDimensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLengthOneDimension(this);
}


antlrcpp::Any MSqlParser::LengthOneDimensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLengthOneDimension(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::LengthOneDimensionContext* MSqlParser::lengthOneDimension() {
  LengthOneDimensionContext *_localctx = _tracker.createInstance<LengthOneDimensionContext>(_ctx, getState());
  enterRule(_localctx, 12, MSqlParser::RuleLengthOneDimension);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(MSqlParser::LR_BRACKET);
    setState(202);
    decimalLiteral();
    setState(203);
    match(MSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthTwoOptionalDimensionContext ------------------------------------------------------------------

MSqlParser::LengthTwoOptionalDimensionContext::LengthTwoOptionalDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::LengthTwoOptionalDimensionContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

std::vector<MSqlParser::DecimalLiteralContext *> MSqlParser::LengthTwoOptionalDimensionContext::decimalLiteral() {
  return getRuleContexts<MSqlParser::DecimalLiteralContext>();
}

MSqlParser::DecimalLiteralContext* MSqlParser::LengthTwoOptionalDimensionContext::decimalLiteral(size_t i) {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(i);
}

tree::TerminalNode* MSqlParser::LengthTwoOptionalDimensionContext::COMMA() {
  return getToken(MSqlParser::COMMA, 0);
}

tree::TerminalNode* MSqlParser::LengthTwoOptionalDimensionContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}


size_t MSqlParser::LengthTwoOptionalDimensionContext::getRuleIndex() const {
  return MSqlParser::RuleLengthTwoOptionalDimension;
}

void MSqlParser::LengthTwoOptionalDimensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLengthTwoOptionalDimension(this);
}

void MSqlParser::LengthTwoOptionalDimensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLengthTwoOptionalDimension(this);
}


antlrcpp::Any MSqlParser::LengthTwoOptionalDimensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLengthTwoOptionalDimension(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::LengthTwoOptionalDimensionContext* MSqlParser::lengthTwoOptionalDimension() {
  LengthTwoOptionalDimensionContext *_localctx = _tracker.createInstance<LengthTwoOptionalDimensionContext>(_ctx, getState());
  enterRule(_localctx, 14, MSqlParser::RuleLengthTwoOptionalDimension);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(MSqlParser::LR_BRACKET);
    setState(206);
    decimalLiteral();
    setState(207);
    match(MSqlParser::COMMA);
    setState(208);
    decimalLiteral();
    setState(209);
    match(MSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnConstraintContext ------------------------------------------------------------------

MSqlParser::ColumnConstraintContext::ColumnConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::ColumnConstraintContext::getRuleIndex() const {
  return MSqlParser::RuleColumnConstraint;
}

void MSqlParser::ColumnConstraintContext::copyFrom(ColumnConstraintContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimaryKeyColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::PrimaryKeyColumnConstraintContext::KEY() {
  return getToken(MSqlParser::KEY, 0);
}

tree::TerminalNode* MSqlParser::PrimaryKeyColumnConstraintContext::PRIMARY() {
  return getToken(MSqlParser::PRIMARY, 0);
}

MSqlParser::PrimaryKeyColumnConstraintContext::PrimaryKeyColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void MSqlParser::PrimaryKeyColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryKeyColumnConstraint(this);
}
void MSqlParser::PrimaryKeyColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryKeyColumnConstraint(this);
}

antlrcpp::Any MSqlParser::PrimaryKeyColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryKeyColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CheckColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::CheckColumnConstraintContext::CHECK() {
  return getToken(MSqlParser::CHECK, 0);
}

tree::TerminalNode* MSqlParser::CheckColumnConstraintContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::ExpressionContext* MSqlParser::CheckColumnConstraintContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* MSqlParser::CheckColumnConstraintContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::CheckColumnConstraintContext::CONSTRAINT() {
  return getToken(MSqlParser::CONSTRAINT, 0);
}

MSqlParser::UidContext* MSqlParser::CheckColumnConstraintContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

MSqlParser::CheckColumnConstraintContext::CheckColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void MSqlParser::CheckColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckColumnConstraint(this);
}
void MSqlParser::CheckColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckColumnConstraint(this);
}

antlrcpp::Any MSqlParser::CheckColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitCheckColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniqueKeyColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::UniqueKeyColumnConstraintContext::UNIQUE() {
  return getToken(MSqlParser::UNIQUE, 0);
}

tree::TerminalNode* MSqlParser::UniqueKeyColumnConstraintContext::KEY() {
  return getToken(MSqlParser::KEY, 0);
}

MSqlParser::UniqueKeyColumnConstraintContext::UniqueKeyColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void MSqlParser::UniqueKeyColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUniqueKeyColumnConstraint(this);
}
void MSqlParser::UniqueKeyColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUniqueKeyColumnConstraint(this);
}

antlrcpp::Any MSqlParser::UniqueKeyColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitUniqueKeyColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullColumnConstraintContext ------------------------------------------------------------------

MSqlParser::NullNotnullContext* MSqlParser::NullColumnConstraintContext::nullNotnull() {
  return getRuleContext<MSqlParser::NullNotnullContext>(0);
}

MSqlParser::NullColumnConstraintContext::NullColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void MSqlParser::NullColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullColumnConstraint(this);
}
void MSqlParser::NullColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullColumnConstraint(this);
}

antlrcpp::Any MSqlParser::NullColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitNullColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefaultColumnConstraintContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::DefaultColumnConstraintContext::DEFAULT() {
  return getToken(MSqlParser::DEFAULT, 0);
}

MSqlParser::DefaultValueContext* MSqlParser::DefaultColumnConstraintContext::defaultValue() {
  return getRuleContext<MSqlParser::DefaultValueContext>(0);
}

MSqlParser::DefaultColumnConstraintContext::DefaultColumnConstraintContext(ColumnConstraintContext *ctx) { copyFrom(ctx); }

void MSqlParser::DefaultColumnConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultColumnConstraint(this);
}
void MSqlParser::DefaultColumnConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultColumnConstraint(this);
}

antlrcpp::Any MSqlParser::DefaultColumnConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDefaultColumnConstraint(this);
  else
    return visitor->visitChildren(this);
}
MSqlParser::ColumnConstraintContext* MSqlParser::columnConstraint() {
  ColumnConstraintContext *_localctx = _tracker.createInstance<ColumnConstraintContext>(_ctx, getState());
  enterRule(_localctx, 16, MSqlParser::RuleColumnConstraint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::NOT:
      case MSqlParser::NULL_LITERAL:
      case MSqlParser::NULL_SPEC_LITERAL: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<MSqlParser::NullColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(211);
        nullNotnull();
        break;
      }

      case MSqlParser::DEFAULT: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<MSqlParser::DefaultColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(MSqlParser::DEFAULT);
        setState(213);
        defaultValue();
        break;
      }

      case MSqlParser::PRIMARY:
      case MSqlParser::KEY: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<MSqlParser::PrimaryKeyColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(215);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::PRIMARY) {
          setState(214);
          match(MSqlParser::PRIMARY);
        }
        setState(217);
        match(MSqlParser::KEY);
        break;
      }

      case MSqlParser::UNIQUE: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<MSqlParser::UniqueKeyColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(218);
        match(MSqlParser::UNIQUE);
        setState(220);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          setState(219);
          match(MSqlParser::KEY);
          break;
        }

        default:
          break;
        }
        break;
      }

      case MSqlParser::CONSTRAINT:
      case MSqlParser::CHECK: {
        _localctx = dynamic_cast<ColumnConstraintContext *>(_tracker.createInstance<MSqlParser::CheckColumnConstraintContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(226);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::CONSTRAINT) {
          setState(222);
          match(MSqlParser::CONSTRAINT);
          setState(224);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::ID) {
            setState(223);
            dynamic_cast<CheckColumnConstraintContext *>(_localctx)->name = uid();
          }
        }
        setState(228);
        match(MSqlParser::CHECK);
        setState(229);
        match(MSqlParser::LR_BRACKET);
        setState(230);
        expression(0);
        setState(231);
        match(MSqlParser::RR_BRACKET);
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

//----------------- TableConstraintContext ------------------------------------------------------------------

MSqlParser::TableConstraintContext::TableConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::TableConstraintContext::PRIMARY() {
  return getToken(MSqlParser::PRIMARY, 0);
}

tree::TerminalNode* MSqlParser::TableConstraintContext::KEY() {
  return getToken(MSqlParser::KEY, 0);
}

tree::TerminalNode* MSqlParser::TableConstraintContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

std::vector<MSqlParser::UidContext *> MSqlParser::TableConstraintContext::uid() {
  return getRuleContexts<MSqlParser::UidContext>();
}

MSqlParser::UidContext* MSqlParser::TableConstraintContext::uid(size_t i) {
  return getRuleContext<MSqlParser::UidContext>(i);
}

tree::TerminalNode* MSqlParser::TableConstraintContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::TableConstraintContext::CONSTRAINT() {
  return getToken(MSqlParser::CONSTRAINT, 0);
}

tree::TerminalNode* MSqlParser::TableConstraintContext::UNIQUE() {
  return getToken(MSqlParser::UNIQUE, 0);
}

tree::TerminalNode* MSqlParser::TableConstraintContext::CHECK() {
  return getToken(MSqlParser::CHECK, 0);
}

MSqlParser::ExpressionContext* MSqlParser::TableConstraintContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}


size_t MSqlParser::TableConstraintContext::getRuleIndex() const {
  return MSqlParser::RuleTableConstraint;
}

void MSqlParser::TableConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableConstraint(this);
}

void MSqlParser::TableConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableConstraint(this);
}


antlrcpp::Any MSqlParser::TableConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitTableConstraint(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::TableConstraintContext* MSqlParser::tableConstraint() {
  TableConstraintContext *_localctx = _tracker.createInstance<TableConstraintContext>(_ctx, getState());
  enterRule(_localctx, 18, MSqlParser::RuleTableConstraint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(239);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::CONSTRAINT) {
        setState(235);
        match(MSqlParser::CONSTRAINT);
        setState(237);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::ID) {
          setState(236);
          dynamic_cast<TableConstraintContext *>(_localctx)->name = uid();
        }
      }
      setState(241);
      match(MSqlParser::PRIMARY);
      setState(242);
      match(MSqlParser::KEY);
      setState(243);
      match(MSqlParser::LR_BRACKET);
      setState(244);
      uid();
      setState(245);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(251);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::CONSTRAINT) {
        setState(247);
        match(MSqlParser::CONSTRAINT);
        setState(249);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::ID) {
          setState(248);
          dynamic_cast<TableConstraintContext *>(_localctx)->name = uid();
        }
      }
      setState(253);
      match(MSqlParser::UNIQUE);
      setState(254);
      match(MSqlParser::KEY);
      setState(255);
      match(MSqlParser::LR_BRACKET);
      setState(256);
      uid();
      setState(257);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::CONSTRAINT) {
        setState(259);
        match(MSqlParser::CONSTRAINT);
        setState(261);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::ID) {
          setState(260);
          dynamic_cast<TableConstraintContext *>(_localctx)->name = uid();
        }
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(269);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::CONSTRAINT) {
        setState(265);
        match(MSqlParser::CONSTRAINT);
        setState(267);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::ID) {
          setState(266);
          dynamic_cast<TableConstraintContext *>(_localctx)->name = uid();
        }
      }
      setState(271);
      match(MSqlParser::CHECK);
      setState(272);
      match(MSqlParser::LR_BRACKET);
      setState(273);
      expression(0);
      setState(274);
      match(MSqlParser::RR_BRACKET);
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

//----------------- DropTableContext ------------------------------------------------------------------

MSqlParser::DropTableContext::DropTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::DropTableContext::DROP() {
  return getToken(MSqlParser::DROP, 0);
}

tree::TerminalNode* MSqlParser::DropTableContext::TABLE() {
  return getToken(MSqlParser::TABLE, 0);
}

MSqlParser::TablesContext* MSqlParser::DropTableContext::tables() {
  return getRuleContext<MSqlParser::TablesContext>(0);
}

tree::TerminalNode* MSqlParser::DropTableContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}


size_t MSqlParser::DropTableContext::getRuleIndex() const {
  return MSqlParser::RuleDropTable;
}

void MSqlParser::DropTableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDropTable(this);
}

void MSqlParser::DropTableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDropTable(this);
}


antlrcpp::Any MSqlParser::DropTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDropTable(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DropTableContext* MSqlParser::dropTable() {
  DropTableContext *_localctx = _tracker.createInstance<DropTableContext>(_ctx, getState());
  enterRule(_localctx, 20, MSqlParser::RuleDropTable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(MSqlParser::DROP);
    setState(279);
    match(MSqlParser::TABLE);
    setState(280);
    tables();
    setState(281);
    match(MSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateIndexContext ------------------------------------------------------------------

MSqlParser::CreateIndexContext::CreateIndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::CreateIndexContext::CREATE() {
  return getToken(MSqlParser::CREATE, 0);
}

tree::TerminalNode* MSqlParser::CreateIndexContext::INDEX() {
  return getToken(MSqlParser::INDEX, 0);
}

MSqlParser::UidContext* MSqlParser::CreateIndexContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

tree::TerminalNode* MSqlParser::CreateIndexContext::ON() {
  return getToken(MSqlParser::ON, 0);
}

MSqlParser::TableNameContext* MSqlParser::CreateIndexContext::tableName() {
  return getRuleContext<MSqlParser::TableNameContext>(0);
}

MSqlParser::IndexColumnNamesContext* MSqlParser::CreateIndexContext::indexColumnNames() {
  return getRuleContext<MSqlParser::IndexColumnNamesContext>(0);
}

tree::TerminalNode* MSqlParser::CreateIndexContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}


size_t MSqlParser::CreateIndexContext::getRuleIndex() const {
  return MSqlParser::RuleCreateIndex;
}

void MSqlParser::CreateIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateIndex(this);
}

void MSqlParser::CreateIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateIndex(this);
}


antlrcpp::Any MSqlParser::CreateIndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitCreateIndex(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::CreateIndexContext* MSqlParser::createIndex() {
  CreateIndexContext *_localctx = _tracker.createInstance<CreateIndexContext>(_ctx, getState());
  enterRule(_localctx, 22, MSqlParser::RuleCreateIndex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(MSqlParser::CREATE);
    setState(284);
    match(MSqlParser::INDEX);
    setState(285);
    uid();
    setState(286);
    match(MSqlParser::ON);
    setState(287);
    tableName();
    setState(288);
    indexColumnNames();
    setState(289);
    match(MSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexColumnNamesContext ------------------------------------------------------------------

MSqlParser::IndexColumnNamesContext::IndexColumnNamesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::IndexColumnNamesContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

std::vector<MSqlParser::IndexColumnNameContext *> MSqlParser::IndexColumnNamesContext::indexColumnName() {
  return getRuleContexts<MSqlParser::IndexColumnNameContext>();
}

MSqlParser::IndexColumnNameContext* MSqlParser::IndexColumnNamesContext::indexColumnName(size_t i) {
  return getRuleContext<MSqlParser::IndexColumnNameContext>(i);
}

tree::TerminalNode* MSqlParser::IndexColumnNamesContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::IndexColumnNamesContext::COMMA() {
  return getToken(MSqlParser::COMMA, 0);
}


size_t MSqlParser::IndexColumnNamesContext::getRuleIndex() const {
  return MSqlParser::RuleIndexColumnNames;
}

void MSqlParser::IndexColumnNamesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexColumnNames(this);
}

void MSqlParser::IndexColumnNamesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexColumnNames(this);
}


antlrcpp::Any MSqlParser::IndexColumnNamesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitIndexColumnNames(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::IndexColumnNamesContext* MSqlParser::indexColumnNames() {
  IndexColumnNamesContext *_localctx = _tracker.createInstance<IndexColumnNamesContext>(_ctx, getState());
  enterRule(_localctx, 24, MSqlParser::RuleIndexColumnNames);
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
    setState(291);
    match(MSqlParser::LR_BRACKET);
    setState(292);
    indexColumnName();
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::COMMA) {
      setState(293);
      match(MSqlParser::COMMA);
      setState(294);
      indexColumnName();
    }
    setState(297);
    match(MSqlParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexColumnNameContext ------------------------------------------------------------------

MSqlParser::IndexColumnNameContext::IndexColumnNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::UidContext* MSqlParser::IndexColumnNameContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

tree::TerminalNode* MSqlParser::IndexColumnNameContext::STRING_LITERAL() {
  return getToken(MSqlParser::STRING_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::IndexColumnNameContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::DecimalLiteralContext* MSqlParser::IndexColumnNameContext::decimalLiteral() {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(0);
}

tree::TerminalNode* MSqlParser::IndexColumnNameContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::IndexColumnNameContext::ASC() {
  return getToken(MSqlParser::ASC, 0);
}

tree::TerminalNode* MSqlParser::IndexColumnNameContext::DESC() {
  return getToken(MSqlParser::DESC, 0);
}


size_t MSqlParser::IndexColumnNameContext::getRuleIndex() const {
  return MSqlParser::RuleIndexColumnName;
}

void MSqlParser::IndexColumnNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexColumnName(this);
}

void MSqlParser::IndexColumnNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexColumnName(this);
}


antlrcpp::Any MSqlParser::IndexColumnNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitIndexColumnName(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::IndexColumnNameContext* MSqlParser::indexColumnName() {
  IndexColumnNameContext *_localctx = _tracker.createInstance<IndexColumnNameContext>(_ctx, getState());
  enterRule(_localctx, 26, MSqlParser::RuleIndexColumnName);
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
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::ID: {
        setState(299);
        uid();
        break;
      }

      case MSqlParser::STRING_LITERAL: {
        setState(300);
        match(MSqlParser::STRING_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::LR_BRACKET) {
      setState(303);
      match(MSqlParser::LR_BRACKET);
      setState(304);
      decimalLiteral();
      setState(305);
      match(MSqlParser::RR_BRACKET);
    }
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::ASC

    || _la == MSqlParser::DESC) {
      setState(309);
      dynamic_cast<IndexColumnNameContext *>(_localctx)->sortType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MSqlParser::ASC

      || _la == MSqlParser::DESC)) {
        dynamic_cast<IndexColumnNameContext *>(_localctx)->sortType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- DropIndexContext ------------------------------------------------------------------

MSqlParser::DropIndexContext::DropIndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::DropIndexContext::DROP() {
  return getToken(MSqlParser::DROP, 0);
}

tree::TerminalNode* MSqlParser::DropIndexContext::INDEX() {
  return getToken(MSqlParser::INDEX, 0);
}

MSqlParser::UidContext* MSqlParser::DropIndexContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

tree::TerminalNode* MSqlParser::DropIndexContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}


size_t MSqlParser::DropIndexContext::getRuleIndex() const {
  return MSqlParser::RuleDropIndex;
}

void MSqlParser::DropIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDropIndex(this);
}

void MSqlParser::DropIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDropIndex(this);
}


antlrcpp::Any MSqlParser::DropIndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDropIndex(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DropIndexContext* MSqlParser::dropIndex() {
  DropIndexContext *_localctx = _tracker.createInstance<DropIndexContext>(_ctx, getState());
  enterRule(_localctx, 28, MSqlParser::RuleDropIndex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(MSqlParser::DROP);
    setState(313);
    match(MSqlParser::INDEX);
    setState(314);
    uid();
    setState(315);
    match(MSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectStatementContext ------------------------------------------------------------------

MSqlParser::SelectStatementContext::SelectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::SelectStatementContext::SELECT() {
  return getToken(MSqlParser::SELECT, 0);
}

MSqlParser::SelectElementsContext* MSqlParser::SelectStatementContext::selectElements() {
  return getRuleContext<MSqlParser::SelectElementsContext>(0);
}

tree::TerminalNode* MSqlParser::SelectStatementContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}

MSqlParser::FromClauseContext* MSqlParser::SelectStatementContext::fromClause() {
  return getRuleContext<MSqlParser::FromClauseContext>(0);
}

MSqlParser::GroupByClauseContext* MSqlParser::SelectStatementContext::groupByClause() {
  return getRuleContext<MSqlParser::GroupByClauseContext>(0);
}

MSqlParser::HavingClauseContext* MSqlParser::SelectStatementContext::havingClause() {
  return getRuleContext<MSqlParser::HavingClauseContext>(0);
}

MSqlParser::OrderByClauseContext* MSqlParser::SelectStatementContext::orderByClause() {
  return getRuleContext<MSqlParser::OrderByClauseContext>(0);
}

MSqlParser::LimitClauseContext* MSqlParser::SelectStatementContext::limitClause() {
  return getRuleContext<MSqlParser::LimitClauseContext>(0);
}


size_t MSqlParser::SelectStatementContext::getRuleIndex() const {
  return MSqlParser::RuleSelectStatement;
}

void MSqlParser::SelectStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectStatement(this);
}

void MSqlParser::SelectStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectStatement(this);
}


antlrcpp::Any MSqlParser::SelectStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectStatement(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::SelectStatementContext* MSqlParser::selectStatement() {
  SelectStatementContext *_localctx = _tracker.createInstance<SelectStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, MSqlParser::RuleSelectStatement);
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
    setState(317);
    match(MSqlParser::SELECT);
    setState(318);
    selectElements();
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::FROM) {
      setState(319);
      fromClause();
    }
    setState(323);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::GROUP) {
      setState(322);
      groupByClause();
    }
    setState(326);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::HAVING) {
      setState(325);
      havingClause();
    }
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::ORDER) {
      setState(328);
      orderByClause();
    }
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::LIMIT) {
      setState(331);
      limitClause();
    }
    setState(334);
    match(MSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectElementsContext ------------------------------------------------------------------

MSqlParser::SelectElementsContext::SelectElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::SelectElementContext *> MSqlParser::SelectElementsContext::selectElement() {
  return getRuleContexts<MSqlParser::SelectElementContext>();
}

MSqlParser::SelectElementContext* MSqlParser::SelectElementsContext::selectElement(size_t i) {
  return getRuleContext<MSqlParser::SelectElementContext>(i);
}

tree::TerminalNode* MSqlParser::SelectElementsContext::STAR() {
  return getToken(MSqlParser::STAR, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::SelectElementsContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::SelectElementsContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::SelectElementsContext::getRuleIndex() const {
  return MSqlParser::RuleSelectElements;
}

void MSqlParser::SelectElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectElements(this);
}

void MSqlParser::SelectElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectElements(this);
}


antlrcpp::Any MSqlParser::SelectElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectElements(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::SelectElementsContext* MSqlParser::selectElements() {
  SelectElementsContext *_localctx = _tracker.createInstance<SelectElementsContext>(_ctx, getState());
  enterRule(_localctx, 32, MSqlParser::RuleSelectElements);
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
    setState(338);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(336);
      dynamic_cast<SelectElementsContext *>(_localctx)->star = match(MSqlParser::STAR);
      break;
    }

    case 2: {
      setState(337);
      selectElement();
      break;
    }

    default:
      break;
    }
    setState(344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(340);
      match(MSqlParser::COMMA);
      setState(341);
      selectElement();
      setState(346);
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

//----------------- SelectElementContext ------------------------------------------------------------------

MSqlParser::SelectElementContext::SelectElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::SelectElementContext::getRuleIndex() const {
  return MSqlParser::RuleSelectElement;
}

void MSqlParser::SelectElementContext::copyFrom(SelectElementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SelectFunctionElementContext ------------------------------------------------------------------

MSqlParser::FunctionCallContext* MSqlParser::SelectFunctionElementContext::functionCall() {
  return getRuleContext<MSqlParser::FunctionCallContext>(0);
}

MSqlParser::UidContext* MSqlParser::SelectFunctionElementContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

tree::TerminalNode* MSqlParser::SelectFunctionElementContext::AS() {
  return getToken(MSqlParser::AS, 0);
}

MSqlParser::SelectFunctionElementContext::SelectFunctionElementContext(SelectElementContext *ctx) { copyFrom(ctx); }

void MSqlParser::SelectFunctionElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectFunctionElement(this);
}
void MSqlParser::SelectFunctionElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectFunctionElement(this);
}

antlrcpp::Any MSqlParser::SelectFunctionElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectFunctionElement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SelectColumnElementContext ------------------------------------------------------------------

MSqlParser::FullColumnNameContext* MSqlParser::SelectColumnElementContext::fullColumnName() {
  return getRuleContext<MSqlParser::FullColumnNameContext>(0);
}

MSqlParser::UidContext* MSqlParser::SelectColumnElementContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

tree::TerminalNode* MSqlParser::SelectColumnElementContext::AS() {
  return getToken(MSqlParser::AS, 0);
}

MSqlParser::SelectColumnElementContext::SelectColumnElementContext(SelectElementContext *ctx) { copyFrom(ctx); }

void MSqlParser::SelectColumnElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectColumnElement(this);
}
void MSqlParser::SelectColumnElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectColumnElement(this);
}

antlrcpp::Any MSqlParser::SelectColumnElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSelectColumnElement(this);
  else
    return visitor->visitChildren(this);
}
MSqlParser::SelectElementContext* MSqlParser::selectElement() {
  SelectElementContext *_localctx = _tracker.createInstance<SelectElementContext>(_ctx, getState());
  enterRule(_localctx, 34, MSqlParser::RuleSelectElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(361);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<SelectElementContext *>(_tracker.createInstance<MSqlParser::SelectColumnElementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(347);
      fullColumnName();
      setState(352);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::AS || _la == MSqlParser::ID) {
        setState(349);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::AS) {
          setState(348);
          match(MSqlParser::AS);
        }
        setState(351);
        uid();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<SelectElementContext *>(_tracker.createInstance<MSqlParser::SelectFunctionElementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(354);
      functionCall();
      setState(359);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::AS || _la == MSqlParser::ID) {
        setState(356);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::AS) {
          setState(355);
          match(MSqlParser::AS);
        }
        setState(358);
        uid();
      }
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

//----------------- TableSourcesContext ------------------------------------------------------------------

MSqlParser::TableSourcesContext::TableSourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::TableNameContext *> MSqlParser::TableSourcesContext::tableName() {
  return getRuleContexts<MSqlParser::TableNameContext>();
}

MSqlParser::TableNameContext* MSqlParser::TableSourcesContext::tableName(size_t i) {
  return getRuleContext<MSqlParser::TableNameContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::TableSourcesContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::TableSourcesContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::TableSourcesContext::getRuleIndex() const {
  return MSqlParser::RuleTableSources;
}

void MSqlParser::TableSourcesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableSources(this);
}

void MSqlParser::TableSourcesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableSources(this);
}


antlrcpp::Any MSqlParser::TableSourcesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitTableSources(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::TableSourcesContext* MSqlParser::tableSources() {
  TableSourcesContext *_localctx = _tracker.createInstance<TableSourcesContext>(_ctx, getState());
  enterRule(_localctx, 36, MSqlParser::RuleTableSources);
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
    setState(363);
    tableName();
    setState(368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(364);
      match(MSqlParser::COMMA);
      setState(365);
      tableName();
      setState(370);
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

//----------------- WhereClauseContext ------------------------------------------------------------------

MSqlParser::WhereClauseContext::WhereClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::WhereClauseContext::WHERE() {
  return getToken(MSqlParser::WHERE, 0);
}

MSqlParser::ExpressionContext* MSqlParser::WhereClauseContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}


size_t MSqlParser::WhereClauseContext::getRuleIndex() const {
  return MSqlParser::RuleWhereClause;
}

void MSqlParser::WhereClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereClause(this);
}

void MSqlParser::WhereClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereClause(this);
}


antlrcpp::Any MSqlParser::WhereClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitWhereClause(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::WhereClauseContext* MSqlParser::whereClause() {
  WhereClauseContext *_localctx = _tracker.createInstance<WhereClauseContext>(_ctx, getState());
  enterRule(_localctx, 38, MSqlParser::RuleWhereClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(MSqlParser::WHERE);
    setState(372);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromClauseContext ------------------------------------------------------------------

MSqlParser::FromClauseContext::FromClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::FromClauseContext::FROM() {
  return getToken(MSqlParser::FROM, 0);
}

MSqlParser::TableSourcesContext* MSqlParser::FromClauseContext::tableSources() {
  return getRuleContext<MSqlParser::TableSourcesContext>(0);
}

tree::TerminalNode* MSqlParser::FromClauseContext::WHERE() {
  return getToken(MSqlParser::WHERE, 0);
}

MSqlParser::ExpressionContext* MSqlParser::FromClauseContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}


size_t MSqlParser::FromClauseContext::getRuleIndex() const {
  return MSqlParser::RuleFromClause;
}

void MSqlParser::FromClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFromClause(this);
}

void MSqlParser::FromClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFromClause(this);
}


antlrcpp::Any MSqlParser::FromClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFromClause(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::FromClauseContext* MSqlParser::fromClause() {
  FromClauseContext *_localctx = _tracker.createInstance<FromClauseContext>(_ctx, getState());
  enterRule(_localctx, 40, MSqlParser::RuleFromClause);
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
    setState(374);
    match(MSqlParser::FROM);
    setState(375);
    tableSources();
    setState(378);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::WHERE) {
      setState(376);
      match(MSqlParser::WHERE);
      setState(377);
      dynamic_cast<FromClauseContext *>(_localctx)->whereExpr = expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupByClauseContext ------------------------------------------------------------------

MSqlParser::GroupByClauseContext::GroupByClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::GroupByClauseContext::GROUP() {
  return getToken(MSqlParser::GROUP, 0);
}

tree::TerminalNode* MSqlParser::GroupByClauseContext::BY() {
  return getToken(MSqlParser::BY, 0);
}

std::vector<MSqlParser::GroupByItemContext *> MSqlParser::GroupByClauseContext::groupByItem() {
  return getRuleContexts<MSqlParser::GroupByItemContext>();
}

MSqlParser::GroupByItemContext* MSqlParser::GroupByClauseContext::groupByItem(size_t i) {
  return getRuleContext<MSqlParser::GroupByItemContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::GroupByClauseContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::GroupByClauseContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::GroupByClauseContext::getRuleIndex() const {
  return MSqlParser::RuleGroupByClause;
}

void MSqlParser::GroupByClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupByClause(this);
}

void MSqlParser::GroupByClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupByClause(this);
}


antlrcpp::Any MSqlParser::GroupByClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitGroupByClause(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::GroupByClauseContext* MSqlParser::groupByClause() {
  GroupByClauseContext *_localctx = _tracker.createInstance<GroupByClauseContext>(_ctx, getState());
  enterRule(_localctx, 42, MSqlParser::RuleGroupByClause);
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
    setState(380);
    match(MSqlParser::GROUP);
    setState(381);
    match(MSqlParser::BY);
    setState(382);
    groupByItem();
    setState(387);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(383);
      match(MSqlParser::COMMA);
      setState(384);
      groupByItem();
      setState(389);
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

//----------------- GroupByItemContext ------------------------------------------------------------------

MSqlParser::GroupByItemContext::GroupByItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::FullColumnNameContext* MSqlParser::GroupByItemContext::fullColumnName() {
  return getRuleContext<MSqlParser::FullColumnNameContext>(0);
}

tree::TerminalNode* MSqlParser::GroupByItemContext::ASC() {
  return getToken(MSqlParser::ASC, 0);
}

tree::TerminalNode* MSqlParser::GroupByItemContext::DESC() {
  return getToken(MSqlParser::DESC, 0);
}


size_t MSqlParser::GroupByItemContext::getRuleIndex() const {
  return MSqlParser::RuleGroupByItem;
}

void MSqlParser::GroupByItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupByItem(this);
}

void MSqlParser::GroupByItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupByItem(this);
}


antlrcpp::Any MSqlParser::GroupByItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitGroupByItem(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::GroupByItemContext* MSqlParser::groupByItem() {
  GroupByItemContext *_localctx = _tracker.createInstance<GroupByItemContext>(_ctx, getState());
  enterRule(_localctx, 44, MSqlParser::RuleGroupByItem);
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
    setState(390);
    fullColumnName();
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::ASC

    || _la == MSqlParser::DESC) {
      setState(391);
      dynamic_cast<GroupByItemContext *>(_localctx)->order = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MSqlParser::ASC

      || _la == MSqlParser::DESC)) {
        dynamic_cast<GroupByItemContext *>(_localctx)->order = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- HavingClauseContext ------------------------------------------------------------------

MSqlParser::HavingClauseContext::HavingClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::HavingClauseContext::HAVING() {
  return getToken(MSqlParser::HAVING, 0);
}

MSqlParser::ExpressionContext* MSqlParser::HavingClauseContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}


size_t MSqlParser::HavingClauseContext::getRuleIndex() const {
  return MSqlParser::RuleHavingClause;
}

void MSqlParser::HavingClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHavingClause(this);
}

void MSqlParser::HavingClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHavingClause(this);
}


antlrcpp::Any MSqlParser::HavingClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitHavingClause(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::HavingClauseContext* MSqlParser::havingClause() {
  HavingClauseContext *_localctx = _tracker.createInstance<HavingClauseContext>(_ctx, getState());
  enterRule(_localctx, 46, MSqlParser::RuleHavingClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(MSqlParser::HAVING);
    setState(395);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderByClauseContext ------------------------------------------------------------------

MSqlParser::OrderByClauseContext::OrderByClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::OrderByClauseContext::ORDER() {
  return getToken(MSqlParser::ORDER, 0);
}

tree::TerminalNode* MSqlParser::OrderByClauseContext::BY() {
  return getToken(MSqlParser::BY, 0);
}

std::vector<MSqlParser::OrderByExpressionContext *> MSqlParser::OrderByClauseContext::orderByExpression() {
  return getRuleContexts<MSqlParser::OrderByExpressionContext>();
}

MSqlParser::OrderByExpressionContext* MSqlParser::OrderByClauseContext::orderByExpression(size_t i) {
  return getRuleContext<MSqlParser::OrderByExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::OrderByClauseContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::OrderByClauseContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::OrderByClauseContext::getRuleIndex() const {
  return MSqlParser::RuleOrderByClause;
}

void MSqlParser::OrderByClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderByClause(this);
}

void MSqlParser::OrderByClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderByClause(this);
}


antlrcpp::Any MSqlParser::OrderByClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitOrderByClause(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::OrderByClauseContext* MSqlParser::orderByClause() {
  OrderByClauseContext *_localctx = _tracker.createInstance<OrderByClauseContext>(_ctx, getState());
  enterRule(_localctx, 48, MSqlParser::RuleOrderByClause);
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
    setState(397);
    match(MSqlParser::ORDER);
    setState(398);
    match(MSqlParser::BY);
    setState(399);
    orderByExpression();
    setState(404);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(400);
      match(MSqlParser::COMMA);
      setState(401);
      orderByExpression();
      setState(406);
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

//----------------- OrderByExpressionContext ------------------------------------------------------------------

MSqlParser::OrderByExpressionContext::OrderByExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::FullColumnNameContext* MSqlParser::OrderByExpressionContext::fullColumnName() {
  return getRuleContext<MSqlParser::FullColumnNameContext>(0);
}

tree::TerminalNode* MSqlParser::OrderByExpressionContext::ASC() {
  return getToken(MSqlParser::ASC, 0);
}

tree::TerminalNode* MSqlParser::OrderByExpressionContext::DESC() {
  return getToken(MSqlParser::DESC, 0);
}


size_t MSqlParser::OrderByExpressionContext::getRuleIndex() const {
  return MSqlParser::RuleOrderByExpression;
}

void MSqlParser::OrderByExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderByExpression(this);
}

void MSqlParser::OrderByExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderByExpression(this);
}


antlrcpp::Any MSqlParser::OrderByExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitOrderByExpression(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::OrderByExpressionContext* MSqlParser::orderByExpression() {
  OrderByExpressionContext *_localctx = _tracker.createInstance<OrderByExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, MSqlParser::RuleOrderByExpression);
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
    setState(407);
    fullColumnName();
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::ASC

    || _la == MSqlParser::DESC) {
      setState(408);
      dynamic_cast<OrderByExpressionContext *>(_localctx)->order = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MSqlParser::ASC

      || _la == MSqlParser::DESC)) {
        dynamic_cast<OrderByExpressionContext *>(_localctx)->order = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- LimitClauseContext ------------------------------------------------------------------

MSqlParser::LimitClauseContext::LimitClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::LimitClauseContext::LIMIT() {
  return getToken(MSqlParser::LIMIT, 0);
}

tree::TerminalNode* MSqlParser::LimitClauseContext::OFFSET() {
  return getToken(MSqlParser::OFFSET, 0);
}

std::vector<MSqlParser::DecimalLiteralContext *> MSqlParser::LimitClauseContext::decimalLiteral() {
  return getRuleContexts<MSqlParser::DecimalLiteralContext>();
}

MSqlParser::DecimalLiteralContext* MSqlParser::LimitClauseContext::decimalLiteral(size_t i) {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(i);
}

tree::TerminalNode* MSqlParser::LimitClauseContext::COMMA() {
  return getToken(MSqlParser::COMMA, 0);
}


size_t MSqlParser::LimitClauseContext::getRuleIndex() const {
  return MSqlParser::RuleLimitClause;
}

void MSqlParser::LimitClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimitClause(this);
}

void MSqlParser::LimitClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimitClause(this);
}


antlrcpp::Any MSqlParser::LimitClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLimitClause(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::LimitClauseContext* MSqlParser::limitClause() {
  LimitClauseContext *_localctx = _tracker.createInstance<LimitClauseContext>(_ctx, getState());
  enterRule(_localctx, 52, MSqlParser::RuleLimitClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(MSqlParser::LIMIT);
    setState(422);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(415);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
      case 1: {
        setState(412);
        dynamic_cast<LimitClauseContext *>(_localctx)->offset = decimalLiteral();
        setState(413);
        match(MSqlParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(417);
      dynamic_cast<LimitClauseContext *>(_localctx)->limit = decimalLiteral();
      break;
    }

    case 2: {
      setState(418);
      dynamic_cast<LimitClauseContext *>(_localctx)->limit = decimalLiteral();
      setState(419);
      match(MSqlParser::OFFSET);
      setState(420);
      dynamic_cast<LimitClauseContext *>(_localctx)->offset = decimalLiteral();
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

//----------------- LogicalOperatorContext ------------------------------------------------------------------

MSqlParser::LogicalOperatorContext::LogicalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::LogicalOperatorContext::AND() {
  return getToken(MSqlParser::AND, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::LogicalOperatorContext::BIT_AND_OP() {
  return getTokens(MSqlParser::BIT_AND_OP);
}

tree::TerminalNode* MSqlParser::LogicalOperatorContext::BIT_AND_OP(size_t i) {
  return getToken(MSqlParser::BIT_AND_OP, i);
}

tree::TerminalNode* MSqlParser::LogicalOperatorContext::OR() {
  return getToken(MSqlParser::OR, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::LogicalOperatorContext::BIT_OR_OP() {
  return getTokens(MSqlParser::BIT_OR_OP);
}

tree::TerminalNode* MSqlParser::LogicalOperatorContext::BIT_OR_OP(size_t i) {
  return getToken(MSqlParser::BIT_OR_OP, i);
}


size_t MSqlParser::LogicalOperatorContext::getRuleIndex() const {
  return MSqlParser::RuleLogicalOperator;
}

void MSqlParser::LogicalOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOperator(this);
}

void MSqlParser::LogicalOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOperator(this);
}


antlrcpp::Any MSqlParser::LogicalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOperator(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::LogicalOperatorContext* MSqlParser::logicalOperator() {
  LogicalOperatorContext *_localctx = _tracker.createInstance<LogicalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 54, MSqlParser::RuleLogicalOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(430);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::AND: {
        enterOuterAlt(_localctx, 1);
        setState(424);
        match(MSqlParser::AND);
        break;
      }

      case MSqlParser::BIT_AND_OP: {
        enterOuterAlt(_localctx, 2);
        setState(425);
        match(MSqlParser::BIT_AND_OP);
        setState(426);
        match(MSqlParser::BIT_AND_OP);
        break;
      }

      case MSqlParser::OR: {
        enterOuterAlt(_localctx, 3);
        setState(427);
        match(MSqlParser::OR);
        break;
      }

      case MSqlParser::BIT_OR_OP: {
        enterOuterAlt(_localctx, 4);
        setState(428);
        match(MSqlParser::BIT_OR_OP);
        setState(429);
        match(MSqlParser::BIT_OR_OP);
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

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

MSqlParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::ComparisonOperatorContext::EQUAL_SYMBOL() {
  return getToken(MSqlParser::EQUAL_SYMBOL, 0);
}

tree::TerminalNode* MSqlParser::ComparisonOperatorContext::GREATER_SYMBOL() {
  return getToken(MSqlParser::GREATER_SYMBOL, 0);
}

tree::TerminalNode* MSqlParser::ComparisonOperatorContext::LESS_SYMBOL() {
  return getToken(MSqlParser::LESS_SYMBOL, 0);
}

tree::TerminalNode* MSqlParser::ComparisonOperatorContext::EXCLAMATION_SYMBOL() {
  return getToken(MSqlParser::EXCLAMATION_SYMBOL, 0);
}


size_t MSqlParser::ComparisonOperatorContext::getRuleIndex() const {
  return MSqlParser::RuleComparisonOperator;
}

void MSqlParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void MSqlParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}


antlrcpp::Any MSqlParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ComparisonOperatorContext* MSqlParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 56, MSqlParser::RuleComparisonOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(446);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(432);
      match(MSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(433);
      match(MSqlParser::GREATER_SYMBOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(434);
      match(MSqlParser::LESS_SYMBOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(435);
      match(MSqlParser::LESS_SYMBOL);
      setState(436);
      match(MSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(437);
      match(MSqlParser::GREATER_SYMBOL);
      setState(438);
      match(MSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(439);
      match(MSqlParser::LESS_SYMBOL);
      setState(440);
      match(MSqlParser::GREATER_SYMBOL);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(441);
      match(MSqlParser::EXCLAMATION_SYMBOL);
      setState(442);
      match(MSqlParser::EQUAL_SYMBOL);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(443);
      match(MSqlParser::LESS_SYMBOL);
      setState(444);
      match(MSqlParser::EQUAL_SYMBOL);
      setState(445);
      match(MSqlParser::GREATER_SYMBOL);
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

//----------------- BitOperatorContext ------------------------------------------------------------------

MSqlParser::BitOperatorContext::BitOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MSqlParser::BitOperatorContext::LESS_SYMBOL() {
  return getTokens(MSqlParser::LESS_SYMBOL);
}

tree::TerminalNode* MSqlParser::BitOperatorContext::LESS_SYMBOL(size_t i) {
  return getToken(MSqlParser::LESS_SYMBOL, i);
}

std::vector<tree::TerminalNode *> MSqlParser::BitOperatorContext::GREATER_SYMBOL() {
  return getTokens(MSqlParser::GREATER_SYMBOL);
}

tree::TerminalNode* MSqlParser::BitOperatorContext::GREATER_SYMBOL(size_t i) {
  return getToken(MSqlParser::GREATER_SYMBOL, i);
}

tree::TerminalNode* MSqlParser::BitOperatorContext::BIT_AND_OP() {
  return getToken(MSqlParser::BIT_AND_OP, 0);
}

tree::TerminalNode* MSqlParser::BitOperatorContext::BIT_XOR_OP() {
  return getToken(MSqlParser::BIT_XOR_OP, 0);
}

tree::TerminalNode* MSqlParser::BitOperatorContext::BIT_OR_OP() {
  return getToken(MSqlParser::BIT_OR_OP, 0);
}


size_t MSqlParser::BitOperatorContext::getRuleIndex() const {
  return MSqlParser::RuleBitOperator;
}

void MSqlParser::BitOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOperator(this);
}

void MSqlParser::BitOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOperator(this);
}


antlrcpp::Any MSqlParser::BitOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitBitOperator(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::BitOperatorContext* MSqlParser::bitOperator() {
  BitOperatorContext *_localctx = _tracker.createInstance<BitOperatorContext>(_ctx, getState());
  enterRule(_localctx, 58, MSqlParser::RuleBitOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(455);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::LESS_SYMBOL: {
        enterOuterAlt(_localctx, 1);
        setState(448);
        match(MSqlParser::LESS_SYMBOL);
        setState(449);
        match(MSqlParser::LESS_SYMBOL);
        break;
      }

      case MSqlParser::GREATER_SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(450);
        match(MSqlParser::GREATER_SYMBOL);
        setState(451);
        match(MSqlParser::GREATER_SYMBOL);
        break;
      }

      case MSqlParser::BIT_AND_OP: {
        enterOuterAlt(_localctx, 3);
        setState(452);
        match(MSqlParser::BIT_AND_OP);
        break;
      }

      case MSqlParser::BIT_XOR_OP: {
        enterOuterAlt(_localctx, 4);
        setState(453);
        match(MSqlParser::BIT_XOR_OP);
        break;
      }

      case MSqlParser::BIT_OR_OP: {
        enterOuterAlt(_localctx, 5);
        setState(454);
        match(MSqlParser::BIT_OR_OP);
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

//----------------- MathOperatorContext ------------------------------------------------------------------

MSqlParser::MathOperatorContext::MathOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::MathOperatorContext::STAR() {
  return getToken(MSqlParser::STAR, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::DIVIDE() {
  return getToken(MSqlParser::DIVIDE, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::MODULE() {
  return getToken(MSqlParser::MODULE, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::DIV() {
  return getToken(MSqlParser::DIV, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::MOD() {
  return getToken(MSqlParser::MOD, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::PLUS() {
  return getToken(MSqlParser::PLUS, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::MINUS() {
  return getToken(MSqlParser::MINUS, 0);
}

tree::TerminalNode* MSqlParser::MathOperatorContext::MINUSMINUS() {
  return getToken(MSqlParser::MINUSMINUS, 0);
}


size_t MSqlParser::MathOperatorContext::getRuleIndex() const {
  return MSqlParser::RuleMathOperator;
}

void MSqlParser::MathOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathOperator(this);
}

void MSqlParser::MathOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathOperator(this);
}


antlrcpp::Any MSqlParser::MathOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitMathOperator(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::MathOperatorContext* MSqlParser::mathOperator() {
  MathOperatorContext *_localctx = _tracker.createInstance<MathOperatorContext>(_ctx, getState());
  enterRule(_localctx, 60, MSqlParser::RuleMathOperator);
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
    setState(457);
    _la = _input->LA(1);
    if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (MSqlParser::DIV - 61))
      | (1ULL << (MSqlParser::MOD - 61))
      | (1ULL << (MSqlParser::STAR - 61))
      | (1ULL << (MSqlParser::DIVIDE - 61))
      | (1ULL << (MSqlParser::MODULE - 61))
      | (1ULL << (MSqlParser::PLUS - 61))
      | (1ULL << (MSqlParser::MINUSMINUS - 61))
      | (1ULL << (MSqlParser::MINUS - 61)))) != 0))) {
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

//----------------- JsonOperatorContext ------------------------------------------------------------------

MSqlParser::JsonOperatorContext::JsonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::JsonOperatorContext::MINUS() {
  return getToken(MSqlParser::MINUS, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::JsonOperatorContext::GREATER_SYMBOL() {
  return getTokens(MSqlParser::GREATER_SYMBOL);
}

tree::TerminalNode* MSqlParser::JsonOperatorContext::GREATER_SYMBOL(size_t i) {
  return getToken(MSqlParser::GREATER_SYMBOL, i);
}


size_t MSqlParser::JsonOperatorContext::getRuleIndex() const {
  return MSqlParser::RuleJsonOperator;
}

void MSqlParser::JsonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJsonOperator(this);
}

void MSqlParser::JsonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJsonOperator(this);
}


antlrcpp::Any MSqlParser::JsonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitJsonOperator(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::JsonOperatorContext* MSqlParser::jsonOperator() {
  JsonOperatorContext *_localctx = _tracker.createInstance<JsonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 62, MSqlParser::RuleJsonOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(464);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(459);
      match(MSqlParser::MINUS);
      setState(460);
      match(MSqlParser::GREATER_SYMBOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(461);
      match(MSqlParser::MINUS);
      setState(462);
      match(MSqlParser::GREATER_SYMBOL);
      setState(463);
      match(MSqlParser::GREATER_SYMBOL);
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

//----------------- ValueContext ------------------------------------------------------------------

MSqlParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::UidContext* MSqlParser::ValueContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

MSqlParser::TextLiteralContext* MSqlParser::ValueContext::textLiteral() {
  return getRuleContext<MSqlParser::TextLiteralContext>(0);
}

MSqlParser::DecimalLiteralContext* MSqlParser::ValueContext::decimalLiteral() {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(0);
}


size_t MSqlParser::ValueContext::getRuleIndex() const {
  return MSqlParser::RuleValue;
}

void MSqlParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void MSqlParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any MSqlParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ValueContext* MSqlParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 64, MSqlParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(469);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(466);
        uid();
        break;
      }

      case MSqlParser::TEXT_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(467);
        textLiteral();
        break;
      }

      case MSqlParser::DECIMAL_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(468);
        decimalLiteral();
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

//----------------- DecimalLiteralContext ------------------------------------------------------------------

MSqlParser::DecimalLiteralContext::DecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::DecimalLiteralContext::DECIMAL_LITERAL() {
  return getToken(MSqlParser::DECIMAL_LITERAL, 0);
}


size_t MSqlParser::DecimalLiteralContext::getRuleIndex() const {
  return MSqlParser::RuleDecimalLiteral;
}

void MSqlParser::DecimalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalLiteral(this);
}

void MSqlParser::DecimalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalLiteral(this);
}


antlrcpp::Any MSqlParser::DecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DecimalLiteralContext* MSqlParser::decimalLiteral() {
  DecimalLiteralContext *_localctx = _tracker.createInstance<DecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 66, MSqlParser::RuleDecimalLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(MSqlParser::DECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexadecimalLiteralContext ------------------------------------------------------------------

MSqlParser::HexadecimalLiteralContext::HexadecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::HexadecimalLiteralContext::HEXADECIMAL_LITERAL() {
  return getToken(MSqlParser::HEXADECIMAL_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::HexadecimalLiteralContext::STRING_CHARSET_NAME() {
  return getToken(MSqlParser::STRING_CHARSET_NAME, 0);
}


size_t MSqlParser::HexadecimalLiteralContext::getRuleIndex() const {
  return MSqlParser::RuleHexadecimalLiteral;
}

void MSqlParser::HexadecimalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexadecimalLiteral(this);
}

void MSqlParser::HexadecimalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexadecimalLiteral(this);
}


antlrcpp::Any MSqlParser::HexadecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitHexadecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::HexadecimalLiteralContext* MSqlParser::hexadecimalLiteral() {
  HexadecimalLiteralContext *_localctx = _tracker.createInstance<HexadecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 68, MSqlParser::RuleHexadecimalLiteral);
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
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::STRING_CHARSET_NAME) {
      setState(473);
      match(MSqlParser::STRING_CHARSET_NAME);
    }
    setState(476);
    match(MSqlParser::HEXADECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

MSqlParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::BooleanLiteralContext::TRUE() {
  return getToken(MSqlParser::TRUE, 0);
}

tree::TerminalNode* MSqlParser::BooleanLiteralContext::FALSE() {
  return getToken(MSqlParser::FALSE, 0);
}


size_t MSqlParser::BooleanLiteralContext::getRuleIndex() const {
  return MSqlParser::RuleBooleanLiteral;
}

void MSqlParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void MSqlParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any MSqlParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::BooleanLiteralContext* MSqlParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 70, MSqlParser::RuleBooleanLiteral);
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
    setState(478);
    _la = _input->LA(1);
    if (!(_la == MSqlParser::TRUE

    || _la == MSqlParser::FALSE)) {
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

//----------------- TextLiteralContext ------------------------------------------------------------------

MSqlParser::TextLiteralContext::TextLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::TextLiteralContext::TEXT_STRING() {
  return getToken(MSqlParser::TEXT_STRING, 0);
}


size_t MSqlParser::TextLiteralContext::getRuleIndex() const {
  return MSqlParser::RuleTextLiteral;
}

void MSqlParser::TextLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextLiteral(this);
}

void MSqlParser::TextLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextLiteral(this);
}


antlrcpp::Any MSqlParser::TextLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitTextLiteral(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::TextLiteralContext* MSqlParser::textLiteral() {
  TextLiteralContext *_localctx = _tracker.createInstance<TextLiteralContext>(_ctx, getState());
  enterRule(_localctx, 72, MSqlParser::RuleTextLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    match(MSqlParser::TEXT_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

MSqlParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MSqlParser::StringLiteralContext::STRING_LITERAL() {
  return getTokens(MSqlParser::STRING_LITERAL);
}

tree::TerminalNode* MSqlParser::StringLiteralContext::STRING_LITERAL(size_t i) {
  return getToken(MSqlParser::STRING_LITERAL, i);
}

tree::TerminalNode* MSqlParser::StringLiteralContext::START_NATIONAL_STRING_LITERAL() {
  return getToken(MSqlParser::START_NATIONAL_STRING_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::StringLiteralContext::STRING_CHARSET_NAME() {
  return getToken(MSqlParser::STRING_CHARSET_NAME, 0);
}

tree::TerminalNode* MSqlParser::StringLiteralContext::COLLATE() {
  return getToken(MSqlParser::COLLATE, 0);
}

MSqlParser::CollationNameContext* MSqlParser::StringLiteralContext::collationName() {
  return getRuleContext<MSqlParser::CollationNameContext>(0);
}


size_t MSqlParser::StringLiteralContext::getRuleIndex() const {
  return MSqlParser::RuleStringLiteral;
}

void MSqlParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void MSqlParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any MSqlParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::StringLiteralContext* MSqlParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 74, MSqlParser::RuleStringLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(505);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(487);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MSqlParser::STRING_LITERAL:
        case MSqlParser::STRING_CHARSET_NAME: {
          setState(483);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::STRING_CHARSET_NAME) {
            setState(482);
            match(MSqlParser::STRING_CHARSET_NAME);
          }
          setState(485);
          match(MSqlParser::STRING_LITERAL);
          break;
        }

        case MSqlParser::START_NATIONAL_STRING_LITERAL: {
          setState(486);
          match(MSqlParser::START_NATIONAL_STRING_LITERAL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(490); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(489);
                match(MSqlParser::STRING_LITERAL);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(492); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(499);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MSqlParser::STRING_LITERAL:
        case MSqlParser::STRING_CHARSET_NAME: {
          setState(495);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::STRING_CHARSET_NAME) {
            setState(494);
            match(MSqlParser::STRING_CHARSET_NAME);
          }
          setState(497);
          match(MSqlParser::STRING_LITERAL);
          break;
        }

        case MSqlParser::START_NATIONAL_STRING_LITERAL: {
          setState(498);
          match(MSqlParser::START_NATIONAL_STRING_LITERAL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(503);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
      case 1: {
        setState(501);
        match(MSqlParser::COLLATE);
        setState(502);
        collationName();
        break;
      }

      default:
        break;
      }
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

//----------------- CollationNameContext ------------------------------------------------------------------

MSqlParser::CollationNameContext::CollationNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::UidContext* MSqlParser::CollationNameContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

tree::TerminalNode* MSqlParser::CollationNameContext::STRING_LITERAL() {
  return getToken(MSqlParser::STRING_LITERAL, 0);
}


size_t MSqlParser::CollationNameContext::getRuleIndex() const {
  return MSqlParser::RuleCollationName;
}

void MSqlParser::CollationNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollationName(this);
}

void MSqlParser::CollationNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollationName(this);
}


antlrcpp::Any MSqlParser::CollationNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitCollationName(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::CollationNameContext* MSqlParser::collationName() {
  CollationNameContext *_localctx = _tracker.createInstance<CollationNameContext>(_ctx, getState());
  enterRule(_localctx, 76, MSqlParser::RuleCollationName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(509);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(507);
        uid();
        break;
      }

      case MSqlParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(508);
        match(MSqlParser::STRING_LITERAL);
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

//----------------- NullNotnullContext ------------------------------------------------------------------

MSqlParser::NullNotnullContext::NullNotnullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::NullNotnullContext::NULL_LITERAL() {
  return getToken(MSqlParser::NULL_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::NullNotnullContext::NULL_SPEC_LITERAL() {
  return getToken(MSqlParser::NULL_SPEC_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::NullNotnullContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}


size_t MSqlParser::NullNotnullContext::getRuleIndex() const {
  return MSqlParser::RuleNullNotnull;
}

void MSqlParser::NullNotnullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullNotnull(this);
}

void MSqlParser::NullNotnullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullNotnull(this);
}


antlrcpp::Any MSqlParser::NullNotnullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitNullNotnull(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::NullNotnullContext* MSqlParser::nullNotnull() {
  NullNotnullContext *_localctx = _tracker.createInstance<NullNotnullContext>(_ctx, getState());
  enterRule(_localctx, 78, MSqlParser::RuleNullNotnull);
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
    setState(512);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::NOT) {
      setState(511);
      match(MSqlParser::NOT);
    }
    setState(514);
    _la = _input->LA(1);
    if (!(_la == MSqlParser::NULL_LITERAL || _la == MSqlParser::NULL_SPEC_LITERAL)) {
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

//----------------- DefaultValueContext ------------------------------------------------------------------

MSqlParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::DefaultValueContext::NULL_LITERAL() {
  return getToken(MSqlParser::NULL_LITERAL, 0);
}

MSqlParser::ConstantContext* MSqlParser::DefaultValueContext::constant() {
  return getRuleContext<MSqlParser::ConstantContext>(0);
}

tree::TerminalNode* MSqlParser::DefaultValueContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::ExpressionContext* MSqlParser::DefaultValueContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* MSqlParser::DefaultValueContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

MSqlParser::UnaryOperatorContext* MSqlParser::DefaultValueContext::unaryOperator() {
  return getRuleContext<MSqlParser::UnaryOperatorContext>(0);
}


size_t MSqlParser::DefaultValueContext::getRuleIndex() const {
  return MSqlParser::RuleDefaultValue;
}

void MSqlParser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValue(this);
}

void MSqlParser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValue(this);
}


antlrcpp::Any MSqlParser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDefaultValue(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DefaultValueContext* MSqlParser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 80, MSqlParser::RuleDefaultValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      setState(516);
      match(MSqlParser::NULL_LITERAL);
      break;
    }

    case 2: {
      setState(518);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
      case 1: {
        setState(517);
        unaryOperator();
        break;
      }

      default:
        break;
      }
      setState(520);
      constant();
      break;
    }

    case 3: {
      setState(521);
      match(MSqlParser::LR_BRACKET);
      setState(522);
      expression(0);
      setState(523);
      match(MSqlParser::RR_BRACKET);
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

//----------------- UnaryOperatorContext ------------------------------------------------------------------

MSqlParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::UnaryOperatorContext::EXCLAMATION_SYMBOL() {
  return getToken(MSqlParser::EXCLAMATION_SYMBOL, 0);
}

tree::TerminalNode* MSqlParser::UnaryOperatorContext::BIT_NOT_OP() {
  return getToken(MSqlParser::BIT_NOT_OP, 0);
}

tree::TerminalNode* MSqlParser::UnaryOperatorContext::PLUS() {
  return getToken(MSqlParser::PLUS, 0);
}

tree::TerminalNode* MSqlParser::UnaryOperatorContext::MINUS() {
  return getToken(MSqlParser::MINUS, 0);
}

tree::TerminalNode* MSqlParser::UnaryOperatorContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}


size_t MSqlParser::UnaryOperatorContext::getRuleIndex() const {
  return MSqlParser::RuleUnaryOperator;
}

void MSqlParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void MSqlParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any MSqlParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::UnaryOperatorContext* MSqlParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 82, MSqlParser::RuleUnaryOperator);
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
    setState(527);
    _la = _input->LA(1);
    if (!(_la == MSqlParser::NOT || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (MSqlParser::PLUS - 76))
      | (1ULL << (MSqlParser::MINUS - 76))
      | (1ULL << (MSqlParser::EXCLAMATION_SYMBOL - 76))
      | (1ULL << (MSqlParser::BIT_NOT_OP - 76)))) != 0))) {
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

//----------------- ConstantContext ------------------------------------------------------------------

MSqlParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::StringLiteralContext* MSqlParser::ConstantContext::stringLiteral() {
  return getRuleContext<MSqlParser::StringLiteralContext>(0);
}

MSqlParser::DecimalLiteralContext* MSqlParser::ConstantContext::decimalLiteral() {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(0);
}

tree::TerminalNode* MSqlParser::ConstantContext::MINUS() {
  return getToken(MSqlParser::MINUS, 0);
}

MSqlParser::HexadecimalLiteralContext* MSqlParser::ConstantContext::hexadecimalLiteral() {
  return getRuleContext<MSqlParser::HexadecimalLiteralContext>(0);
}

MSqlParser::BooleanLiteralContext* MSqlParser::ConstantContext::booleanLiteral() {
  return getRuleContext<MSqlParser::BooleanLiteralContext>(0);
}

tree::TerminalNode* MSqlParser::ConstantContext::REAL_LITERAL() {
  return getToken(MSqlParser::REAL_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::ConstantContext::BIT_STRING() {
  return getToken(MSqlParser::BIT_STRING, 0);
}

tree::TerminalNode* MSqlParser::ConstantContext::NULL_LITERAL() {
  return getToken(MSqlParser::NULL_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::ConstantContext::NULL_SPEC_LITERAL() {
  return getToken(MSqlParser::NULL_SPEC_LITERAL, 0);
}

tree::TerminalNode* MSqlParser::ConstantContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}


size_t MSqlParser::ConstantContext::getRuleIndex() const {
  return MSqlParser::RuleConstant;
}

void MSqlParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void MSqlParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any MSqlParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ConstantContext* MSqlParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 84, MSqlParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(541);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(529);
      stringLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      decimalLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(531);
      match(MSqlParser::MINUS);
      setState(532);
      decimalLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(533);
      hexadecimalLiteral();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(534);
      booleanLiteral();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(535);
      match(MSqlParser::REAL_LITERAL);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(536);
      match(MSqlParser::BIT_STRING);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(538);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::NOT) {
        setState(537);
        match(MSqlParser::NOT);
      }
      setState(540);
      dynamic_cast<ConstantContext *>(_localctx)->nullLiteral = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MSqlParser::NULL_LITERAL || _la == MSqlParser::NULL_SPEC_LITERAL)) {
        dynamic_cast<ConstantContext *>(_localctx)->nullLiteral = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

//----------------- FullColumnNameContext ------------------------------------------------------------------

MSqlParser::FullColumnNameContext::FullColumnNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::UidContext* MSqlParser::FullColumnNameContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}

std::vector<MSqlParser::DottedIdContext *> MSqlParser::FullColumnNameContext::dottedId() {
  return getRuleContexts<MSqlParser::DottedIdContext>();
}

MSqlParser::DottedIdContext* MSqlParser::FullColumnNameContext::dottedId(size_t i) {
  return getRuleContext<MSqlParser::DottedIdContext>(i);
}


size_t MSqlParser::FullColumnNameContext::getRuleIndex() const {
  return MSqlParser::RuleFullColumnName;
}

void MSqlParser::FullColumnNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullColumnName(this);
}

void MSqlParser::FullColumnNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullColumnName(this);
}


antlrcpp::Any MSqlParser::FullColumnNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFullColumnName(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::FullColumnNameContext* MSqlParser::fullColumnName() {
  FullColumnNameContext *_localctx = _tracker.createInstance<FullColumnNameContext>(_ctx, getState());
  enterRule(_localctx, 86, MSqlParser::RuleFullColumnName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(543);
      uid();
      setState(548);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
      case 1: {
        setState(544);
        dottedId();
        setState(546);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
        case 1: {
          setState(545);
          dottedId();
          break;
        }

        default:
          break;
        }
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(550);
      matchWildcard();
      setState(551);
      dottedId();
      setState(553);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(552);
        dottedId();
        break;
      }

      default:
        break;
      }
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

//----------------- FunctionCallContext ------------------------------------------------------------------

MSqlParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::FunctionCallContext::getRuleIndex() const {
  return MSqlParser::RuleFunctionCall;
}

void MSqlParser::FunctionCallContext::copyFrom(FunctionCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AggregateFunctionCallContext ------------------------------------------------------------------

MSqlParser::AggregateWindowedFunctionContext* MSqlParser::AggregateFunctionCallContext::aggregateWindowedFunction() {
  return getRuleContext<MSqlParser::AggregateWindowedFunctionContext>(0);
}

MSqlParser::AggregateFunctionCallContext::AggregateFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void MSqlParser::AggregateFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAggregateFunctionCall(this);
}
void MSqlParser::AggregateFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAggregateFunctionCall(this);
}

antlrcpp::Any MSqlParser::AggregateFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitAggregateFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
MSqlParser::FunctionCallContext* MSqlParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 88, MSqlParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<MSqlParser::AggregateFunctionCallContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(557);
    aggregateWindowedFunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AggregateWindowedFunctionContext ------------------------------------------------------------------

MSqlParser::AggregateWindowedFunctionContext::AggregateWindowedFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::FunctionArgContext* MSqlParser::AggregateWindowedFunctionContext::functionArg() {
  return getRuleContext<MSqlParser::FunctionArgContext>(0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::AVG() {
  return getToken(MSqlParser::AVG, 0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::MAX() {
  return getToken(MSqlParser::MAX, 0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::MIN() {
  return getToken(MSqlParser::MIN, 0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::SUM() {
  return getToken(MSqlParser::SUM, 0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::COUNT() {
  return getToken(MSqlParser::COUNT, 0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::STAR() {
  return getToken(MSqlParser::STAR, 0);
}

MSqlParser::FunctionArgsContext* MSqlParser::AggregateWindowedFunctionContext::functionArgs() {
  return getRuleContext<MSqlParser::FunctionArgsContext>(0);
}

tree::TerminalNode* MSqlParser::AggregateWindowedFunctionContext::DISTINCT() {
  return getToken(MSqlParser::DISTINCT, 0);
}


size_t MSqlParser::AggregateWindowedFunctionContext::getRuleIndex() const {
  return MSqlParser::RuleAggregateWindowedFunction;
}

void MSqlParser::AggregateWindowedFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAggregateWindowedFunction(this);
}

void MSqlParser::AggregateWindowedFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAggregateWindowedFunction(this);
}


antlrcpp::Any MSqlParser::AggregateWindowedFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitAggregateWindowedFunction(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::AggregateWindowedFunctionContext* MSqlParser::aggregateWindowedFunction() {
  AggregateWindowedFunctionContext *_localctx = _tracker.createInstance<AggregateWindowedFunctionContext>(_ctx, getState());
  enterRule(_localctx, 90, MSqlParser::RuleAggregateWindowedFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(559);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MSqlParser::MAX)
        | (1ULL << MSqlParser::SUM)
        | (1ULL << MSqlParser::AVG)
        | (1ULL << MSqlParser::MIN))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(560);
      match(MSqlParser::LR_BRACKET);
      setState(561);
      functionArg();
      setState(562);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(564);
      match(MSqlParser::COUNT);
      setState(565);
      match(MSqlParser::LR_BRACKET);
      setState(570);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(566);
        dynamic_cast<AggregateWindowedFunctionContext *>(_localctx)->starArg = match(MSqlParser::STAR);
        break;
      }

      case 2: {
        setState(568);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
        case 1: {
          setState(567);
          functionArg();
          break;
        }

        default:
          break;
        }
        break;
      }

      default:
        break;
      }
      setState(572);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(573);
      match(MSqlParser::COUNT);
      setState(574);
      match(MSqlParser::LR_BRACKET);
      setState(575);
      dynamic_cast<AggregateWindowedFunctionContext *>(_localctx)->aggregator = match(MSqlParser::DISTINCT);
      setState(576);
      functionArgs();
      setState(577);
      match(MSqlParser::RR_BRACKET);
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

//----------------- FunctionArgContext ------------------------------------------------------------------

MSqlParser::FunctionArgContext::FunctionArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::FullColumnNameContext* MSqlParser::FunctionArgContext::fullColumnName() {
  return getRuleContext<MSqlParser::FullColumnNameContext>(0);
}


size_t MSqlParser::FunctionArgContext::getRuleIndex() const {
  return MSqlParser::RuleFunctionArg;
}

void MSqlParser::FunctionArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionArg(this);
}

void MSqlParser::FunctionArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionArg(this);
}


antlrcpp::Any MSqlParser::FunctionArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArg(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::FunctionArgContext* MSqlParser::functionArg() {
  FunctionArgContext *_localctx = _tracker.createInstance<FunctionArgContext>(_ctx, getState());
  enterRule(_localctx, 92, MSqlParser::RuleFunctionArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    fullColumnName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgsContext ------------------------------------------------------------------

MSqlParser::FunctionArgsContext::FunctionArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::FullColumnNameContext *> MSqlParser::FunctionArgsContext::fullColumnName() {
  return getRuleContexts<MSqlParser::FullColumnNameContext>();
}

MSqlParser::FullColumnNameContext* MSqlParser::FunctionArgsContext::fullColumnName(size_t i) {
  return getRuleContext<MSqlParser::FullColumnNameContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::FunctionArgsContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::FunctionArgsContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::FunctionArgsContext::getRuleIndex() const {
  return MSqlParser::RuleFunctionArgs;
}

void MSqlParser::FunctionArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionArgs(this);
}

void MSqlParser::FunctionArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionArgs(this);
}


antlrcpp::Any MSqlParser::FunctionArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgs(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::FunctionArgsContext* MSqlParser::functionArgs() {
  FunctionArgsContext *_localctx = _tracker.createInstance<FunctionArgsContext>(_ctx, getState());
  enterRule(_localctx, 94, MSqlParser::RuleFunctionArgs);
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
    setState(583);
    fullColumnName();
    setState(588);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(584);
      match(MSqlParser::COMMA);
      setState(585);
      fullColumnName();
      setState(590);
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

//----------------- UidContext ------------------------------------------------------------------

MSqlParser::UidContext::UidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::UidContext::ID() {
  return getToken(MSqlParser::ID, 0);
}


size_t MSqlParser::UidContext::getRuleIndex() const {
  return MSqlParser::RuleUid;
}

void MSqlParser::UidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUid(this);
}

void MSqlParser::UidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUid(this);
}


antlrcpp::Any MSqlParser::UidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitUid(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::UidContext* MSqlParser::uid() {
  UidContext *_localctx = _tracker.createInstance<UidContext>(_ctx, getState());
  enterRule(_localctx, 96, MSqlParser::RuleUid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    match(MSqlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FullIdContext ------------------------------------------------------------------

MSqlParser::FullIdContext::FullIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::UidContext *> MSqlParser::FullIdContext::uid() {
  return getRuleContexts<MSqlParser::UidContext>();
}

MSqlParser::UidContext* MSqlParser::FullIdContext::uid(size_t i) {
  return getRuleContext<MSqlParser::UidContext>(i);
}

tree::TerminalNode* MSqlParser::FullIdContext::DOT_ID() {
  return getToken(MSqlParser::DOT_ID, 0);
}

tree::TerminalNode* MSqlParser::FullIdContext::DOT() {
  return getToken(MSqlParser::DOT, 0);
}


size_t MSqlParser::FullIdContext::getRuleIndex() const {
  return MSqlParser::RuleFullId;
}

void MSqlParser::FullIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullId(this);
}

void MSqlParser::FullIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullId(this);
}


antlrcpp::Any MSqlParser::FullIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFullId(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::FullIdContext* MSqlParser::fullId() {
  FullIdContext *_localctx = _tracker.createInstance<FullIdContext>(_ctx, getState());
  enterRule(_localctx, 98, MSqlParser::RuleFullId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    uid();
    setState(597);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      setState(594);
      match(MSqlParser::DOT_ID);
      break;
    }

    case 2: {
      setState(595);
      match(MSqlParser::DOT);
      setState(596);
      uid();
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

//----------------- DottedIdContext ------------------------------------------------------------------

MSqlParser::DottedIdContext::DottedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::DottedIdContext::DOT_ID() {
  return getToken(MSqlParser::DOT_ID, 0);
}

tree::TerminalNode* MSqlParser::DottedIdContext::DOT() {
  return getToken(MSqlParser::DOT, 0);
}

MSqlParser::UidContext* MSqlParser::DottedIdContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}


size_t MSqlParser::DottedIdContext::getRuleIndex() const {
  return MSqlParser::RuleDottedId;
}

void MSqlParser::DottedIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDottedId(this);
}

void MSqlParser::DottedIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDottedId(this);
}


antlrcpp::Any MSqlParser::DottedIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDottedId(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DottedIdContext* MSqlParser::dottedId() {
  DottedIdContext *_localctx = _tracker.createInstance<DottedIdContext>(_ctx, getState());
  enterRule(_localctx, 100, MSqlParser::RuleDottedId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(602);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::DOT_ID: {
        enterOuterAlt(_localctx, 1);
        setState(599);
        match(MSqlParser::DOT_ID);
        break;
      }

      case MSqlParser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(600);
        match(MSqlParser::DOT);
        setState(601);
        uid();
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

//----------------- TableNameContext ------------------------------------------------------------------

MSqlParser::TableNameContext::TableNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::FullIdContext* MSqlParser::TableNameContext::fullId() {
  return getRuleContext<MSqlParser::FullIdContext>(0);
}


size_t MSqlParser::TableNameContext::getRuleIndex() const {
  return MSqlParser::RuleTableName;
}

void MSqlParser::TableNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableName(this);
}

void MSqlParser::TableNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableName(this);
}


antlrcpp::Any MSqlParser::TableNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitTableName(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::TableNameContext* MSqlParser::tableName() {
  TableNameContext *_localctx = _tracker.createInstance<TableNameContext>(_ctx, getState());
  enterRule(_localctx, 102, MSqlParser::RuleTableName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    fullId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TablesContext ------------------------------------------------------------------

MSqlParser::TablesContext::TablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::TableNameContext *> MSqlParser::TablesContext::tableName() {
  return getRuleContexts<MSqlParser::TableNameContext>();
}

MSqlParser::TableNameContext* MSqlParser::TablesContext::tableName(size_t i) {
  return getRuleContext<MSqlParser::TableNameContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::TablesContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::TablesContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::TablesContext::getRuleIndex() const {
  return MSqlParser::RuleTables;
}

void MSqlParser::TablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTables(this);
}

void MSqlParser::TablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTables(this);
}


antlrcpp::Any MSqlParser::TablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitTables(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::TablesContext* MSqlParser::tables() {
  TablesContext *_localctx = _tracker.createInstance<TablesContext>(_ctx, getState());
  enterRule(_localctx, 104, MSqlParser::RuleTables);
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
    setState(606);
    tableName();
    setState(611);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(607);
      match(MSqlParser::COMMA);
      setState(608);
      tableName();
      setState(613);
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

//----------------- InsertStatementContext ------------------------------------------------------------------

MSqlParser::InsertStatementContext::InsertStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::InsertStatementContext::INSERT() {
  return getToken(MSqlParser::INSERT, 0);
}

tree::TerminalNode* MSqlParser::InsertStatementContext::INTO() {
  return getToken(MSqlParser::INTO, 0);
}

MSqlParser::TableNameContext* MSqlParser::InsertStatementContext::tableName() {
  return getRuleContext<MSqlParser::TableNameContext>(0);
}

MSqlParser::InsertStatementValueContext* MSqlParser::InsertStatementContext::insertStatementValue() {
  return getRuleContext<MSqlParser::InsertStatementValueContext>(0);
}

tree::TerminalNode* MSqlParser::InsertStatementContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}

tree::TerminalNode* MSqlParser::InsertStatementContext::PARTITION() {
  return getToken(MSqlParser::PARTITION, 0);
}

tree::TerminalNode* MSqlParser::InsertStatementContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::InsertStatementContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

MSqlParser::UidListContext* MSqlParser::InsertStatementContext::uidList() {
  return getRuleContext<MSqlParser::UidListContext>(0);
}


size_t MSqlParser::InsertStatementContext::getRuleIndex() const {
  return MSqlParser::RuleInsertStatement;
}

void MSqlParser::InsertStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertStatement(this);
}

void MSqlParser::InsertStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertStatement(this);
}


antlrcpp::Any MSqlParser::InsertStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitInsertStatement(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::InsertStatementContext* MSqlParser::insertStatement() {
  InsertStatementContext *_localctx = _tracker.createInstance<InsertStatementContext>(_ctx, getState());
  enterRule(_localctx, 106, MSqlParser::RuleInsertStatement);
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
    setState(614);
    match(MSqlParser::INSERT);
    setState(615);
    match(MSqlParser::INTO);
    setState(616);
    tableName();
    setState(622);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::PARTITION) {
      setState(617);
      match(MSqlParser::PARTITION);
      setState(618);
      match(MSqlParser::LR_BRACKET);
      setState(619);
      dynamic_cast<InsertStatementContext *>(_localctx)->columns = uidList();
      setState(620);
      match(MSqlParser::RR_BRACKET);
    }
    setState(624);
    insertStatementValue();
    setState(625);
    match(MSqlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UidListContext ------------------------------------------------------------------

MSqlParser::UidListContext::UidListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::UidContext *> MSqlParser::UidListContext::uid() {
  return getRuleContexts<MSqlParser::UidContext>();
}

MSqlParser::UidContext* MSqlParser::UidListContext::uid(size_t i) {
  return getRuleContext<MSqlParser::UidContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::UidListContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::UidListContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::UidListContext::getRuleIndex() const {
  return MSqlParser::RuleUidList;
}

void MSqlParser::UidListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUidList(this);
}

void MSqlParser::UidListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUidList(this);
}


antlrcpp::Any MSqlParser::UidListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitUidList(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::UidListContext* MSqlParser::uidList() {
  UidListContext *_localctx = _tracker.createInstance<UidListContext>(_ctx, getState());
  enterRule(_localctx, 108, MSqlParser::RuleUidList);
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
    setState(627);
    uid();
    setState(632);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(628);
      match(MSqlParser::COMMA);
      setState(629);
      uid();
      setState(634);
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

//----------------- InsertStatementValueContext ------------------------------------------------------------------

MSqlParser::InsertStatementValueContext::InsertStatementValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::SelectStatementContext* MSqlParser::InsertStatementValueContext::selectStatement() {
  return getRuleContext<MSqlParser::SelectStatementContext>(0);
}

std::vector<tree::TerminalNode *> MSqlParser::InsertStatementValueContext::LR_BRACKET() {
  return getTokens(MSqlParser::LR_BRACKET);
}

tree::TerminalNode* MSqlParser::InsertStatementValueContext::LR_BRACKET(size_t i) {
  return getToken(MSqlParser::LR_BRACKET, i);
}

std::vector<tree::TerminalNode *> MSqlParser::InsertStatementValueContext::RR_BRACKET() {
  return getTokens(MSqlParser::RR_BRACKET);
}

tree::TerminalNode* MSqlParser::InsertStatementValueContext::RR_BRACKET(size_t i) {
  return getToken(MSqlParser::RR_BRACKET, i);
}

tree::TerminalNode* MSqlParser::InsertStatementValueContext::VALUES() {
  return getToken(MSqlParser::VALUES, 0);
}

tree::TerminalNode* MSqlParser::InsertStatementValueContext::VALUE() {
  return getToken(MSqlParser::VALUE, 0);
}

std::vector<MSqlParser::ExpressionsWithDefaultsContext *> MSqlParser::InsertStatementValueContext::expressionsWithDefaults() {
  return getRuleContexts<MSqlParser::ExpressionsWithDefaultsContext>();
}

MSqlParser::ExpressionsWithDefaultsContext* MSqlParser::InsertStatementValueContext::expressionsWithDefaults(size_t i) {
  return getRuleContext<MSqlParser::ExpressionsWithDefaultsContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::InsertStatementValueContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::InsertStatementValueContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::InsertStatementValueContext::getRuleIndex() const {
  return MSqlParser::RuleInsertStatementValue;
}

void MSqlParser::InsertStatementValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertStatementValue(this);
}

void MSqlParser::InsertStatementValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertStatementValue(this);
}


antlrcpp::Any MSqlParser::InsertStatementValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitInsertStatementValue(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::InsertStatementValueContext* MSqlParser::insertStatementValue() {
  InsertStatementValueContext *_localctx = _tracker.createInstance<InsertStatementValueContext>(_ctx, getState());
  enterRule(_localctx, 110, MSqlParser::RuleInsertStatementValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(653);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(635);
        selectStatement();
        break;
      }

      case MSqlParser::VALUES:
      case MSqlParser::VALUE: {
        enterOuterAlt(_localctx, 2);
        setState(636);
        dynamic_cast<InsertStatementValueContext *>(_localctx)->insertFormat = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == MSqlParser::VALUES

        || _la == MSqlParser::VALUE)) {
          dynamic_cast<InsertStatementValueContext *>(_localctx)->insertFormat = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(637);
        match(MSqlParser::LR_BRACKET);
        setState(639);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
        case 1: {
          setState(638);
          expressionsWithDefaults();
          break;
        }

        default:
          break;
        }
        setState(641);
        match(MSqlParser::RR_BRACKET);
        setState(650);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MSqlParser::COMMA) {
          setState(642);
          match(MSqlParser::COMMA);
          setState(643);
          match(MSqlParser::LR_BRACKET);
          setState(645);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
          case 1: {
            setState(644);
            expressionsWithDefaults();
            break;
          }

          default:
            break;
          }
          setState(647);
          match(MSqlParser::RR_BRACKET);
          setState(652);
          _errHandler->sync(this);
          _la = _input->LA(1);
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

//----------------- ExpressionsContext ------------------------------------------------------------------

MSqlParser::ExpressionsContext::ExpressionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::ExpressionContext *> MSqlParser::ExpressionsContext::expression() {
  return getRuleContexts<MSqlParser::ExpressionContext>();
}

MSqlParser::ExpressionContext* MSqlParser::ExpressionsContext::expression(size_t i) {
  return getRuleContext<MSqlParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::ExpressionsContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::ExpressionsContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::ExpressionsContext::getRuleIndex() const {
  return MSqlParser::RuleExpressions;
}

void MSqlParser::ExpressionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressions(this);
}

void MSqlParser::ExpressionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressions(this);
}


antlrcpp::Any MSqlParser::ExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressions(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ExpressionsContext* MSqlParser::expressions() {
  ExpressionsContext *_localctx = _tracker.createInstance<ExpressionsContext>(_ctx, getState());
  enterRule(_localctx, 112, MSqlParser::RuleExpressions);
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
    setState(655);
    expression(0);
    setState(660);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(656);
      match(MSqlParser::COMMA);
      setState(657);
      expression(0);
      setState(662);
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

//----------------- ExpressionContext ------------------------------------------------------------------

MSqlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::ExpressionContext::getRuleIndex() const {
  return MSqlParser::RuleExpression;
}

void MSqlParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IsExpressionContext ------------------------------------------------------------------

MSqlParser::PredicateContext* MSqlParser::IsExpressionContext::predicate() {
  return getRuleContext<MSqlParser::PredicateContext>(0);
}

tree::TerminalNode* MSqlParser::IsExpressionContext::IS() {
  return getToken(MSqlParser::IS, 0);
}

tree::TerminalNode* MSqlParser::IsExpressionContext::TRUE() {
  return getToken(MSqlParser::TRUE, 0);
}

tree::TerminalNode* MSqlParser::IsExpressionContext::FALSE() {
  return getToken(MSqlParser::FALSE, 0);
}

tree::TerminalNode* MSqlParser::IsExpressionContext::UNKNOWN() {
  return getToken(MSqlParser::UNKNOWN, 0);
}

tree::TerminalNode* MSqlParser::IsExpressionContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}

MSqlParser::IsExpressionContext::IsExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MSqlParser::IsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsExpression(this);
}
void MSqlParser::IsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsExpression(this);
}

antlrcpp::Any MSqlParser::IsExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitIsExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

MSqlParser::ExpressionContext* MSqlParser::NotExpressionContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* MSqlParser::NotExpressionContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}

tree::TerminalNode* MSqlParser::NotExpressionContext::EXCLAMATION_SYMBOL() {
  return getToken(MSqlParser::EXCLAMATION_SYMBOL, 0);
}

MSqlParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MSqlParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void MSqlParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any MSqlParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExpressionContext ------------------------------------------------------------------

std::vector<MSqlParser::ExpressionContext *> MSqlParser::LogicalExpressionContext::expression() {
  return getRuleContexts<MSqlParser::ExpressionContext>();
}

MSqlParser::ExpressionContext* MSqlParser::LogicalExpressionContext::expression(size_t i) {
  return getRuleContext<MSqlParser::ExpressionContext>(i);
}

MSqlParser::LogicalOperatorContext* MSqlParser::LogicalExpressionContext::logicalOperator() {
  return getRuleContext<MSqlParser::LogicalOperatorContext>(0);
}

MSqlParser::LogicalExpressionContext::LogicalExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MSqlParser::LogicalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpression(this);
}
void MSqlParser::LogicalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpression(this);
}

antlrcpp::Any MSqlParser::LogicalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLogicalExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredicateExpressionContext ------------------------------------------------------------------

MSqlParser::PredicateContext* MSqlParser::PredicateExpressionContext::predicate() {
  return getRuleContext<MSqlParser::PredicateContext>(0);
}

MSqlParser::PredicateExpressionContext::PredicateExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MSqlParser::PredicateExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateExpression(this);
}
void MSqlParser::PredicateExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateExpression(this);
}

antlrcpp::Any MSqlParser::PredicateExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitPredicateExpression(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ExpressionContext* MSqlParser::expression() {
   return expression(0);
}

MSqlParser::ExpressionContext* MSqlParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MSqlParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  MSqlParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 114;
  enterRecursionRule(_localctx, 114, MSqlParser::RuleExpression, precedence);

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
    setState(674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(664);
      dynamic_cast<NotExpressionContext *>(_localctx)->notOperator = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MSqlParser::NOT

      || _la == MSqlParser::EXCLAMATION_SYMBOL)) {
        dynamic_cast<NotExpressionContext *>(_localctx)->notOperator = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(665);
      expression(4);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IsExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(666);
      predicate(0);
      setState(667);
      match(MSqlParser::IS);
      setState(669);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MSqlParser::NOT) {
        setState(668);
        match(MSqlParser::NOT);
      }
      setState(671);
      dynamic_cast<IsExpressionContext *>(_localctx)->testValue = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MSqlParser::TRUE)
        | (1ULL << MSqlParser::FALSE)
        | (1ULL << MSqlParser::UNKNOWN))) != 0))) {
        dynamic_cast<IsExpressionContext *>(_localctx)->testValue = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PredicateExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(673);
      predicate(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(682);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LogicalExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpression);
        setState(676);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(677);
        logicalOperator();
        setState(678);
        expression(4); 
      }
      setState(684);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

MSqlParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::PredicateContext::getRuleIndex() const {
  return MSqlParser::RulePredicate;
}

void MSqlParser::PredicateContext::copyFrom(PredicateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SoundsLikePredicateContext ------------------------------------------------------------------

std::vector<MSqlParser::PredicateContext *> MSqlParser::SoundsLikePredicateContext::predicate() {
  return getRuleContexts<MSqlParser::PredicateContext>();
}

MSqlParser::PredicateContext* MSqlParser::SoundsLikePredicateContext::predicate(size_t i) {
  return getRuleContext<MSqlParser::PredicateContext>(i);
}

tree::TerminalNode* MSqlParser::SoundsLikePredicateContext::SOUNDS() {
  return getToken(MSqlParser::SOUNDS, 0);
}

tree::TerminalNode* MSqlParser::SoundsLikePredicateContext::LIKE() {
  return getToken(MSqlParser::LIKE, 0);
}

MSqlParser::SoundsLikePredicateContext::SoundsLikePredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::SoundsLikePredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSoundsLikePredicate(this);
}
void MSqlParser::SoundsLikePredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSoundsLikePredicate(this);
}

antlrcpp::Any MSqlParser::SoundsLikePredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSoundsLikePredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionAtomPredicateContext ------------------------------------------------------------------

MSqlParser::ExpressionAtomContext* MSqlParser::ExpressionAtomPredicateContext::expressionAtom() {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(0);
}

tree::TerminalNode* MSqlParser::ExpressionAtomPredicateContext::LOCAL_ID() {
  return getToken(MSqlParser::LOCAL_ID, 0);
}

MSqlParser::ExpressionAtomPredicateContext::ExpressionAtomPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::ExpressionAtomPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionAtomPredicate(this);
}
void MSqlParser::ExpressionAtomPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionAtomPredicate(this);
}

antlrcpp::Any MSqlParser::ExpressionAtomPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressionAtomPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- JsonMemberOfPredicateContext ------------------------------------------------------------------

std::vector<MSqlParser::PredicateContext *> MSqlParser::JsonMemberOfPredicateContext::predicate() {
  return getRuleContexts<MSqlParser::PredicateContext>();
}

MSqlParser::PredicateContext* MSqlParser::JsonMemberOfPredicateContext::predicate(size_t i) {
  return getRuleContext<MSqlParser::PredicateContext>(i);
}

tree::TerminalNode* MSqlParser::JsonMemberOfPredicateContext::MEMBER() {
  return getToken(MSqlParser::MEMBER, 0);
}

tree::TerminalNode* MSqlParser::JsonMemberOfPredicateContext::OF() {
  return getToken(MSqlParser::OF, 0);
}

tree::TerminalNode* MSqlParser::JsonMemberOfPredicateContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::JsonMemberOfPredicateContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

MSqlParser::JsonMemberOfPredicateContext::JsonMemberOfPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::JsonMemberOfPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJsonMemberOfPredicate(this);
}
void MSqlParser::JsonMemberOfPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJsonMemberOfPredicate(this);
}

antlrcpp::Any MSqlParser::JsonMemberOfPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitJsonMemberOfPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InPredicateContext ------------------------------------------------------------------

MSqlParser::PredicateContext* MSqlParser::InPredicateContext::predicate() {
  return getRuleContext<MSqlParser::PredicateContext>(0);
}

tree::TerminalNode* MSqlParser::InPredicateContext::IN() {
  return getToken(MSqlParser::IN, 0);
}

tree::TerminalNode* MSqlParser::InPredicateContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::InPredicateContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

MSqlParser::SelectStatementContext* MSqlParser::InPredicateContext::selectStatement() {
  return getRuleContext<MSqlParser::SelectStatementContext>(0);
}

MSqlParser::ExpressionsContext* MSqlParser::InPredicateContext::expressions() {
  return getRuleContext<MSqlParser::ExpressionsContext>(0);
}

tree::TerminalNode* MSqlParser::InPredicateContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}

MSqlParser::InPredicateContext::InPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::InPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInPredicate(this);
}
void MSqlParser::InPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInPredicate(this);
}

antlrcpp::Any MSqlParser::InPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitInPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubqueryComparasionPredicateContext ------------------------------------------------------------------

MSqlParser::PredicateContext* MSqlParser::SubqueryComparasionPredicateContext::predicate() {
  return getRuleContext<MSqlParser::PredicateContext>(0);
}

MSqlParser::ComparisonOperatorContext* MSqlParser::SubqueryComparasionPredicateContext::comparisonOperator() {
  return getRuleContext<MSqlParser::ComparisonOperatorContext>(0);
}

tree::TerminalNode* MSqlParser::SubqueryComparasionPredicateContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::SelectStatementContext* MSqlParser::SubqueryComparasionPredicateContext::selectStatement() {
  return getRuleContext<MSqlParser::SelectStatementContext>(0);
}

tree::TerminalNode* MSqlParser::SubqueryComparasionPredicateContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::SubqueryComparasionPredicateContext::ALL() {
  return getToken(MSqlParser::ALL, 0);
}

tree::TerminalNode* MSqlParser::SubqueryComparasionPredicateContext::ANY() {
  return getToken(MSqlParser::ANY, 0);
}

tree::TerminalNode* MSqlParser::SubqueryComparasionPredicateContext::SOME() {
  return getToken(MSqlParser::SOME, 0);
}

MSqlParser::SubqueryComparasionPredicateContext::SubqueryComparasionPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::SubqueryComparasionPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubqueryComparasionPredicate(this);
}
void MSqlParser::SubqueryComparasionPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubqueryComparasionPredicate(this);
}

antlrcpp::Any MSqlParser::SubqueryComparasionPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSubqueryComparasionPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BetweenPredicateContext ------------------------------------------------------------------

std::vector<MSqlParser::PredicateContext *> MSqlParser::BetweenPredicateContext::predicate() {
  return getRuleContexts<MSqlParser::PredicateContext>();
}

MSqlParser::PredicateContext* MSqlParser::BetweenPredicateContext::predicate(size_t i) {
  return getRuleContext<MSqlParser::PredicateContext>(i);
}

tree::TerminalNode* MSqlParser::BetweenPredicateContext::BETWEEN() {
  return getToken(MSqlParser::BETWEEN, 0);
}

tree::TerminalNode* MSqlParser::BetweenPredicateContext::AND() {
  return getToken(MSqlParser::AND, 0);
}

tree::TerminalNode* MSqlParser::BetweenPredicateContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}

MSqlParser::BetweenPredicateContext::BetweenPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::BetweenPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBetweenPredicate(this);
}
void MSqlParser::BetweenPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBetweenPredicate(this);
}

antlrcpp::Any MSqlParser::BetweenPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitBetweenPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryComparasionPredicateContext ------------------------------------------------------------------

MSqlParser::ComparisonOperatorContext* MSqlParser::BinaryComparasionPredicateContext::comparisonOperator() {
  return getRuleContext<MSqlParser::ComparisonOperatorContext>(0);
}

std::vector<MSqlParser::PredicateContext *> MSqlParser::BinaryComparasionPredicateContext::predicate() {
  return getRuleContexts<MSqlParser::PredicateContext>();
}

MSqlParser::PredicateContext* MSqlParser::BinaryComparasionPredicateContext::predicate(size_t i) {
  return getRuleContext<MSqlParser::PredicateContext>(i);
}

MSqlParser::BinaryComparasionPredicateContext::BinaryComparasionPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::BinaryComparasionPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryComparasionPredicate(this);
}
void MSqlParser::BinaryComparasionPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryComparasionPredicate(this);
}

antlrcpp::Any MSqlParser::BinaryComparasionPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitBinaryComparasionPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IsNullPredicateContext ------------------------------------------------------------------

MSqlParser::PredicateContext* MSqlParser::IsNullPredicateContext::predicate() {
  return getRuleContext<MSqlParser::PredicateContext>(0);
}

tree::TerminalNode* MSqlParser::IsNullPredicateContext::IS() {
  return getToken(MSqlParser::IS, 0);
}

MSqlParser::NullNotnullContext* MSqlParser::IsNullPredicateContext::nullNotnull() {
  return getRuleContext<MSqlParser::NullNotnullContext>(0);
}

MSqlParser::IsNullPredicateContext::IsNullPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::IsNullPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsNullPredicate(this);
}
void MSqlParser::IsNullPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsNullPredicate(this);
}

antlrcpp::Any MSqlParser::IsNullPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitIsNullPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LikePredicateContext ------------------------------------------------------------------

std::vector<MSqlParser::PredicateContext *> MSqlParser::LikePredicateContext::predicate() {
  return getRuleContexts<MSqlParser::PredicateContext>();
}

MSqlParser::PredicateContext* MSqlParser::LikePredicateContext::predicate(size_t i) {
  return getRuleContext<MSqlParser::PredicateContext>(i);
}

tree::TerminalNode* MSqlParser::LikePredicateContext::LIKE() {
  return getToken(MSqlParser::LIKE, 0);
}

tree::TerminalNode* MSqlParser::LikePredicateContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}

tree::TerminalNode* MSqlParser::LikePredicateContext::ESCAPE() {
  return getToken(MSqlParser::ESCAPE, 0);
}

tree::TerminalNode* MSqlParser::LikePredicateContext::STRING_LITERAL() {
  return getToken(MSqlParser::STRING_LITERAL, 0);
}

MSqlParser::LikePredicateContext::LikePredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::LikePredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLikePredicate(this);
}
void MSqlParser::LikePredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLikePredicate(this);
}

antlrcpp::Any MSqlParser::LikePredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLikePredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RegexpPredicateContext ------------------------------------------------------------------

std::vector<MSqlParser::PredicateContext *> MSqlParser::RegexpPredicateContext::predicate() {
  return getRuleContexts<MSqlParser::PredicateContext>();
}

MSqlParser::PredicateContext* MSqlParser::RegexpPredicateContext::predicate(size_t i) {
  return getRuleContext<MSqlParser::PredicateContext>(i);
}

tree::TerminalNode* MSqlParser::RegexpPredicateContext::REGEXP() {
  return getToken(MSqlParser::REGEXP, 0);
}

tree::TerminalNode* MSqlParser::RegexpPredicateContext::RLIKE() {
  return getToken(MSqlParser::RLIKE, 0);
}

tree::TerminalNode* MSqlParser::RegexpPredicateContext::NOT() {
  return getToken(MSqlParser::NOT, 0);
}

MSqlParser::RegexpPredicateContext::RegexpPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }

void MSqlParser::RegexpPredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegexpPredicate(this);
}
void MSqlParser::RegexpPredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegexpPredicate(this);
}

antlrcpp::Any MSqlParser::RegexpPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitRegexpPredicate(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::PredicateContext* MSqlParser::predicate() {
   return predicate(0);
}

MSqlParser::PredicateContext* MSqlParser::predicate(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MSqlParser::PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, parentState);
  MSqlParser::PredicateContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 116;
  enterRecursionRule(_localctx, 116, MSqlParser::RulePredicate, precedence);

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
    _localctx = _tracker.createInstance<ExpressionAtomPredicateContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(687);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      setState(686);
      match(MSqlParser::LOCAL_ID);
      break;
    }

    default:
      break;
    }
    setState(689);
    expressionAtom(0);
    _ctx->stop = _input->LT(-1);
    setState(755);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(753);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryComparasionPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(691);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(692);
          comparisonOperator();
          setState(693);
          dynamic_cast<BinaryComparasionPredicateContext *>(_localctx)->right = predicate(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BetweenPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(695);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(697);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::NOT) {
            setState(696);
            match(MSqlParser::NOT);
          }
          setState(699);
          match(MSqlParser::BETWEEN);
          setState(700);
          predicate(0);
          setState(701);
          match(MSqlParser::AND);
          setState(702);
          predicate(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SoundsLikePredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(704);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(705);
          match(MSqlParser::SOUNDS);
          setState(706);
          match(MSqlParser::LIKE);
          setState(707);
          predicate(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RegexpPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(708);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(710);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::NOT) {
            setState(709);
            match(MSqlParser::NOT);
          }
          setState(712);
          dynamic_cast<RegexpPredicateContext *>(_localctx)->regex = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MSqlParser::REGEXP

          || _la == MSqlParser::RLIKE)) {
            dynamic_cast<RegexpPredicateContext *>(_localctx)->regex = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(713);
          predicate(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<InPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(714);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(716);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::NOT) {
            setState(715);
            match(MSqlParser::NOT);
          }
          setState(718);
          match(MSqlParser::IN);
          setState(719);
          match(MSqlParser::LR_BRACKET);
          setState(722);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
          case 1: {
            setState(720);
            selectStatement();
            break;
          }

          case 2: {
            setState(721);
            expressions();
            break;
          }

          default:
            break;
          }
          setState(724);
          match(MSqlParser::RR_BRACKET);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<IsNullPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(726);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(727);
          match(MSqlParser::IS);
          setState(728);
          nullNotnull();
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<SubqueryComparasionPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(729);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(730);
          comparisonOperator();
          setState(731);
          dynamic_cast<SubqueryComparasionPredicateContext *>(_localctx)->quantifier = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MSqlParser::ALL)
            | (1ULL << MSqlParser::ANY)
            | (1ULL << MSqlParser::SOME))) != 0))) {
            dynamic_cast<SubqueryComparasionPredicateContext *>(_localctx)->quantifier = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(732);
          match(MSqlParser::LR_BRACKET);
          setState(733);
          selectStatement();
          setState(734);
          match(MSqlParser::RR_BRACKET);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<LikePredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(736);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(738);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::NOT) {
            setState(737);
            match(MSqlParser::NOT);
          }
          setState(740);
          match(MSqlParser::LIKE);
          setState(741);
          predicate(0);
          setState(744);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
          case 1: {
            setState(742);
            match(MSqlParser::ESCAPE);
            setState(743);
            match(MSqlParser::STRING_LITERAL);
            break;
          }

          default:
            break;
          }
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<JsonMemberOfPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(746);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(747);
          match(MSqlParser::MEMBER);
          setState(748);
          match(MSqlParser::OF);
          setState(749);
          match(MSqlParser::LR_BRACKET);
          setState(750);
          predicate(0);
          setState(751);
          match(MSqlParser::RR_BRACKET);
          break;
        }

        default:
          break;
        } 
      }
      setState(757);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionAtomContext ------------------------------------------------------------------

MSqlParser::ExpressionAtomContext::ExpressionAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MSqlParser::ExpressionAtomContext::getRuleIndex() const {
  return MSqlParser::RuleExpressionAtom;
}

void MSqlParser::ExpressionAtomContext::copyFrom(ExpressionAtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryExpressionAtomContext ------------------------------------------------------------------

MSqlParser::UnaryOperatorContext* MSqlParser::UnaryExpressionAtomContext::unaryOperator() {
  return getRuleContext<MSqlParser::UnaryOperatorContext>(0);
}

MSqlParser::ExpressionAtomContext* MSqlParser::UnaryExpressionAtomContext::expressionAtom() {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(0);
}

MSqlParser::UnaryExpressionAtomContext::UnaryExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::UnaryExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpressionAtom(this);
}
void MSqlParser::UnaryExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpressionAtom(this);
}

antlrcpp::Any MSqlParser::UnaryExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CollateExpressionAtomContext ------------------------------------------------------------------

MSqlParser::ExpressionAtomContext* MSqlParser::CollateExpressionAtomContext::expressionAtom() {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(0);
}

tree::TerminalNode* MSqlParser::CollateExpressionAtomContext::COLLATE() {
  return getToken(MSqlParser::COLLATE, 0);
}

MSqlParser::CollationNameContext* MSqlParser::CollateExpressionAtomContext::collationName() {
  return getRuleContext<MSqlParser::CollationNameContext>(0);
}

MSqlParser::CollateExpressionAtomContext::CollateExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::CollateExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollateExpressionAtom(this);
}
void MSqlParser::CollateExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollateExpressionAtom(this);
}

antlrcpp::Any MSqlParser::CollateExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitCollateExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MysqlVariableExpressionAtomContext ------------------------------------------------------------------

MSqlParser::MysqlVariableContext* MSqlParser::MysqlVariableExpressionAtomContext::mysqlVariable() {
  return getRuleContext<MSqlParser::MysqlVariableContext>(0);
}

MSqlParser::MysqlVariableExpressionAtomContext::MysqlVariableExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::MysqlVariableExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMysqlVariableExpressionAtom(this);
}
void MSqlParser::MysqlVariableExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMysqlVariableExpressionAtom(this);
}

antlrcpp::Any MSqlParser::MysqlVariableExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitMysqlVariableExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NestedExpressionAtomContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::NestedExpressionAtomContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

std::vector<MSqlParser::ExpressionContext *> MSqlParser::NestedExpressionAtomContext::expression() {
  return getRuleContexts<MSqlParser::ExpressionContext>();
}

MSqlParser::ExpressionContext* MSqlParser::NestedExpressionAtomContext::expression(size_t i) {
  return getRuleContext<MSqlParser::ExpressionContext>(i);
}

tree::TerminalNode* MSqlParser::NestedExpressionAtomContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::NestedExpressionAtomContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::NestedExpressionAtomContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}

MSqlParser::NestedExpressionAtomContext::NestedExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::NestedExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedExpressionAtom(this);
}
void MSqlParser::NestedExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedExpressionAtom(this);
}

antlrcpp::Any MSqlParser::NestedExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitNestedExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NestedRowExpressionAtomContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::NestedRowExpressionAtomContext::ROW() {
  return getToken(MSqlParser::ROW, 0);
}

tree::TerminalNode* MSqlParser::NestedRowExpressionAtomContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

std::vector<MSqlParser::ExpressionContext *> MSqlParser::NestedRowExpressionAtomContext::expression() {
  return getRuleContexts<MSqlParser::ExpressionContext>();
}

MSqlParser::ExpressionContext* MSqlParser::NestedRowExpressionAtomContext::expression(size_t i) {
  return getRuleContext<MSqlParser::ExpressionContext>(i);
}

tree::TerminalNode* MSqlParser::NestedRowExpressionAtomContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MSqlParser::NestedRowExpressionAtomContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::NestedRowExpressionAtomContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}

MSqlParser::NestedRowExpressionAtomContext::NestedRowExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::NestedRowExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedRowExpressionAtom(this);
}
void MSqlParser::NestedRowExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedRowExpressionAtom(this);
}

antlrcpp::Any MSqlParser::NestedRowExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitNestedRowExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MathExpressionAtomContext ------------------------------------------------------------------

MSqlParser::MathOperatorContext* MSqlParser::MathExpressionAtomContext::mathOperator() {
  return getRuleContext<MSqlParser::MathOperatorContext>(0);
}

std::vector<MSqlParser::ExpressionAtomContext *> MSqlParser::MathExpressionAtomContext::expressionAtom() {
  return getRuleContexts<MSqlParser::ExpressionAtomContext>();
}

MSqlParser::ExpressionAtomContext* MSqlParser::MathExpressionAtomContext::expressionAtom(size_t i) {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(i);
}

MSqlParser::MathExpressionAtomContext::MathExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::MathExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathExpressionAtom(this);
}
void MSqlParser::MathExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathExpressionAtom(this);
}

antlrcpp::Any MSqlParser::MathExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitMathExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExistsExpressionAtomContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::ExistsExpressionAtomContext::EXISTS() {
  return getToken(MSqlParser::EXISTS, 0);
}

tree::TerminalNode* MSqlParser::ExistsExpressionAtomContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::SelectStatementContext* MSqlParser::ExistsExpressionAtomContext::selectStatement() {
  return getRuleContext<MSqlParser::SelectStatementContext>(0);
}

tree::TerminalNode* MSqlParser::ExistsExpressionAtomContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

MSqlParser::ExistsExpressionAtomContext::ExistsExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::ExistsExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExistsExpressionAtom(this);
}
void MSqlParser::ExistsExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExistsExpressionAtom(this);
}

antlrcpp::Any MSqlParser::ExistsExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitExistsExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- JsonExpressionAtomContext ------------------------------------------------------------------

MSqlParser::JsonOperatorContext* MSqlParser::JsonExpressionAtomContext::jsonOperator() {
  return getRuleContext<MSqlParser::JsonOperatorContext>(0);
}

std::vector<MSqlParser::ExpressionAtomContext *> MSqlParser::JsonExpressionAtomContext::expressionAtom() {
  return getRuleContexts<MSqlParser::ExpressionAtomContext>();
}

MSqlParser::ExpressionAtomContext* MSqlParser::JsonExpressionAtomContext::expressionAtom(size_t i) {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(i);
}

MSqlParser::JsonExpressionAtomContext::JsonExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::JsonExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJsonExpressionAtom(this);
}
void MSqlParser::JsonExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJsonExpressionAtom(this);
}

antlrcpp::Any MSqlParser::JsonExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitJsonExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubqueryExpressionAtomContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::SubqueryExpressionAtomContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::SelectStatementContext* MSqlParser::SubqueryExpressionAtomContext::selectStatement() {
  return getRuleContext<MSqlParser::SelectStatementContext>(0);
}

tree::TerminalNode* MSqlParser::SubqueryExpressionAtomContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

MSqlParser::SubqueryExpressionAtomContext::SubqueryExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::SubqueryExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubqueryExpressionAtom(this);
}
void MSqlParser::SubqueryExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubqueryExpressionAtom(this);
}

antlrcpp::Any MSqlParser::SubqueryExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSubqueryExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantExpressionAtomContext ------------------------------------------------------------------

MSqlParser::ConstantContext* MSqlParser::ConstantExpressionAtomContext::constant() {
  return getRuleContext<MSqlParser::ConstantContext>(0);
}

MSqlParser::ConstantExpressionAtomContext::ConstantExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::ConstantExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpressionAtom(this);
}
void MSqlParser::ConstantExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpressionAtom(this);
}

antlrcpp::Any MSqlParser::ConstantExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpressionAtomContext ------------------------------------------------------------------

MSqlParser::FunctionCallContext* MSqlParser::FunctionCallExpressionAtomContext::functionCall() {
  return getRuleContext<MSqlParser::FunctionCallContext>(0);
}

MSqlParser::FunctionCallExpressionAtomContext::FunctionCallExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::FunctionCallExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpressionAtom(this);
}
void MSqlParser::FunctionCallExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpressionAtom(this);
}

antlrcpp::Any MSqlParser::FunctionCallExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryExpressionAtomContext ------------------------------------------------------------------

tree::TerminalNode* MSqlParser::BinaryExpressionAtomContext::BINARY() {
  return getToken(MSqlParser::BINARY, 0);
}

MSqlParser::ExpressionAtomContext* MSqlParser::BinaryExpressionAtomContext::expressionAtom() {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(0);
}

MSqlParser::BinaryExpressionAtomContext::BinaryExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::BinaryExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpressionAtom(this);
}
void MSqlParser::BinaryExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpressionAtom(this);
}

antlrcpp::Any MSqlParser::BinaryExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitBinaryExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FullColumnNameExpressionAtomContext ------------------------------------------------------------------

MSqlParser::FullColumnNameContext* MSqlParser::FullColumnNameExpressionAtomContext::fullColumnName() {
  return getRuleContext<MSqlParser::FullColumnNameContext>(0);
}

MSqlParser::FullColumnNameExpressionAtomContext::FullColumnNameExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::FullColumnNameExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullColumnNameExpressionAtom(this);
}
void MSqlParser::FullColumnNameExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullColumnNameExpressionAtom(this);
}

antlrcpp::Any MSqlParser::FullColumnNameExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitFullColumnNameExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitExpressionAtomContext ------------------------------------------------------------------

MSqlParser::BitOperatorContext* MSqlParser::BitExpressionAtomContext::bitOperator() {
  return getRuleContext<MSqlParser::BitOperatorContext>(0);
}

std::vector<MSqlParser::ExpressionAtomContext *> MSqlParser::BitExpressionAtomContext::expressionAtom() {
  return getRuleContexts<MSqlParser::ExpressionAtomContext>();
}

MSqlParser::ExpressionAtomContext* MSqlParser::BitExpressionAtomContext::expressionAtom(size_t i) {
  return getRuleContext<MSqlParser::ExpressionAtomContext>(i);
}

MSqlParser::BitExpressionAtomContext::BitExpressionAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }

void MSqlParser::BitExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitExpressionAtom(this);
}
void MSqlParser::BitExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitExpressionAtom(this);
}

antlrcpp::Any MSqlParser::BitExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitBitExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ExpressionAtomContext* MSqlParser::expressionAtom() {
   return expressionAtom(0);
}

MSqlParser::ExpressionAtomContext* MSqlParser::expressionAtom(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MSqlParser::ExpressionAtomContext *_localctx = _tracker.createInstance<ExpressionAtomContext>(_ctx, parentState);
  MSqlParser::ExpressionAtomContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 118;
  enterRecursionRule(_localctx, 118, MSqlParser::RuleExpressionAtom, precedence);

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
    setState(799);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstantExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(759);
      constant();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FullColumnNameExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(760);
      fullColumnName();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FunctionCallExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(761);
      functionCall();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MysqlVariableExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(762);
      mysqlVariable();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(763);
      unaryOperator();
      setState(764);
      expressionAtom(9);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<BinaryExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(766);
      match(MSqlParser::BINARY);
      setState(767);
      expressionAtom(8);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NestedExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(768);
      match(MSqlParser::LR_BRACKET);
      setState(769);
      expression(0);
      setState(774);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MSqlParser::COMMA) {
        setState(770);
        match(MSqlParser::COMMA);
        setState(771);
        expression(0);
        setState(776);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(777);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NestedRowExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(779);
      match(MSqlParser::ROW);
      setState(780);
      match(MSqlParser::LR_BRACKET);
      setState(781);
      expression(0);
      setState(784); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(782);
        match(MSqlParser::COMMA);
        setState(783);
        expression(0);
        setState(786); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == MSqlParser::COMMA);
      setState(788);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ExistsExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(790);
      match(MSqlParser::EXISTS);
      setState(791);
      match(MSqlParser::LR_BRACKET);
      setState(792);
      selectStatement();
      setState(793);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<SubqueryExpressionAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(795);
      match(MSqlParser::LR_BRACKET);
      setState(796);
      selectStatement();
      setState(797);
      match(MSqlParser::RR_BRACKET);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(818);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(816);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BitExpressionAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
          setState(801);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(802);
          bitOperator();
          setState(803);
          dynamic_cast<BitExpressionAtomContext *>(_localctx)->right = expressionAtom(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MathExpressionAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
          setState(805);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(806);
          mathOperator();
          setState(807);
          dynamic_cast<MathExpressionAtomContext *>(_localctx)->right = expressionAtom(3);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<JsonExpressionAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
          setState(809);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(810);
          jsonOperator();
          setState(811);
          dynamic_cast<JsonExpressionAtomContext *>(_localctx)->right = expressionAtom(2);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CollateExpressionAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
          setState(813);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(814);
          match(MSqlParser::COLLATE);
          setState(815);
          collationName();
          break;
        }

        default:
          break;
        } 
      }
      setState(820);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MysqlVariableContext ------------------------------------------------------------------

MSqlParser::MysqlVariableContext::MysqlVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::MysqlVariableContext::LOCAL_ID() {
  return getToken(MSqlParser::LOCAL_ID, 0);
}

tree::TerminalNode* MSqlParser::MysqlVariableContext::GLOBAL_ID() {
  return getToken(MSqlParser::GLOBAL_ID, 0);
}


size_t MSqlParser::MysqlVariableContext::getRuleIndex() const {
  return MSqlParser::RuleMysqlVariable;
}

void MSqlParser::MysqlVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMysqlVariable(this);
}

void MSqlParser::MysqlVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMysqlVariable(this);
}


antlrcpp::Any MSqlParser::MysqlVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitMysqlVariable(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::MysqlVariableContext* MSqlParser::mysqlVariable() {
  MysqlVariableContext *_localctx = _tracker.createInstance<MysqlVariableContext>(_ctx, getState());
  enterRule(_localctx, 120, MSqlParser::RuleMysqlVariable);
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
    setState(821);
    _la = _input->LA(1);
    if (!(_la == MSqlParser::LOCAL_ID

    || _la == MSqlParser::GLOBAL_ID)) {
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

//----------------- ExpressionsWithDefaultsContext ------------------------------------------------------------------

MSqlParser::ExpressionsWithDefaultsContext::ExpressionsWithDefaultsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MSqlParser::ExpressionOrDefaultContext *> MSqlParser::ExpressionsWithDefaultsContext::expressionOrDefault() {
  return getRuleContexts<MSqlParser::ExpressionOrDefaultContext>();
}

MSqlParser::ExpressionOrDefaultContext* MSqlParser::ExpressionsWithDefaultsContext::expressionOrDefault(size_t i) {
  return getRuleContext<MSqlParser::ExpressionOrDefaultContext>(i);
}

std::vector<tree::TerminalNode *> MSqlParser::ExpressionsWithDefaultsContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::ExpressionsWithDefaultsContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::ExpressionsWithDefaultsContext::getRuleIndex() const {
  return MSqlParser::RuleExpressionsWithDefaults;
}

void MSqlParser::ExpressionsWithDefaultsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionsWithDefaults(this);
}

void MSqlParser::ExpressionsWithDefaultsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionsWithDefaults(this);
}


antlrcpp::Any MSqlParser::ExpressionsWithDefaultsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressionsWithDefaults(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ExpressionsWithDefaultsContext* MSqlParser::expressionsWithDefaults() {
  ExpressionsWithDefaultsContext *_localctx = _tracker.createInstance<ExpressionsWithDefaultsContext>(_ctx, getState());
  enterRule(_localctx, 122, MSqlParser::RuleExpressionsWithDefaults);
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
    setState(823);
    expressionOrDefault();
    setState(828);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MSqlParser::COMMA) {
      setState(824);
      match(MSqlParser::COMMA);
      setState(825);
      expressionOrDefault();
      setState(830);
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

//----------------- ExpressionOrDefaultContext ------------------------------------------------------------------

MSqlParser::ExpressionOrDefaultContext::ExpressionOrDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::ExpressionContext* MSqlParser::ExpressionOrDefaultContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}

tree::TerminalNode* MSqlParser::ExpressionOrDefaultContext::DEFAULT() {
  return getToken(MSqlParser::DEFAULT, 0);
}


size_t MSqlParser::ExpressionOrDefaultContext::getRuleIndex() const {
  return MSqlParser::RuleExpressionOrDefault;
}

void MSqlParser::ExpressionOrDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionOrDefault(this);
}

void MSqlParser::ExpressionOrDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionOrDefault(this);
}


antlrcpp::Any MSqlParser::ExpressionOrDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitExpressionOrDefault(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::ExpressionOrDefaultContext* MSqlParser::expressionOrDefault() {
  ExpressionOrDefaultContext *_localctx = _tracker.createInstance<ExpressionOrDefaultContext>(_ctx, getState());
  enterRule(_localctx, 124, MSqlParser::RuleExpressionOrDefault);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(833);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(831);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(832);
      match(MSqlParser::DEFAULT);
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

//----------------- DeleteStatementContext ------------------------------------------------------------------

MSqlParser::DeleteStatementContext::DeleteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::SingleDeleteStatementContext* MSqlParser::DeleteStatementContext::singleDeleteStatement() {
  return getRuleContext<MSqlParser::SingleDeleteStatementContext>(0);
}

MSqlParser::MultipleDeleteStatementContext* MSqlParser::DeleteStatementContext::multipleDeleteStatement() {
  return getRuleContext<MSqlParser::MultipleDeleteStatementContext>(0);
}

tree::TerminalNode* MSqlParser::DeleteStatementContext::SEMI() {
  return getToken(MSqlParser::SEMI, 0);
}


size_t MSqlParser::DeleteStatementContext::getRuleIndex() const {
  return MSqlParser::RuleDeleteStatement;
}

void MSqlParser::DeleteStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteStatement(this);
}

void MSqlParser::DeleteStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteStatement(this);
}


antlrcpp::Any MSqlParser::DeleteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitDeleteStatement(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::DeleteStatementContext* MSqlParser::deleteStatement() {
  DeleteStatementContext *_localctx = _tracker.createInstance<DeleteStatementContext>(_ctx, getState());
  enterRule(_localctx, 126, MSqlParser::RuleDeleteStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(839);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(835);
      singleDeleteStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(836);
      multipleDeleteStatement();
      setState(837);
      match(MSqlParser::SEMI);
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

//----------------- SingleDeleteStatementContext ------------------------------------------------------------------

MSqlParser::SingleDeleteStatementContext::SingleDeleteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::DELETE() {
  return getToken(MSqlParser::DELETE, 0);
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::FROM() {
  return getToken(MSqlParser::FROM, 0);
}

MSqlParser::TableNameContext* MSqlParser::SingleDeleteStatementContext::tableName() {
  return getRuleContext<MSqlParser::TableNameContext>(0);
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::PARTITION() {
  return getToken(MSqlParser::PARTITION, 0);
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::LR_BRACKET() {
  return getToken(MSqlParser::LR_BRACKET, 0);
}

MSqlParser::UidListContext* MSqlParser::SingleDeleteStatementContext::uidList() {
  return getRuleContext<MSqlParser::UidListContext>(0);
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::RR_BRACKET() {
  return getToken(MSqlParser::RR_BRACKET, 0);
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::WHERE() {
  return getToken(MSqlParser::WHERE, 0);
}

MSqlParser::ExpressionContext* MSqlParser::SingleDeleteStatementContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}

MSqlParser::OrderByClauseContext* MSqlParser::SingleDeleteStatementContext::orderByClause() {
  return getRuleContext<MSqlParser::OrderByClauseContext>(0);
}

tree::TerminalNode* MSqlParser::SingleDeleteStatementContext::LIMIT() {
  return getToken(MSqlParser::LIMIT, 0);
}

MSqlParser::LimitClauseAtomContext* MSqlParser::SingleDeleteStatementContext::limitClauseAtom() {
  return getRuleContext<MSqlParser::LimitClauseAtomContext>(0);
}


size_t MSqlParser::SingleDeleteStatementContext::getRuleIndex() const {
  return MSqlParser::RuleSingleDeleteStatement;
}

void MSqlParser::SingleDeleteStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleDeleteStatement(this);
}

void MSqlParser::SingleDeleteStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleDeleteStatement(this);
}


antlrcpp::Any MSqlParser::SingleDeleteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitSingleDeleteStatement(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::SingleDeleteStatementContext* MSqlParser::singleDeleteStatement() {
  SingleDeleteStatementContext *_localctx = _tracker.createInstance<SingleDeleteStatementContext>(_ctx, getState());
  enterRule(_localctx, 128, MSqlParser::RuleSingleDeleteStatement);
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
    setState(841);
    match(MSqlParser::DELETE);
    setState(842);
    match(MSqlParser::FROM);
    setState(843);
    tableName();
    setState(849);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::PARTITION) {
      setState(844);
      match(MSqlParser::PARTITION);
      setState(845);
      match(MSqlParser::LR_BRACKET);
      setState(846);
      uidList();
      setState(847);
      match(MSqlParser::RR_BRACKET);
    }
    setState(853);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::WHERE) {
      setState(851);
      match(MSqlParser::WHERE);
      setState(852);
      expression(0);
    }
    setState(856);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::ORDER) {
      setState(855);
      orderByClause();
    }
    setState(860);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::LIMIT) {
      setState(858);
      match(MSqlParser::LIMIT);
      setState(859);
      limitClauseAtom();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultipleDeleteStatementContext ------------------------------------------------------------------

MSqlParser::MultipleDeleteStatementContext::MultipleDeleteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::DELETE() {
  return getToken(MSqlParser::DELETE, 0);
}

std::vector<MSqlParser::TableNameContext *> MSqlParser::MultipleDeleteStatementContext::tableName() {
  return getRuleContexts<MSqlParser::TableNameContext>();
}

MSqlParser::TableNameContext* MSqlParser::MultipleDeleteStatementContext::tableName(size_t i) {
  return getRuleContext<MSqlParser::TableNameContext>(i);
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::FROM() {
  return getToken(MSqlParser::FROM, 0);
}

MSqlParser::TableSourcesContext* MSqlParser::MultipleDeleteStatementContext::tableSources() {
  return getRuleContext<MSqlParser::TableSourcesContext>(0);
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::USING() {
  return getToken(MSqlParser::USING, 0);
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::WHERE() {
  return getToken(MSqlParser::WHERE, 0);
}

MSqlParser::ExpressionContext* MSqlParser::MultipleDeleteStatementContext::expression() {
  return getRuleContext<MSqlParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> MSqlParser::MultipleDeleteStatementContext::DOT() {
  return getTokens(MSqlParser::DOT);
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::DOT(size_t i) {
  return getToken(MSqlParser::DOT, i);
}

std::vector<tree::TerminalNode *> MSqlParser::MultipleDeleteStatementContext::STAR() {
  return getTokens(MSqlParser::STAR);
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::STAR(size_t i) {
  return getToken(MSqlParser::STAR, i);
}

std::vector<tree::TerminalNode *> MSqlParser::MultipleDeleteStatementContext::COMMA() {
  return getTokens(MSqlParser::COMMA);
}

tree::TerminalNode* MSqlParser::MultipleDeleteStatementContext::COMMA(size_t i) {
  return getToken(MSqlParser::COMMA, i);
}


size_t MSqlParser::MultipleDeleteStatementContext::getRuleIndex() const {
  return MSqlParser::RuleMultipleDeleteStatement;
}

void MSqlParser::MultipleDeleteStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultipleDeleteStatement(this);
}

void MSqlParser::MultipleDeleteStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultipleDeleteStatement(this);
}


antlrcpp::Any MSqlParser::MultipleDeleteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitMultipleDeleteStatement(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::MultipleDeleteStatementContext* MSqlParser::multipleDeleteStatement() {
  MultipleDeleteStatementContext *_localctx = _tracker.createInstance<MultipleDeleteStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, MSqlParser::RuleMultipleDeleteStatement);
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
    setState(862);
    match(MSqlParser::DELETE);
    setState(902);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::ID: {
        setState(863);
        tableName();
        setState(866);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::DOT) {
          setState(864);
          match(MSqlParser::DOT);
          setState(865);
          match(MSqlParser::STAR);
        }
        setState(876);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MSqlParser::COMMA) {
          setState(868);
          match(MSqlParser::COMMA);
          setState(869);
          tableName();
          setState(872);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::DOT) {
            setState(870);
            match(MSqlParser::DOT);
            setState(871);
            match(MSqlParser::STAR);
          }
          setState(878);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(879);
        match(MSqlParser::FROM);
        setState(880);
        tableSources();
        break;
      }

      case MSqlParser::FROM: {
        setState(882);
        match(MSqlParser::FROM);
        setState(883);
        tableName();
        setState(886);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MSqlParser::DOT) {
          setState(884);
          match(MSqlParser::DOT);
          setState(885);
          match(MSqlParser::STAR);
        }
        setState(896);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MSqlParser::COMMA) {
          setState(888);
          match(MSqlParser::COMMA);
          setState(889);
          tableName();
          setState(892);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MSqlParser::DOT) {
            setState(890);
            match(MSqlParser::DOT);
            setState(891);
            match(MSqlParser::STAR);
          }
          setState(898);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(899);
        match(MSqlParser::USING);
        setState(900);
        tableSources();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(906);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MSqlParser::WHERE) {
      setState(904);
      match(MSqlParser::WHERE);
      setState(905);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitClauseAtomContext ------------------------------------------------------------------

MSqlParser::LimitClauseAtomContext::LimitClauseAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MSqlParser::DecimalLiteralContext* MSqlParser::LimitClauseAtomContext::decimalLiteral() {
  return getRuleContext<MSqlParser::DecimalLiteralContext>(0);
}

MSqlParser::MysqlVariableContext* MSqlParser::LimitClauseAtomContext::mysqlVariable() {
  return getRuleContext<MSqlParser::MysqlVariableContext>(0);
}

MSqlParser::UidContext* MSqlParser::LimitClauseAtomContext::uid() {
  return getRuleContext<MSqlParser::UidContext>(0);
}


size_t MSqlParser::LimitClauseAtomContext::getRuleIndex() const {
  return MSqlParser::RuleLimitClauseAtom;
}

void MSqlParser::LimitClauseAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimitClauseAtom(this);
}

void MSqlParser::LimitClauseAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MSqlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimitClauseAtom(this);
}


antlrcpp::Any MSqlParser::LimitClauseAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MSqlParserVisitor*>(visitor))
    return parserVisitor->visitLimitClauseAtom(this);
  else
    return visitor->visitChildren(this);
}

MSqlParser::LimitClauseAtomContext* MSqlParser::limitClauseAtom() {
  LimitClauseAtomContext *_localctx = _tracker.createInstance<LimitClauseAtomContext>(_ctx, getState());
  enterRule(_localctx, 132, MSqlParser::RuleLimitClauseAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(911);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MSqlParser::DECIMAL_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(908);
        decimalLiteral();
        break;
      }

      case MSqlParser::LOCAL_ID:
      case MSqlParser::GLOBAL_ID: {
        enterOuterAlt(_localctx, 2);
        setState(909);
        mysqlVariable();
        break;
      }

      case MSqlParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(910);
        uid();
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

bool MSqlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 57: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 58: return predicateSempred(dynamic_cast<PredicateContext *>(context), predicateIndex);
    case 59: return expressionAtomSempred(dynamic_cast<ExpressionAtomContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MSqlParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool MSqlParser::predicateSempred(PredicateContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool MSqlParser::expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 3);
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);
    case 13: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MSqlParser::_decisionToDFA;
atn::PredictionContextCache MSqlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MSqlParser::_atn;
std::vector<uint16_t> MSqlParser::_serializedATN;

std::vector<std::string> MSqlParser::_ruleNames = {
  "sqlStatements", "createTable", "createDefinitions", "createDefinition", 
  "columnDefinition", "dataType", "lengthOneDimension", "lengthTwoOptionalDimension", 
  "columnConstraint", "tableConstraint", "dropTable", "createIndex", "indexColumnNames", 
  "indexColumnName", "dropIndex", "selectStatement", "selectElements", "selectElement", 
  "tableSources", "whereClause", "fromClause", "groupByClause", "groupByItem", 
  "havingClause", "orderByClause", "orderByExpression", "limitClause", "logicalOperator", 
  "comparisonOperator", "bitOperator", "mathOperator", "jsonOperator", "value", 
  "decimalLiteral", "hexadecimalLiteral", "booleanLiteral", "textLiteral", 
  "stringLiteral", "collationName", "nullNotnull", "defaultValue", "unaryOperator", 
  "constant", "fullColumnName", "functionCall", "aggregateWindowedFunction", 
  "functionArg", "functionArgs", "uid", "fullId", "dottedId", "tableName", 
  "tables", "insertStatement", "uidList", "insertStatementValue", "expressions", 
  "expression", "predicate", "expressionAtom", "mysqlVariable", "expressionsWithDefaults", 
  "expressionOrDefault", "deleteStatement", "singleDeleteStatement", "multipleDeleteStatement", 
  "limitClauseAtom"
};

std::vector<std::string> MSqlParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "'*'", "'/'", "'%'", "'+'", "'--'", "'-'", "'='", "'>'", "'<'", "'!'", 
  "'~'", "'|'", "'&'", "'^'", "'.'", "'('", "')'", "','", "';'", "'@'", 
  "'''", "'\"'", "'`'", "':'", "'ARMSCII8'", "'ASCII'", "'BIG5'", "'CP1250'", 
  "'CP1251'", "'CP1256'", "'CP1257'", "'CP850'", "'CP852'", "'CP866'", "'CP932'", 
  "'DEC8'", "'EUCJPMS'", "'EUCKR'", "'GB2312'", "'GBK'", "'GEOSTD8'", "'GREEK'", 
  "'HEBREW'", "'HP8'", "'KEYBCS2'", "'KOI8R'", "'KOI8U'", "'LATIN1'", "'LATIN2'", 
  "'LATIN5'", "'LATIN7'", "'MACCE'", "'MACROMAN'", "'SJIS'", "'SWE7'", "'TIS620'", 
  "'UCS2'", "'UJIS'", "'UTF16'", "'UTF16LE'", "'UTF32'", "'UTF8'", "'UTF8MB3'", 
  "'UTF8MB4'"
};

std::vector<std::string> MSqlParser::_symbolicNames = {
  "", "SPACE", "AS", "CREATE", "SELECT", "FROM", "TABLE", "MAX", "SUM", 
  "AVG", "MIN", "COUNT", "ALL", "DISTINCT", "WHERE", "GROUP", "BY", "ORDER", 
  "HAVING", "NOT", "IS", "TRUE", "FALSE", "UNKNOWN", "BETWEEN", "AND", "IN", 
  "OR", "ASC", "DESC", "LIMIT", "OFFSET", "CONSTRAINT", "PRIMARY", "KEY", 
  "DEFAULT", "CHECK", "FOREIGN", "NULL_LITERAL", "INDEX", "UNIQUE", "DROP", 
  "ON", "INSERT", "INTO", "VALUES", "VALUE", "ANY", "SOME", "BINARY", "COLLATE", 
  "SOUNDS", "LIKE", "REGEXP", "ESCAPE", "RLIKE", "MEMBER", "OF", "ROW", 
  "EXISTS", "INTERVAL", "DIV", "MOD", "DELETE", "PARTITION", "USING", "BIT_STRING", 
  "INT", "CHAR", "FLOAT", "SIGNED", "UNSIGNED", "ZEROFILL", "STAR", "DIVIDE", 
  "MODULE", "PLUS", "MINUSMINUS", "MINUS", "EQUAL_SYMBOL", "GREATER_SYMBOL", 
  "LESS_SYMBOL", "EXCLAMATION_SYMBOL", "BIT_NOT_OP", "BIT_OR_OP", "BIT_AND_OP", 
  "BIT_XOR_OP", "DOT", "LR_BRACKET", "RR_BRACKET", "COMMA", "SEMI", "AT_SIGN", 
  "SINGLE_QUOTE_SYMB", "DOUBLE_QUOTE_SYMB", "REVERSE_QUOTE_SYMB", "COLON_SYMB", 
  "ARMSCII8", "ASCII", "BIG5", "CP1250", "CP1251", "CP1256", "CP1257", "CP850", 
  "CP852", "CP866", "CP932", "DEC8", "EUCJPMS", "EUCKR", "GB2312", "GBK", 
  "GEOSTD8", "GREEK", "HEBREW", "HP8", "KEYBCS2", "KOI8R", "KOI8U", "LATIN1", 
  "LATIN2", "LATIN5", "LATIN7", "MACCE", "MACROMAN", "SJIS", "SWE7", "TIS620", 
  "UCS2", "UJIS", "UTF16", "UTF16LE", "UTF32", "UTF8", "UTF8MB3", "UTF8MB4", 
  "START_NATIONAL_STRING_LITERAL", "STRING_LITERAL", "DECIMAL_LITERAL", 
  "HEXADECIMAL_LITERAL", "REAL_LITERAL", "NULL_SPEC_LITERAL", "STRING_CHARSET_NAME", 
  "DOT_ID", "ID", "REVERSE_QUOTE_ID", "TEXT_STRING", "LOCAL_ID", "GLOBAL_ID", 
  "ERROR_RECONGNIGION"
};

dfa::Vocabulary MSqlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MSqlParser::_tokenNames;

MSqlParser::Initializer::Initializer() {
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
    0x3, 0x98, 0x394, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x90, 0xa, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x96, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x9e, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xa1, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xa9, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0xad, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xb0, 0xb, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xb4, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0xb8, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0xbb, 0xa, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0xbe, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xc2, 0xa, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0xc5, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0xc8, 0xa, 0x7, 0x5, 
    0x7, 0xca, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xda, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xdf, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xe3, 0xa, 
    0xa, 0x5, 0xa, 0xe5, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0xec, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xf0, 
    0xa, 0xb, 0x5, 0xb, 0xf2, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xfc, 0xa, 0xb, 
    0x5, 0xb, 0xfe, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x108, 0xa, 0xb, 0x5, 0xb, 
    0x10a, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x10e, 0xa, 0xb, 0x5, 
    0xb, 0x110, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x117, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x12a, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x130, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x136, 0xa, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x139, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x143, 
    0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x146, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x149, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x14c, 0xa, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x14f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0x155, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x159, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x15c, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0x160, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0x163, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x167, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x16a, 0xa, 0x13, 0x5, 0x13, 0x16c, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x7, 0x14, 0x171, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x174, 
    0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0x17d, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x184, 0xa, 0x17, 0xc, 0x17, 
    0xe, 0x17, 0x187, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x18b, 
    0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x195, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x198, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x19c, 
    0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1a2, 
    0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 
    0x1c, 0x1a9, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1b1, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x1c1, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1ca, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1d3, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1d8, 0xa, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x5, 0x24, 0x1dd, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 
    0x27, 0x1e6, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1ea, 0xa, 
    0x27, 0x3, 0x27, 0x6, 0x27, 0x1ed, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 
    0x1ee, 0x3, 0x27, 0x5, 0x27, 0x1f2, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x1f6, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1fa, 
    0xa, 0x27, 0x5, 0x27, 0x1fc, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 
    0x200, 0xa, 0x28, 0x3, 0x29, 0x5, 0x29, 0x203, 0xa, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x209, 0xa, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x210, 0xa, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x21d, 
    0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x220, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x225, 0xa, 0x2d, 0x5, 0x2d, 0x227, 0xa, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x22c, 0xa, 0x2d, 0x5, 0x2d, 
    0x22e, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
    0x2f, 0x23b, 0xa, 0x2f, 0x5, 0x2f, 0x23d, 0xa, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
    0x246, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x7, 0x31, 0x24d, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x250, 0xb, 0x31, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 
    0x33, 0x258, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 
    0x25d, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x7, 0x36, 0x264, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x267, 0xb, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x5, 0x37, 0x271, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x279, 0xa, 0x38, 
    0xc, 0x38, 0xe, 0x38, 0x27c, 0xb, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x5, 0x39, 0x282, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x5, 0x39, 0x288, 0xa, 0x39, 0x3, 0x39, 0x7, 0x39, 0x28b, 
    0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x28e, 0xb, 0x39, 0x5, 0x39, 0x290, 
    0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x295, 0xa, 0x3a, 
    0xc, 0x3a, 0xe, 0x3a, 0x298, 0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2a0, 0xa, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2a5, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x2ab, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 
    0x2ae, 0xb, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2b2, 0xa, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2bc, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2c9, 0xa, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2cf, 0xa, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2d5, 0xa, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x5, 0x3c, 0x2e5, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x5, 0x3c, 0x2eb, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x2f4, 0xa, 0x3c, 0xc, 0x3c, 
    0xe, 0x3c, 0x2f7, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x307, 0xa, 0x3d, 
    0xc, 0x3d, 0xe, 0x3d, 0x30a, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 0x313, 0xa, 0x3d, 
    0xd, 0x3d, 0xe, 0x3d, 0x314, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x5, 0x3d, 0x322, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 
    0x333, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x336, 0xb, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x33d, 0xa, 0x3f, 
    0xc, 0x3f, 0xe, 0x3f, 0x340, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
    0x344, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x34a, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x354, 0xa, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x5, 0x42, 0x358, 0xa, 0x42, 0x3, 0x42, 0x5, 0x42, 0x35b, 
    0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x35f, 0xa, 0x42, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x365, 0xa, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x36b, 0xa, 0x43, 0x7, 0x43, 
    0x36d, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x370, 0xb, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 
    0x43, 0x379, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x5, 0x43, 0x37f, 0xa, 0x43, 0x7, 0x43, 0x381, 0xa, 0x43, 0xc, 0x43, 
    0xe, 0x43, 0x384, 0xb, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 
    0x389, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x38d, 0xa, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x392, 0xa, 0x44, 0x3, 0x44, 
    0x2, 0x5, 0x74, 0x76, 0x78, 0x45, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
    0x2, 0xf, 0x3, 0x2, 0x48, 0x49, 0x3, 0x2, 0x1e, 0x1f, 0x4, 0x2, 0x3f, 
    0x40, 0x4b, 0x50, 0x3, 0x2, 0x17, 0x18, 0x4, 0x2, 0x28, 0x28, 0x90, 
    0x90, 0x6, 0x2, 0x15, 0x15, 0x4e, 0x4e, 0x50, 0x50, 0x54, 0x55, 0x3, 
    0x2, 0x9, 0xc, 0x3, 0x2, 0x2f, 0x30, 0x4, 0x2, 0x15, 0x15, 0x54, 0x54, 
    0x3, 0x2, 0x17, 0x19, 0x4, 0x2, 0x37, 0x37, 0x39, 0x39, 0x4, 0x2, 0xe, 
    0xe, 0x31, 0x32, 0x3, 0x2, 0x96, 0x97, 0x2, 0x3fc, 0x2, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x91, 0x3, 0x2, 0x2, 0x2, 0x6, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x10, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x14, 0x116, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x118, 0x3, 0x2, 0x2, 0x2, 0x18, 0x11d, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x125, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x154, 0x3, 0x2, 0x2, 0x2, 0x24, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x175, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x178, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x199, 0x3, 0x2, 0x2, 0x2, 0x36, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1d2, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1d9, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1fb, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x50, 0x202, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x211, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x58, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x22f, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x245, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x247, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x249, 0x3, 0x2, 0x2, 0x2, 0x62, 0x251, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x253, 0x3, 0x2, 0x2, 0x2, 0x66, 0x25c, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x260, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x268, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x275, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x28f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x291, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2a4, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x78, 0x321, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x337, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x339, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x343, 0x3, 0x2, 0x2, 0x2, 0x80, 0x349, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x84, 0x360, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x391, 0x3, 0x2, 0x2, 0x2, 0x88, 0x90, 0x5, 0x4, 0x3, 0x2, 0x89, 
    0x90, 0x5, 0x18, 0xd, 0x2, 0x8a, 0x90, 0x5, 0x16, 0xc, 0x2, 0x8b, 0x90, 
    0x5, 0x1e, 0x10, 0x2, 0x8c, 0x90, 0x5, 0x6c, 0x37, 0x2, 0x8d, 0x90, 
    0x5, 0x80, 0x41, 0x2, 0x8e, 0x90, 0x5, 0x20, 0x11, 0x2, 0x8f, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8f, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x3, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x5, 0x2, 0x2, 
    0x92, 0x93, 0x7, 0x8, 0x2, 0x2, 0x93, 0x95, 0x5, 0x68, 0x35, 0x2, 0x94, 
    0x96, 0x5, 0x6, 0x4, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 
    0x5d, 0x2, 0x2, 0x98, 0x5, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x5a, 
    0x2, 0x2, 0x9a, 0x9f, 0x5, 0x8, 0x5, 0x2, 0x9b, 0x9c, 0x7, 0x5c, 0x2, 
    0x2, 0x9c, 0x9e, 0x5, 0x8, 0x5, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x5b, 0x2, 0x2, 0xa3, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x62, 0x32, 0x2, 0xa5, 0xa6, 0x5, 0xa, 
    0x6, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x14, 0xb, 
    0x2, 0xa8, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xae, 0x5, 0xc, 0x7, 0x2, 0xab, 
    0xad, 0x5, 0x12, 0xa, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb3, 0x7, 0x46, 0x2, 0x2, 0xb2, 0xb4, 0x5, 0xe, 0x8, 
    0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xca, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb7, 0x7, 0x45, 0x2, 0x2, 0xb6, 
    0xb8, 0x5, 0xe, 0x8, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x9, 
    0x2, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbe, 0x7, 0x4a, 0x2, 
    0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xca, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0x7, 0x47, 0x2, 0x2, 0xc0, 
    0xc2, 0x5, 0x10, 0x9, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc5, 0x9, 
    0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x7, 0x4a, 0x2, 
    0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xca, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x5a, 0x2, 0x2, 0xcc, 0xcd, 0x5, 
    0x44, 0x23, 0x2, 0xcd, 0xce, 0x7, 0x5b, 0x2, 0x2, 0xce, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x5a, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x44, 0x23, 
    0x2, 0xd1, 0xd2, 0x7, 0x5c, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x44, 0x23, 0x2, 
    0xd3, 0xd4, 0x7, 0x5b, 0x2, 0x2, 0xd4, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xec, 0x5, 0x50, 0x29, 0x2, 0xd6, 0xd7, 0x7, 0x25, 0x2, 0x2, 0xd7, 0xec, 
    0x5, 0x52, 0x2a, 0x2, 0xd8, 0xda, 0x7, 0x23, 0x2, 0x2, 0xd9, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xec, 0x7, 0x24, 0x2, 0x2, 0xdc, 0xde, 0x7, 0x2a, 0x2, 
    0x2, 0xdd, 0xdf, 0x7, 0x24, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xec, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe2, 0x7, 0x22, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0x62, 0x32, 0x2, 0xe2, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x26, 0x2, 
    0x2, 0xe7, 0xe8, 0x7, 0x5a, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x74, 0x3b, 0x2, 
    0xe9, 0xea, 0x7, 0x5b, 0x2, 0x2, 0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0x13, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x7, 0x22, 
    0x2, 0x2, 0xee, 0xf0, 0x5, 0x62, 0x32, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x23, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x24, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x5a, 0x2, 0x2, 0xf6, 0xf7, 0x5, 
    0x62, 0x32, 0x2, 0xf7, 0xf8, 0x7, 0x5b, 0x2, 0x2, 0xf8, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xfb, 0x7, 0x22, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x62, 
    0x32, 0x2, 0xfb, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x100, 0x7, 0x2a, 0x2, 0x2, 0x100, 0x101, 0x7, 0x24, 0x2, 0x2, 0x101, 
    0x102, 0x7, 0x5a, 0x2, 0x2, 0x102, 0x103, 0x5, 0x62, 0x32, 0x2, 0x103, 
    0x104, 0x7, 0x5b, 0x2, 0x2, 0x104, 0x117, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x107, 0x7, 0x22, 0x2, 0x2, 0x106, 0x108, 0x5, 0x62, 0x32, 0x2, 0x107, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0x105, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x117, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x10d, 0x7, 0x22, 0x2, 0x2, 0x10c, 0x10e, 0x5, 0x62, 0x32, 0x2, 0x10d, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x112, 0x7, 0x26, 0x2, 0x2, 0x112, 0x113, 0x7, 0x5a, 0x2, 0x2, 0x113, 
    0x114, 0x5, 0x74, 0x3b, 0x2, 0x114, 0x115, 0x7, 0x5b, 0x2, 0x2, 0x115, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x116, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x116, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x109, 0x3, 0x2, 0x2, 0x2, 0x116, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x15, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 
    0x2b, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x8, 0x2, 0x2, 0x11a, 0x11b, 0x5, 
    0x6a, 0x36, 0x2, 0x11b, 0x11c, 0x7, 0x5d, 0x2, 0x2, 0x11c, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x5, 0x2, 0x2, 0x11e, 0x11f, 0x7, 
    0x29, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x62, 0x32, 0x2, 0x120, 0x121, 0x7, 
    0x2c, 0x2, 0x2, 0x121, 0x122, 0x5, 0x68, 0x35, 0x2, 0x122, 0x123, 0x5, 
    0x1a, 0xe, 0x2, 0x123, 0x124, 0x7, 0x5d, 0x2, 0x2, 0x124, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x5a, 0x2, 0x2, 0x126, 0x129, 0x5, 
    0x1c, 0xf, 0x2, 0x127, 0x128, 0x7, 0x5c, 0x2, 0x2, 0x128, 0x12a, 0x5, 
    0x1c, 0xf, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 
    0x5b, 0x2, 0x2, 0x12c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 0x5, 
    0x62, 0x32, 0x2, 0x12e, 0x130, 0x7, 0x8c, 0x2, 0x2, 0x12f, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x5a, 0x2, 0x2, 0x132, 0x133, 0x5, 
    0x44, 0x23, 0x2, 0x133, 0x134, 0x7, 0x5b, 0x2, 0x2, 0x134, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x131, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x136, 0x138, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 0x9, 
    0x3, 0x2, 0x2, 0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x2b, 
    0x2, 0x2, 0x13b, 0x13c, 0x7, 0x29, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x62, 
    0x32, 0x2, 0x13d, 0x13e, 0x7, 0x5d, 0x2, 0x2, 0x13e, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x140, 0x7, 0x6, 0x2, 0x2, 0x140, 0x142, 0x5, 0x22, 
    0x12, 0x2, 0x141, 0x143, 0x5, 0x2a, 0x16, 0x2, 0x142, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x146, 0x5, 0x2c, 0x17, 0x2, 0x145, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x149, 0x5, 0x30, 0x19, 0x2, 0x148, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x14c, 0x5, 0x32, 0x1a, 0x2, 0x14b, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14f, 0x5, 0x36, 0x1c, 0x2, 0x14e, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x151, 0x7, 0x5d, 0x2, 0x2, 0x151, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x155, 0x7, 0x4b, 0x2, 0x2, 0x153, 0x155, 0x5, 0x24, 
    0x13, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x5c, 
    0x2, 0x2, 0x157, 0x159, 0x5, 0x24, 0x13, 0x2, 0x158, 0x156, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x162, 0x5, 0x58, 0x2d, 
    0x2, 0x15e, 0x160, 0x7, 0x4, 0x2, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x163, 0x5, 0x62, 0x32, 0x2, 0x162, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x169, 0x5, 0x5a, 0x2e, 0x2, 0x165, 0x167, 0x7, 0x4, 0x2, 
    0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x5, 0x62, 0x32, 
    0x2, 0x169, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0x164, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x16d, 0x172, 0x5, 0x68, 0x35, 0x2, 0x16e, 0x16f, 0x7, 0x5c, 0x2, 0x2, 
    0x16f, 0x171, 0x5, 0x68, 0x35, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 
    0x171, 0x174, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 
    0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x27, 0x3, 0x2, 0x2, 0x2, 0x174, 
    0x172, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x10, 0x2, 0x2, 0x176, 
    0x177, 0x5, 0x74, 0x3b, 0x2, 0x177, 0x29, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x179, 0x7, 0x7, 0x2, 0x2, 0x179, 0x17c, 0x5, 0x26, 0x14, 0x2, 0x17a, 
    0x17b, 0x7, 0x10, 0x2, 0x2, 0x17b, 0x17d, 0x5, 0x74, 0x3b, 0x2, 0x17c, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x11, 0x2, 0x2, 0x17f, 
    0x180, 0x7, 0x12, 0x2, 0x2, 0x180, 0x185, 0x5, 0x2e, 0x18, 0x2, 0x181, 
    0x182, 0x7, 0x5c, 0x2, 0x2, 0x182, 0x184, 0x5, 0x2e, 0x18, 0x2, 0x183, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x184, 0x187, 0x3, 0x2, 0x2, 0x2, 0x185, 
    0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18a, 
    0x5, 0x58, 0x2d, 0x2, 0x189, 0x18b, 0x9, 0x3, 0x2, 0x2, 0x18a, 0x189, 
    0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x14, 0x2, 0x2, 0x18d, 0x18e, 0x5, 
    0x74, 0x3b, 0x2, 0x18e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 
    0x13, 0x2, 0x2, 0x190, 0x191, 0x7, 0x12, 0x2, 0x2, 0x191, 0x196, 0x5, 
    0x34, 0x1b, 0x2, 0x192, 0x193, 0x7, 0x5c, 0x2, 0x2, 0x193, 0x195, 0x5, 
    0x34, 0x1b, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 0x195, 0x198, 0x3, 
    0x2, 0x2, 0x2, 0x196, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 
    0x2, 0x2, 0x2, 0x197, 0x33, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x19b, 0x5, 0x58, 0x2d, 0x2, 0x19a, 0x19c, 0x9, 0x3, 
    0x2, 0x2, 0x19b, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a8, 0x7, 0x20, 
    0x2, 0x2, 0x19e, 0x19f, 0x5, 0x44, 0x23, 0x2, 0x19f, 0x1a0, 0x7, 0x5c, 
    0x2, 0x2, 0x1a0, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 
    0x2, 0x2, 0x1a3, 0x1a9, 0x5, 0x44, 0x23, 0x2, 0x1a4, 0x1a5, 0x5, 0x44, 
    0x23, 0x2, 0x1a5, 0x1a6, 0x7, 0x21, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x44, 
    0x23, 0x2, 0x1a7, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a1, 0x3, 0x2, 
    0x2, 0x2, 0x1a8, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x1aa, 0x1b1, 0x7, 0x1b, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x57, 0x2, 
    0x2, 0x1ac, 0x1b1, 0x7, 0x57, 0x2, 0x2, 0x1ad, 0x1b1, 0x7, 0x1d, 0x2, 
    0x2, 0x1ae, 0x1af, 0x7, 0x56, 0x2, 0x2, 0x1af, 0x1b1, 0x7, 0x56, 0x2, 
    0x2, 0x1b0, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ab, 0x3, 0x2, 0x2, 
    0x2, 0x1b0, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1c1, 0x7, 0x51, 0x2, 
    0x2, 0x1b3, 0x1c1, 0x7, 0x52, 0x2, 0x2, 0x1b4, 0x1c1, 0x7, 0x53, 0x2, 
    0x2, 0x1b5, 0x1b6, 0x7, 0x53, 0x2, 0x2, 0x1b6, 0x1c1, 0x7, 0x51, 0x2, 
    0x2, 0x1b7, 0x1b8, 0x7, 0x52, 0x2, 0x2, 0x1b8, 0x1c1, 0x7, 0x51, 0x2, 
    0x2, 0x1b9, 0x1ba, 0x7, 0x53, 0x2, 0x2, 0x1ba, 0x1c1, 0x7, 0x52, 0x2, 
    0x2, 0x1bb, 0x1bc, 0x7, 0x54, 0x2, 0x2, 0x1bc, 0x1c1, 0x7, 0x51, 0x2, 
    0x2, 0x1bd, 0x1be, 0x7, 0x53, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0x51, 0x2, 
    0x2, 0x1bf, 0x1c1, 0x7, 0x52, 0x2, 0x2, 0x1c0, 0x1b2, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1b4, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1b7, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1bb, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x1c2, 0x1c3, 0x7, 0x53, 0x2, 0x2, 0x1c3, 0x1ca, 0x7, 0x53, 0x2, 0x2, 
    0x1c4, 0x1c5, 0x7, 0x52, 0x2, 0x2, 0x1c5, 0x1ca, 0x7, 0x52, 0x2, 0x2, 
    0x1c6, 0x1ca, 0x7, 0x57, 0x2, 0x2, 0x1c7, 0x1ca, 0x7, 0x58, 0x2, 0x2, 
    0x1c8, 0x1ca, 0x7, 0x56, 0x2, 0x2, 0x1c9, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c8, 0x3, 0x2, 0x2, 0x2, 
    0x1ca, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x9, 0x4, 0x2, 0x2, 0x1cc, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x50, 0x2, 0x2, 0x1ce, 
    0x1d3, 0x7, 0x52, 0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x50, 0x2, 0x2, 0x1d0, 
    0x1d1, 0x7, 0x52, 0x2, 0x2, 0x1d1, 0x1d3, 0x7, 0x52, 0x2, 0x2, 0x1d2, 
    0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d3, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d8, 0x5, 0x62, 0x32, 0x2, 0x1d5, 
    0x1d8, 0x5, 0x4a, 0x26, 0x2, 0x1d6, 0x1d8, 0x5, 0x44, 0x23, 0x2, 0x1d7, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 
    0x7, 0x8d, 0x2, 0x2, 0x1da, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dd, 
    0x7, 0x91, 0x2, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 
    0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 
    0x7, 0x8e, 0x2, 0x2, 0x1df, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 
    0x9, 0x5, 0x2, 0x2, 0x1e1, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 
    0x95, 0x2, 0x2, 0x1e3, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e6, 0x7, 
    0x91, 0x2, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 
    0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1ea, 0x7, 
    0x8c, 0x2, 0x2, 0x1e8, 0x1ea, 0x7, 0x8b, 0x2, 0x2, 0x1e9, 0x1e5, 0x3, 
    0x2, 0x2, 0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ec, 0x3, 
    0x2, 0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0x8c, 0x2, 0x2, 0x1ec, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 
    0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1fc, 0x3, 
    0x2, 0x2, 0x2, 0x1f0, 0x1f2, 0x7, 0x91, 0x2, 0x2, 0x1f1, 0x1f0, 0x3, 
    0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x1f3, 0x1f6, 0x7, 0x8c, 0x2, 0x2, 0x1f4, 0x1f6, 0x7, 
    0x8b, 0x2, 0x2, 0x1f5, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f4, 0x3, 
    0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 
    0x34, 0x2, 0x2, 0x1f8, 0x1fa, 0x5, 0x4e, 0x28, 0x2, 0x1f9, 0x1f7, 0x3, 
    0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 0x3, 
    0x2, 0x2, 0x2, 0x1fb, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1f5, 0x3, 
    0x2, 0x2, 0x2, 0x1fc, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 0x5, 0x62, 
    0x32, 0x2, 0x1fe, 0x200, 0x7, 0x8c, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 
    0x2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x203, 0x7, 0x15, 0x2, 0x2, 0x202, 0x201, 0x3, 0x2, 0x2, 
    0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 
    0x2, 0x204, 0x205, 0x9, 0x6, 0x2, 0x2, 0x205, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x210, 0x7, 0x28, 0x2, 0x2, 0x207, 0x209, 0x5, 0x54, 0x2b, 0x2, 
    0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x210, 0x5, 0x56, 0x2c, 0x2, 
    0x20b, 0x20c, 0x7, 0x5a, 0x2, 0x2, 0x20c, 0x20d, 0x5, 0x74, 0x3b, 0x2, 
    0x20d, 0x20e, 0x7, 0x5b, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 
    0x20f, 0x206, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x20f, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x210, 0x53, 0x3, 0x2, 0x2, 0x2, 0x211, 
    0x212, 0x9, 0x7, 0x2, 0x2, 0x212, 0x55, 0x3, 0x2, 0x2, 0x2, 0x213, 0x220, 
    0x5, 0x4c, 0x27, 0x2, 0x214, 0x220, 0x5, 0x44, 0x23, 0x2, 0x215, 0x216, 
    0x7, 0x50, 0x2, 0x2, 0x216, 0x220, 0x5, 0x44, 0x23, 0x2, 0x217, 0x220, 
    0x5, 0x46, 0x24, 0x2, 0x218, 0x220, 0x5, 0x48, 0x25, 0x2, 0x219, 0x220, 
    0x7, 0x8f, 0x2, 0x2, 0x21a, 0x220, 0x7, 0x44, 0x2, 0x2, 0x21b, 0x21d, 
    0x7, 0x15, 0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 
    0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 
    0x9, 0x6, 0x2, 0x2, 0x21f, 0x213, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x214, 
    0x3, 0x2, 0x2, 0x2, 0x21f, 0x215, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x217, 
    0x3, 0x2, 0x2, 0x2, 0x21f, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x219, 
    0x3, 0x2, 0x2, 0x2, 0x21f, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x21c, 
    0x3, 0x2, 0x2, 0x2, 0x220, 0x57, 0x3, 0x2, 0x2, 0x2, 0x221, 0x226, 0x5, 
    0x62, 0x32, 0x2, 0x222, 0x224, 0x5, 0x66, 0x34, 0x2, 0x223, 0x225, 0x5, 
    0x66, 0x34, 0x2, 0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x225, 0x227, 0x3, 0x2, 0x2, 0x2, 0x226, 0x222, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 0x22e, 0x3, 
    0x2, 0x2, 0x2, 0x228, 0x229, 0xb, 0x2, 0x2, 0x2, 0x229, 0x22b, 0x5, 
    0x66, 0x34, 0x2, 0x22a, 0x22c, 0x5, 0x66, 0x34, 0x2, 0x22b, 0x22a, 0x3, 
    0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22e, 0x3, 
    0x2, 0x2, 0x2, 0x22d, 0x221, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x22e, 0x59, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x5, 0x5c, 
    0x2f, 0x2, 0x230, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x9, 0x8, 
    0x2, 0x2, 0x232, 0x233, 0x7, 0x5a, 0x2, 0x2, 0x233, 0x234, 0x5, 0x5e, 
    0x30, 0x2, 0x234, 0x235, 0x7, 0x5b, 0x2, 0x2, 0x235, 0x246, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x237, 0x7, 0xd, 0x2, 0x2, 0x237, 0x23c, 0x7, 0x5a, 
    0x2, 0x2, 0x238, 0x23d, 0x7, 0x4b, 0x2, 0x2, 0x239, 0x23b, 0x5, 0x5e, 
    0x30, 0x2, 0x23a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 
    0x2, 0x2, 0x23b, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x23e, 0x246, 0x7, 0x5b, 0x2, 0x2, 0x23f, 0x240, 0x7, 0xd, 
    0x2, 0x2, 0x240, 0x241, 0x7, 0x5a, 0x2, 0x2, 0x241, 0x242, 0x7, 0xf, 
    0x2, 0x2, 0x242, 0x243, 0x5, 0x60, 0x31, 0x2, 0x243, 0x244, 0x7, 0x5b, 
    0x2, 0x2, 0x244, 0x246, 0x3, 0x2, 0x2, 0x2, 0x245, 0x231, 0x3, 0x2, 
    0x2, 0x2, 0x245, 0x236, 0x3, 0x2, 0x2, 0x2, 0x245, 0x23f, 0x3, 0x2, 
    0x2, 0x2, 0x246, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x5, 0x58, 
    0x2d, 0x2, 0x248, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24e, 0x5, 0x58, 
    0x2d, 0x2, 0x24a, 0x24b, 0x7, 0x5c, 0x2, 0x2, 0x24b, 0x24d, 0x5, 0x58, 
    0x2d, 0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x24f, 0x61, 0x3, 0x2, 0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x251, 0x252, 0x7, 0x93, 0x2, 0x2, 0x252, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x253, 0x257, 0x5, 0x62, 0x32, 0x2, 0x254, 0x258, 0x7, 0x92, 0x2, 
    0x2, 0x255, 0x256, 0x7, 0x59, 0x2, 0x2, 0x256, 0x258, 0x5, 0x62, 0x32, 
    0x2, 0x257, 0x254, 0x3, 0x2, 0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 
    0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x259, 0x25d, 0x7, 0x92, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x59, 0x2, 0x2, 
    0x25b, 0x25d, 0x5, 0x62, 0x32, 0x2, 0x25c, 0x259, 0x3, 0x2, 0x2, 0x2, 
    0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x25e, 
    0x25f, 0x5, 0x64, 0x33, 0x2, 0x25f, 0x69, 0x3, 0x2, 0x2, 0x2, 0x260, 
    0x265, 0x5, 0x68, 0x35, 0x2, 0x261, 0x262, 0x7, 0x5c, 0x2, 0x2, 0x262, 
    0x264, 0x5, 0x68, 0x35, 0x2, 0x263, 0x261, 0x3, 0x2, 0x2, 0x2, 0x264, 
    0x267, 0x3, 0x2, 0x2, 0x2, 0x265, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 
    0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x267, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x7, 0x2d, 0x2, 0x2, 0x269, 0x26a, 
    0x7, 0x2e, 0x2, 0x2, 0x26a, 0x270, 0x5, 0x68, 0x35, 0x2, 0x26b, 0x26c, 
    0x7, 0x42, 0x2, 0x2, 0x26c, 0x26d, 0x7, 0x5a, 0x2, 0x2, 0x26d, 0x26e, 
    0x5, 0x6e, 0x38, 0x2, 0x26e, 0x26f, 0x7, 0x5b, 0x2, 0x2, 0x26f, 0x271, 
    0x3, 0x2, 0x2, 0x2, 0x270, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 
    0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 
    0x5, 0x70, 0x39, 0x2, 0x273, 0x274, 0x7, 0x5d, 0x2, 0x2, 0x274, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x275, 0x27a, 0x5, 0x62, 0x32, 0x2, 0x276, 0x277, 
    0x7, 0x5c, 0x2, 0x2, 0x277, 0x279, 0x5, 0x62, 0x32, 0x2, 0x278, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x279, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x290, 0x5, 
    0x20, 0x11, 0x2, 0x27e, 0x27f, 0x9, 0x9, 0x2, 0x2, 0x27f, 0x281, 0x7, 
    0x5a, 0x2, 0x2, 0x280, 0x282, 0x5, 0x7c, 0x3f, 0x2, 0x281, 0x280, 0x3, 
    0x2, 0x2, 0x2, 0x281, 0x282, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 
    0x2, 0x2, 0x2, 0x283, 0x28c, 0x7, 0x5b, 0x2, 0x2, 0x284, 0x285, 0x7, 
    0x5c, 0x2, 0x2, 0x285, 0x287, 0x7, 0x5a, 0x2, 0x2, 0x286, 0x288, 0x5, 
    0x7c, 0x3f, 0x2, 0x287, 0x286, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 
    0x2, 0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 0x7, 
    0x5b, 0x2, 0x2, 0x28a, 0x284, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28e, 0x3, 
    0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 
    0x2, 0x2, 0x2, 0x28d, 0x290, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28c, 0x3, 
    0x2, 0x2, 0x2, 0x28f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x27e, 0x3, 
    0x2, 0x2, 0x2, 0x290, 0x71, 0x3, 0x2, 0x2, 0x2, 0x291, 0x296, 0x5, 0x74, 
    0x3b, 0x2, 0x292, 0x293, 0x7, 0x5c, 0x2, 0x2, 0x293, 0x295, 0x5, 0x74, 
    0x3b, 0x2, 0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x295, 0x298, 0x3, 0x2, 
    0x2, 0x2, 0x296, 0x294, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 
    0x2, 0x2, 0x297, 0x73, 0x3, 0x2, 0x2, 0x2, 0x298, 0x296, 0x3, 0x2, 0x2, 
    0x2, 0x299, 0x29a, 0x8, 0x3b, 0x1, 0x2, 0x29a, 0x29b, 0x9, 0xa, 0x2, 
    0x2, 0x29b, 0x2a5, 0x5, 0x74, 0x3b, 0x6, 0x29c, 0x29d, 0x5, 0x76, 0x3c, 
    0x2, 0x29d, 0x29f, 0x7, 0x16, 0x2, 0x2, 0x29e, 0x2a0, 0x7, 0x15, 0x2, 
    0x2, 0x29f, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 
    0x2, 0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x9, 0xb, 0x2, 
    0x2, 0x2a2, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a5, 0x5, 0x76, 0x3c, 
    0x2, 0x2a4, 0x299, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x29c, 0x3, 0x2, 0x2, 
    0x2, 0x2a4, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2ac, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2a7, 0xc, 0x5, 0x2, 0x2, 0x2a7, 0x2a8, 0x5, 0x38, 0x1d, 
    0x2, 0x2a8, 0x2a9, 0x5, 0x74, 0x3b, 0x6, 0x2a9, 0x2ab, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ae, 0x3, 0x2, 0x2, 
    0x2, 0x2ac, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 
    0x2, 0x2ad, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 
    0x2af, 0x2b1, 0x8, 0x3c, 0x1, 0x2, 0x2b0, 0x2b2, 0x7, 0x96, 0x2, 0x2, 
    0x2b1, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 
    0x2b2, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x5, 0x78, 0x3d, 0x2, 
    0x2b4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0xc, 0xa, 0x2, 0x2, 
    0x2b6, 0x2b7, 0x5, 0x3a, 0x1e, 0x2, 0x2b7, 0x2b8, 0x5, 0x76, 0x3c, 0xb, 
    0x2b8, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2bb, 0xc, 0x8, 0x2, 0x2, 
    0x2ba, 0x2bc, 0x7, 0x15, 0x2, 0x2, 0x2bb, 0x2ba, 0x3, 0x2, 0x2, 0x2, 
    0x2bb, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
    0x2bd, 0x2be, 0x7, 0x1a, 0x2, 0x2, 0x2be, 0x2bf, 0x5, 0x76, 0x3c, 0x2, 
    0x2bf, 0x2c0, 0x7, 0x1b, 0x2, 0x2, 0x2c0, 0x2c1, 0x5, 0x76, 0x3c, 0x9, 
    0x2c1, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0xc, 0x7, 0x2, 0x2, 
    0x2c3, 0x2c4, 0x7, 0x35, 0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x36, 0x2, 0x2, 
    0x2c5, 0x2f4, 0x5, 0x76, 0x3c, 0x8, 0x2c6, 0x2c8, 0xc, 0x5, 0x2, 0x2, 
    0x2c7, 0x2c9, 0x7, 0x15, 0x2, 0x2, 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 
    0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 
    0x2ca, 0x2cb, 0x9, 0xc, 0x2, 0x2, 0x2cb, 0x2f4, 0x5, 0x76, 0x3c, 0x6, 
    0x2cc, 0x2ce, 0xc, 0xc, 0x2, 0x2, 0x2cd, 0x2cf, 0x7, 0x15, 0x2, 0x2, 
    0x2ce, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
    0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0x1c, 0x2, 0x2, 
    0x2d1, 0x2d4, 0x7, 0x5a, 0x2, 0x2, 0x2d2, 0x2d5, 0x5, 0x20, 0x11, 0x2, 
    0x2d3, 0x2d5, 0x5, 0x72, 0x3a, 0x2, 0x2d4, 0x2d2, 0x3, 0x2, 0x2, 0x2, 
    0x2d4, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x3, 0x2, 0x2, 0x2, 
    0x2d6, 0x2d7, 0x7, 0x5b, 0x2, 0x2, 0x2d7, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2d8, 0x2d9, 0xc, 0xb, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x16, 0x2, 0x2, 
    0x2da, 0x2f4, 0x5, 0x50, 0x29, 0x2, 0x2db, 0x2dc, 0xc, 0x9, 0x2, 0x2, 
    0x2dc, 0x2dd, 0x5, 0x3a, 0x1e, 0x2, 0x2dd, 0x2de, 0x9, 0xd, 0x2, 0x2, 
    0x2de, 0x2df, 0x7, 0x5a, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 0x20, 0x11, 0x2, 
    0x2e0, 0x2e1, 0x7, 0x5b, 0x2, 0x2, 0x2e1, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2e2, 0x2e4, 0xc, 0x6, 0x2, 0x2, 0x2e3, 0x2e5, 0x7, 0x15, 0x2, 0x2, 
    0x2e4, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 
    0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x7, 0x36, 0x2, 0x2, 
    0x2e7, 0x2ea, 0x5, 0x76, 0x3c, 0x2, 0x2e8, 0x2e9, 0x7, 0x38, 0x2, 0x2, 
    0x2e9, 0x2eb, 0x7, 0x8c, 0x2, 0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 
    0x2ea, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2ec, 0x2ed, 0xc, 0x3, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x3a, 0x2, 0x2, 
    0x2ee, 0x2ef, 0x7, 0x3b, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0x5a, 0x2, 0x2, 
    0x2f0, 0x2f1, 0x5, 0x76, 0x3c, 0x2, 0x2f1, 0x2f2, 0x7, 0x5b, 0x2, 0x2, 
    0x2f2, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2b5, 0x3, 0x2, 0x2, 0x2, 
    0x2f3, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2c2, 0x3, 0x2, 0x2, 0x2, 
    0x2f3, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2cc, 0x3, 0x2, 0x2, 0x2, 
    0x2f3, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2db, 0x3, 0x2, 0x2, 0x2, 
    0x2f3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2ec, 0x3, 0x2, 0x2, 0x2, 
    0x2f4, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
    0x2f5, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
    0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x8, 0x3d, 0x1, 0x2, 0x2f9, 
    0x322, 0x5, 0x56, 0x2c, 0x2, 0x2fa, 0x322, 0x5, 0x58, 0x2d, 0x2, 0x2fb, 
    0x322, 0x5, 0x5a, 0x2e, 0x2, 0x2fc, 0x322, 0x5, 0x7a, 0x3e, 0x2, 0x2fd, 
    0x2fe, 0x5, 0x54, 0x2b, 0x2, 0x2fe, 0x2ff, 0x5, 0x78, 0x3d, 0xb, 0x2ff, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x7, 0x33, 0x2, 0x2, 0x301, 
    0x322, 0x5, 0x78, 0x3d, 0xa, 0x302, 0x303, 0x7, 0x5a, 0x2, 0x2, 0x303, 
    0x308, 0x5, 0x74, 0x3b, 0x2, 0x304, 0x305, 0x7, 0x5c, 0x2, 0x2, 0x305, 
    0x307, 0x5, 0x74, 0x3b, 0x2, 0x306, 0x304, 0x3, 0x2, 0x2, 0x2, 0x307, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 0x308, 
    0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30a, 
    0x308, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x7, 0x5b, 0x2, 0x2, 0x30c, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x3c, 0x2, 0x2, 0x30e, 
    0x30f, 0x7, 0x5a, 0x2, 0x2, 0x30f, 0x312, 0x5, 0x74, 0x3b, 0x2, 0x310, 
    0x311, 0x7, 0x5c, 0x2, 0x2, 0x311, 0x313, 0x5, 0x74, 0x3b, 0x2, 0x312, 
    0x310, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x3, 0x2, 0x2, 0x2, 0x314, 
    0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 
    0x316, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 0x7, 0x5b, 0x2, 0x2, 0x317, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x7, 0x3d, 0x2, 0x2, 0x319, 
    0x31a, 0x7, 0x5a, 0x2, 0x2, 0x31a, 0x31b, 0x5, 0x20, 0x11, 0x2, 0x31b, 
    0x31c, 0x7, 0x5b, 0x2, 0x2, 0x31c, 0x322, 0x3, 0x2, 0x2, 0x2, 0x31d, 
    0x31e, 0x7, 0x5a, 0x2, 0x2, 0x31e, 0x31f, 0x5, 0x20, 0x11, 0x2, 0x31f, 
    0x320, 0x7, 0x5b, 0x2, 0x2, 0x320, 0x322, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x2f8, 0x3, 0x2, 0x2, 0x2, 0x321, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x2fb, 0x3, 0x2, 0x2, 0x2, 0x321, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x2fd, 0x3, 0x2, 0x2, 0x2, 0x321, 0x300, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x302, 0x3, 0x2, 0x2, 0x2, 0x321, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x318, 0x3, 0x2, 0x2, 0x2, 0x321, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x322, 
    0x334, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0xc, 0x5, 0x2, 0x2, 0x324, 
    0x325, 0x5, 0x3c, 0x1f, 0x2, 0x325, 0x326, 0x5, 0x78, 0x3d, 0x6, 0x326, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0xc, 0x4, 0x2, 0x2, 0x328, 
    0x329, 0x5, 0x3e, 0x20, 0x2, 0x329, 0x32a, 0x5, 0x78, 0x3d, 0x5, 0x32a, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0xc, 0x3, 0x2, 0x2, 0x32c, 
    0x32d, 0x5, 0x40, 0x21, 0x2, 0x32d, 0x32e, 0x5, 0x78, 0x3d, 0x4, 0x32e, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0xc, 0xd, 0x2, 0x2, 0x330, 
    0x331, 0x7, 0x34, 0x2, 0x2, 0x331, 0x333, 0x5, 0x4e, 0x28, 0x2, 0x332, 
    0x323, 0x3, 0x2, 0x2, 0x2, 0x332, 0x327, 0x3, 0x2, 0x2, 0x2, 0x332, 
    0x32b, 0x3, 0x2, 0x2, 0x2, 0x332, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x336, 0x3, 0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x334, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x335, 0x79, 0x3, 0x2, 0x2, 0x2, 0x336, 0x334, 
    0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 0x9, 0xe, 0x2, 0x2, 0x338, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x339, 0x33e, 0x5, 0x7e, 0x40, 0x2, 0x33a, 0x33b, 0x7, 
    0x5c, 0x2, 0x2, 0x33b, 0x33d, 0x5, 0x7e, 0x40, 0x2, 0x33c, 0x33a, 0x3, 
    0x2, 0x2, 0x2, 0x33d, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 
    0x2, 0x2, 0x2, 0x33e, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x344, 0x5, 0x74, 
    0x3b, 0x2, 0x342, 0x344, 0x7, 0x25, 0x2, 0x2, 0x343, 0x341, 0x3, 0x2, 
    0x2, 0x2, 0x343, 0x342, 0x3, 0x2, 0x2, 0x2, 0x344, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x345, 0x34a, 0x5, 0x82, 0x42, 0x2, 0x346, 0x347, 0x5, 0x84, 0x43, 
    0x2, 0x347, 0x348, 0x7, 0x5d, 0x2, 0x2, 0x348, 0x34a, 0x3, 0x2, 0x2, 
    0x2, 0x349, 0x345, 0x3, 0x2, 0x2, 0x2, 0x349, 0x346, 0x3, 0x2, 0x2, 
    0x2, 0x34a, 0x81, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x7, 0x41, 0x2, 
    0x2, 0x34c, 0x34d, 0x7, 0x7, 0x2, 0x2, 0x34d, 0x353, 0x5, 0x68, 0x35, 
    0x2, 0x34e, 0x34f, 0x7, 0x42, 0x2, 0x2, 0x34f, 0x350, 0x7, 0x5a, 0x2, 
    0x2, 0x350, 0x351, 0x5, 0x6e, 0x38, 0x2, 0x351, 0x352, 0x7, 0x5b, 0x2, 
    0x2, 0x352, 0x354, 0x3, 0x2, 0x2, 0x2, 0x353, 0x34e, 0x3, 0x2, 0x2, 
    0x2, 0x353, 0x354, 0x3, 0x2, 0x2, 0x2, 0x354, 0x357, 0x3, 0x2, 0x2, 
    0x2, 0x355, 0x356, 0x7, 0x10, 0x2, 0x2, 0x356, 0x358, 0x5, 0x74, 0x3b, 
    0x2, 0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 
    0x2, 0x358, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x359, 0x35b, 0x5, 0x32, 0x1a, 
    0x2, 0x35a, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 
    0x2, 0x35b, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x7, 0x20, 0x2, 
    0x2, 0x35d, 0x35f, 0x5, 0x86, 0x44, 0x2, 0x35e, 0x35c, 0x3, 0x2, 0x2, 
    0x2, 0x35e, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x388, 0x7, 0x41, 0x2, 0x2, 0x361, 0x364, 0x5, 0x68, 0x35, 0x2, 
    0x362, 0x363, 0x7, 0x59, 0x2, 0x2, 0x363, 0x365, 0x7, 0x4b, 0x2, 0x2, 
    0x364, 0x362, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x3, 0x2, 0x2, 0x2, 
    0x365, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x7, 0x5c, 0x2, 0x2, 
    0x367, 0x36a, 0x5, 0x68, 0x35, 0x2, 0x368, 0x369, 0x7, 0x59, 0x2, 0x2, 
    0x369, 0x36b, 0x7, 0x4b, 0x2, 0x2, 0x36a, 0x368, 0x3, 0x2, 0x2, 0x2, 
    0x36a, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36d, 0x3, 0x2, 0x2, 0x2, 
    0x36c, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x370, 0x3, 0x2, 0x2, 0x2, 
    0x36e, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 
    0x36f, 0x371, 0x3, 0x2, 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 
    0x371, 0x372, 0x7, 0x7, 0x2, 0x2, 0x372, 0x373, 0x5, 0x26, 0x14, 0x2, 
    0x373, 0x389, 0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x7, 0x7, 0x2, 0x2, 
    0x375, 0x378, 0x5, 0x68, 0x35, 0x2, 0x376, 0x377, 0x7, 0x59, 0x2, 0x2, 
    0x377, 0x379, 0x7, 0x4b, 0x2, 0x2, 0x378, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x382, 0x3, 0x2, 0x2, 0x2, 
    0x37a, 0x37b, 0x7, 0x5c, 0x2, 0x2, 0x37b, 0x37e, 0x5, 0x68, 0x35, 0x2, 
    0x37c, 0x37d, 0x7, 0x59, 0x2, 0x2, 0x37d, 0x37f, 0x7, 0x4b, 0x2, 0x2, 
    0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0x3, 0x2, 0x2, 0x2, 
    0x37f, 0x381, 0x3, 0x2, 0x2, 0x2, 0x380, 0x37a, 0x3, 0x2, 0x2, 0x2, 
    0x381, 0x384, 0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 0x3, 0x2, 0x2, 0x2, 
    0x382, 0x383, 0x3, 0x2, 0x2, 0x2, 0x383, 0x385, 0x3, 0x2, 0x2, 0x2, 
    0x384, 0x382, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x7, 0x43, 0x2, 0x2, 
    0x386, 0x387, 0x5, 0x26, 0x14, 0x2, 0x387, 0x389, 0x3, 0x2, 0x2, 0x2, 
    0x388, 0x361, 0x3, 0x2, 0x2, 0x2, 0x388, 0x374, 0x3, 0x2, 0x2, 0x2, 
    0x389, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x10, 0x2, 0x2, 
    0x38b, 0x38d, 0x5, 0x74, 0x3b, 0x2, 0x38c, 0x38a, 0x3, 0x2, 0x2, 0x2, 
    0x38c, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x85, 0x3, 0x2, 0x2, 0x2, 0x38e, 
    0x392, 0x5, 0x44, 0x23, 0x2, 0x38f, 0x392, 0x5, 0x7a, 0x3e, 0x2, 0x390, 
    0x392, 0x5, 0x62, 0x32, 0x2, 0x391, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x391, 
    0x38f, 0x3, 0x2, 0x2, 0x2, 0x391, 0x390, 0x3, 0x2, 0x2, 0x2, 0x392, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x8f, 0x95, 0x9f, 0xa8, 0xae, 0xb3, 
    0xb7, 0xba, 0xbd, 0xc1, 0xc4, 0xc7, 0xc9, 0xd9, 0xde, 0xe2, 0xe4, 0xeb, 
    0xef, 0xf1, 0xfb, 0xfd, 0x107, 0x109, 0x10d, 0x10f, 0x116, 0x129, 0x12f, 
    0x135, 0x138, 0x142, 0x145, 0x148, 0x14b, 0x14e, 0x154, 0x15a, 0x15f, 
    0x162, 0x166, 0x169, 0x16b, 0x172, 0x17c, 0x185, 0x18a, 0x196, 0x19b, 
    0x1a1, 0x1a8, 0x1b0, 0x1c0, 0x1c9, 0x1d2, 0x1d7, 0x1dc, 0x1e5, 0x1e9, 
    0x1ee, 0x1f1, 0x1f5, 0x1f9, 0x1fb, 0x1ff, 0x202, 0x208, 0x20f, 0x21c, 
    0x21f, 0x224, 0x226, 0x22b, 0x22d, 0x23a, 0x23c, 0x245, 0x24e, 0x257, 
    0x25c, 0x265, 0x270, 0x27a, 0x281, 0x287, 0x28c, 0x28f, 0x296, 0x29f, 
    0x2a4, 0x2ac, 0x2b1, 0x2bb, 0x2c8, 0x2ce, 0x2d4, 0x2e4, 0x2ea, 0x2f3, 
    0x2f5, 0x308, 0x314, 0x321, 0x332, 0x334, 0x33e, 0x343, 0x349, 0x353, 
    0x357, 0x35a, 0x35e, 0x364, 0x36a, 0x36e, 0x378, 0x37e, 0x382, 0x388, 
    0x38c, 0x391, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MSqlParser::Initializer MSqlParser::_init;
