
// Generated from ./MSqlParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "MSqlParserListener.h"


/**
 * This class provides an empty implementation of MSqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MSqlParserBaseListener : public MSqlParserListener {
public:

  virtual void enterSqlStatements(MSqlParser::SqlStatementsContext * /*ctx*/) override { }
  virtual void exitSqlStatements(MSqlParser::SqlStatementsContext * /*ctx*/) override { }

  virtual void enterCreateTable(MSqlParser::CreateTableContext * /*ctx*/) override { }
  virtual void exitCreateTable(MSqlParser::CreateTableContext * /*ctx*/) override { }

  virtual void enterCreateDefinitions(MSqlParser::CreateDefinitionsContext * /*ctx*/) override { }
  virtual void exitCreateDefinitions(MSqlParser::CreateDefinitionsContext * /*ctx*/) override { }

  virtual void enterColumnDeclaration(MSqlParser::ColumnDeclarationContext * /*ctx*/) override { }
  virtual void exitColumnDeclaration(MSqlParser::ColumnDeclarationContext * /*ctx*/) override { }

  virtual void enterConstraintDeclaration(MSqlParser::ConstraintDeclarationContext * /*ctx*/) override { }
  virtual void exitConstraintDeclaration(MSqlParser::ConstraintDeclarationContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(MSqlParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(MSqlParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterDataType(MSqlParser::DataTypeContext * /*ctx*/) override { }
  virtual void exitDataType(MSqlParser::DataTypeContext * /*ctx*/) override { }

  virtual void enterLengthOneDimension(MSqlParser::LengthOneDimensionContext * /*ctx*/) override { }
  virtual void exitLengthOneDimension(MSqlParser::LengthOneDimensionContext * /*ctx*/) override { }

  virtual void enterLengthTwoOptionalDimension(MSqlParser::LengthTwoOptionalDimensionContext * /*ctx*/) override { }
  virtual void exitLengthTwoOptionalDimension(MSqlParser::LengthTwoOptionalDimensionContext * /*ctx*/) override { }

  virtual void enterNullColumnConstraint(MSqlParser::NullColumnConstraintContext * /*ctx*/) override { }
  virtual void exitNullColumnConstraint(MSqlParser::NullColumnConstraintContext * /*ctx*/) override { }

  virtual void enterDefaultColumnConstraint(MSqlParser::DefaultColumnConstraintContext * /*ctx*/) override { }
  virtual void exitDefaultColumnConstraint(MSqlParser::DefaultColumnConstraintContext * /*ctx*/) override { }

  virtual void enterPrimaryKeyColumnConstraint(MSqlParser::PrimaryKeyColumnConstraintContext * /*ctx*/) override { }
  virtual void exitPrimaryKeyColumnConstraint(MSqlParser::PrimaryKeyColumnConstraintContext * /*ctx*/) override { }

  virtual void enterUniqueKeyColumnConstraint(MSqlParser::UniqueKeyColumnConstraintContext * /*ctx*/) override { }
  virtual void exitUniqueKeyColumnConstraint(MSqlParser::UniqueKeyColumnConstraintContext * /*ctx*/) override { }

  virtual void enterCheckColumnConstraint(MSqlParser::CheckColumnConstraintContext * /*ctx*/) override { }
  virtual void exitCheckColumnConstraint(MSqlParser::CheckColumnConstraintContext * /*ctx*/) override { }

  virtual void enterTableConstraint(MSqlParser::TableConstraintContext * /*ctx*/) override { }
  virtual void exitTableConstraint(MSqlParser::TableConstraintContext * /*ctx*/) override { }

  virtual void enterDropTable(MSqlParser::DropTableContext * /*ctx*/) override { }
  virtual void exitDropTable(MSqlParser::DropTableContext * /*ctx*/) override { }

  virtual void enterCreateIndex(MSqlParser::CreateIndexContext * /*ctx*/) override { }
  virtual void exitCreateIndex(MSqlParser::CreateIndexContext * /*ctx*/) override { }

  virtual void enterIndexColumnNames(MSqlParser::IndexColumnNamesContext * /*ctx*/) override { }
  virtual void exitIndexColumnNames(MSqlParser::IndexColumnNamesContext * /*ctx*/) override { }

  virtual void enterIndexColumnName(MSqlParser::IndexColumnNameContext * /*ctx*/) override { }
  virtual void exitIndexColumnName(MSqlParser::IndexColumnNameContext * /*ctx*/) override { }

  virtual void enterDropIndex(MSqlParser::DropIndexContext * /*ctx*/) override { }
  virtual void exitDropIndex(MSqlParser::DropIndexContext * /*ctx*/) override { }

  virtual void enterSelectStatement(MSqlParser::SelectStatementContext * /*ctx*/) override { }
  virtual void exitSelectStatement(MSqlParser::SelectStatementContext * /*ctx*/) override { }

  virtual void enterSelectElements(MSqlParser::SelectElementsContext * /*ctx*/) override { }
  virtual void exitSelectElements(MSqlParser::SelectElementsContext * /*ctx*/) override { }

  virtual void enterSelectColumnElement(MSqlParser::SelectColumnElementContext * /*ctx*/) override { }
  virtual void exitSelectColumnElement(MSqlParser::SelectColumnElementContext * /*ctx*/) override { }

  virtual void enterSelectFunctionElement(MSqlParser::SelectFunctionElementContext * /*ctx*/) override { }
  virtual void exitSelectFunctionElement(MSqlParser::SelectFunctionElementContext * /*ctx*/) override { }

  virtual void enterTableSources(MSqlParser::TableSourcesContext * /*ctx*/) override { }
  virtual void exitTableSources(MSqlParser::TableSourcesContext * /*ctx*/) override { }

  virtual void enterWhereClause(MSqlParser::WhereClauseContext * /*ctx*/) override { }
  virtual void exitWhereClause(MSqlParser::WhereClauseContext * /*ctx*/) override { }

  virtual void enterFromClause(MSqlParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(MSqlParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterGroupByClause(MSqlParser::GroupByClauseContext * /*ctx*/) override { }
  virtual void exitGroupByClause(MSqlParser::GroupByClauseContext * /*ctx*/) override { }

  virtual void enterGroupByItem(MSqlParser::GroupByItemContext * /*ctx*/) override { }
  virtual void exitGroupByItem(MSqlParser::GroupByItemContext * /*ctx*/) override { }

  virtual void enterHavingClause(MSqlParser::HavingClauseContext * /*ctx*/) override { }
  virtual void exitHavingClause(MSqlParser::HavingClauseContext * /*ctx*/) override { }

  virtual void enterOrderByClause(MSqlParser::OrderByClauseContext * /*ctx*/) override { }
  virtual void exitOrderByClause(MSqlParser::OrderByClauseContext * /*ctx*/) override { }

  virtual void enterOrderByExpression(MSqlParser::OrderByExpressionContext * /*ctx*/) override { }
  virtual void exitOrderByExpression(MSqlParser::OrderByExpressionContext * /*ctx*/) override { }

  virtual void enterLimitClause(MSqlParser::LimitClauseContext * /*ctx*/) override { }
  virtual void exitLimitClause(MSqlParser::LimitClauseContext * /*ctx*/) override { }

  virtual void enterLogicalOperator(MSqlParser::LogicalOperatorContext * /*ctx*/) override { }
  virtual void exitLogicalOperator(MSqlParser::LogicalOperatorContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(MSqlParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(MSqlParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterBitOperator(MSqlParser::BitOperatorContext * /*ctx*/) override { }
  virtual void exitBitOperator(MSqlParser::BitOperatorContext * /*ctx*/) override { }

  virtual void enterMathOperator(MSqlParser::MathOperatorContext * /*ctx*/) override { }
  virtual void exitMathOperator(MSqlParser::MathOperatorContext * /*ctx*/) override { }

  virtual void enterJsonOperator(MSqlParser::JsonOperatorContext * /*ctx*/) override { }
  virtual void exitJsonOperator(MSqlParser::JsonOperatorContext * /*ctx*/) override { }

  virtual void enterValue(MSqlParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(MSqlParser::ValueContext * /*ctx*/) override { }

  virtual void enterDecimalLiteral(MSqlParser::DecimalLiteralContext * /*ctx*/) override { }
  virtual void exitDecimalLiteral(MSqlParser::DecimalLiteralContext * /*ctx*/) override { }

  virtual void enterHexadecimalLiteral(MSqlParser::HexadecimalLiteralContext * /*ctx*/) override { }
  virtual void exitHexadecimalLiteral(MSqlParser::HexadecimalLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(MSqlParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(MSqlParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterTextLiteral(MSqlParser::TextLiteralContext * /*ctx*/) override { }
  virtual void exitTextLiteral(MSqlParser::TextLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(MSqlParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(MSqlParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterCollationName(MSqlParser::CollationNameContext * /*ctx*/) override { }
  virtual void exitCollationName(MSqlParser::CollationNameContext * /*ctx*/) override { }

  virtual void enterNullNotnull(MSqlParser::NullNotnullContext * /*ctx*/) override { }
  virtual void exitNullNotnull(MSqlParser::NullNotnullContext * /*ctx*/) override { }

  virtual void enterDefaultValue(MSqlParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(MSqlParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(MSqlParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(MSqlParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterConstant(MSqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(MSqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterFullColumnName(MSqlParser::FullColumnNameContext * /*ctx*/) override { }
  virtual void exitFullColumnName(MSqlParser::FullColumnNameContext * /*ctx*/) override { }

  virtual void enterAggregateFunctionCall(MSqlParser::AggregateFunctionCallContext * /*ctx*/) override { }
  virtual void exitAggregateFunctionCall(MSqlParser::AggregateFunctionCallContext * /*ctx*/) override { }

  virtual void enterAggregateWindowedFunction(MSqlParser::AggregateWindowedFunctionContext * /*ctx*/) override { }
  virtual void exitAggregateWindowedFunction(MSqlParser::AggregateWindowedFunctionContext * /*ctx*/) override { }

  virtual void enterFunctionArg(MSqlParser::FunctionArgContext * /*ctx*/) override { }
  virtual void exitFunctionArg(MSqlParser::FunctionArgContext * /*ctx*/) override { }

  virtual void enterFunctionArgs(MSqlParser::FunctionArgsContext * /*ctx*/) override { }
  virtual void exitFunctionArgs(MSqlParser::FunctionArgsContext * /*ctx*/) override { }

  virtual void enterUid(MSqlParser::UidContext * /*ctx*/) override { }
  virtual void exitUid(MSqlParser::UidContext * /*ctx*/) override { }

  virtual void enterFullId(MSqlParser::FullIdContext * /*ctx*/) override { }
  virtual void exitFullId(MSqlParser::FullIdContext * /*ctx*/) override { }

  virtual void enterDottedId(MSqlParser::DottedIdContext * /*ctx*/) override { }
  virtual void exitDottedId(MSqlParser::DottedIdContext * /*ctx*/) override { }

  virtual void enterTableName(MSqlParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(MSqlParser::TableNameContext * /*ctx*/) override { }

  virtual void enterTables(MSqlParser::TablesContext * /*ctx*/) override { }
  virtual void exitTables(MSqlParser::TablesContext * /*ctx*/) override { }

  virtual void enterInsertStatement(MSqlParser::InsertStatementContext * /*ctx*/) override { }
  virtual void exitInsertStatement(MSqlParser::InsertStatementContext * /*ctx*/) override { }

  virtual void enterUidList(MSqlParser::UidListContext * /*ctx*/) override { }
  virtual void exitUidList(MSqlParser::UidListContext * /*ctx*/) override { }

  virtual void enterInsertStatementValue(MSqlParser::InsertStatementValueContext * /*ctx*/) override { }
  virtual void exitInsertStatementValue(MSqlParser::InsertStatementValueContext * /*ctx*/) override { }

  virtual void enterExpressions(MSqlParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(MSqlParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterIsExpression(MSqlParser::IsExpressionContext * /*ctx*/) override { }
  virtual void exitIsExpression(MSqlParser::IsExpressionContext * /*ctx*/) override { }

  virtual void enterNotExpression(MSqlParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(MSqlParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalExpression(MSqlParser::LogicalExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalExpression(MSqlParser::LogicalExpressionContext * /*ctx*/) override { }

  virtual void enterPredicateExpression(MSqlParser::PredicateExpressionContext * /*ctx*/) override { }
  virtual void exitPredicateExpression(MSqlParser::PredicateExpressionContext * /*ctx*/) override { }

  virtual void enterSoundsLikePredicate(MSqlParser::SoundsLikePredicateContext * /*ctx*/) override { }
  virtual void exitSoundsLikePredicate(MSqlParser::SoundsLikePredicateContext * /*ctx*/) override { }

  virtual void enterExpressionAtomPredicate(MSqlParser::ExpressionAtomPredicateContext * /*ctx*/) override { }
  virtual void exitExpressionAtomPredicate(MSqlParser::ExpressionAtomPredicateContext * /*ctx*/) override { }

  virtual void enterJsonMemberOfPredicate(MSqlParser::JsonMemberOfPredicateContext * /*ctx*/) override { }
  virtual void exitJsonMemberOfPredicate(MSqlParser::JsonMemberOfPredicateContext * /*ctx*/) override { }

  virtual void enterInPredicate(MSqlParser::InPredicateContext * /*ctx*/) override { }
  virtual void exitInPredicate(MSqlParser::InPredicateContext * /*ctx*/) override { }

  virtual void enterSubqueryComparasionPredicate(MSqlParser::SubqueryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitSubqueryComparasionPredicate(MSqlParser::SubqueryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterBetweenPredicate(MSqlParser::BetweenPredicateContext * /*ctx*/) override { }
  virtual void exitBetweenPredicate(MSqlParser::BetweenPredicateContext * /*ctx*/) override { }

  virtual void enterBinaryComparasionPredicate(MSqlParser::BinaryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitBinaryComparasionPredicate(MSqlParser::BinaryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterIsNullPredicate(MSqlParser::IsNullPredicateContext * /*ctx*/) override { }
  virtual void exitIsNullPredicate(MSqlParser::IsNullPredicateContext * /*ctx*/) override { }

  virtual void enterLikePredicate(MSqlParser::LikePredicateContext * /*ctx*/) override { }
  virtual void exitLikePredicate(MSqlParser::LikePredicateContext * /*ctx*/) override { }

  virtual void enterRegexpPredicate(MSqlParser::RegexpPredicateContext * /*ctx*/) override { }
  virtual void exitRegexpPredicate(MSqlParser::RegexpPredicateContext * /*ctx*/) override { }

  virtual void enterUnaryExpressionAtom(MSqlParser::UnaryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitUnaryExpressionAtom(MSqlParser::UnaryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterCollateExpressionAtom(MSqlParser::CollateExpressionAtomContext * /*ctx*/) override { }
  virtual void exitCollateExpressionAtom(MSqlParser::CollateExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMysqlVariableExpressionAtom(MSqlParser::MysqlVariableExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMysqlVariableExpressionAtom(MSqlParser::MysqlVariableExpressionAtomContext * /*ctx*/) override { }

  virtual void enterNestedExpressionAtom(MSqlParser::NestedExpressionAtomContext * /*ctx*/) override { }
  virtual void exitNestedExpressionAtom(MSqlParser::NestedExpressionAtomContext * /*ctx*/) override { }

  virtual void enterNestedRowExpressionAtom(MSqlParser::NestedRowExpressionAtomContext * /*ctx*/) override { }
  virtual void exitNestedRowExpressionAtom(MSqlParser::NestedRowExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMathExpressionAtom(MSqlParser::MathExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMathExpressionAtom(MSqlParser::MathExpressionAtomContext * /*ctx*/) override { }

  virtual void enterExistsExpressionAtom(MSqlParser::ExistsExpressionAtomContext * /*ctx*/) override { }
  virtual void exitExistsExpressionAtom(MSqlParser::ExistsExpressionAtomContext * /*ctx*/) override { }

  virtual void enterJsonExpressionAtom(MSqlParser::JsonExpressionAtomContext * /*ctx*/) override { }
  virtual void exitJsonExpressionAtom(MSqlParser::JsonExpressionAtomContext * /*ctx*/) override { }

  virtual void enterSubqueryExpressionAtom(MSqlParser::SubqueryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitSubqueryExpressionAtom(MSqlParser::SubqueryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterConstantExpressionAtom(MSqlParser::ConstantExpressionAtomContext * /*ctx*/) override { }
  virtual void exitConstantExpressionAtom(MSqlParser::ConstantExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpressionAtom(MSqlParser::FunctionCallExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpressionAtom(MSqlParser::FunctionCallExpressionAtomContext * /*ctx*/) override { }

  virtual void enterBinaryExpressionAtom(MSqlParser::BinaryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitBinaryExpressionAtom(MSqlParser::BinaryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFullColumnNameExpressionAtom(MSqlParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFullColumnNameExpressionAtom(MSqlParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }

  virtual void enterBitExpressionAtom(MSqlParser::BitExpressionAtomContext * /*ctx*/) override { }
  virtual void exitBitExpressionAtom(MSqlParser::BitExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMysqlVariable(MSqlParser::MysqlVariableContext * /*ctx*/) override { }
  virtual void exitMysqlVariable(MSqlParser::MysqlVariableContext * /*ctx*/) override { }

  virtual void enterExpressionsWithDefaults(MSqlParser::ExpressionsWithDefaultsContext * /*ctx*/) override { }
  virtual void exitExpressionsWithDefaults(MSqlParser::ExpressionsWithDefaultsContext * /*ctx*/) override { }

  virtual void enterExpressionOrDefault(MSqlParser::ExpressionOrDefaultContext * /*ctx*/) override { }
  virtual void exitExpressionOrDefault(MSqlParser::ExpressionOrDefaultContext * /*ctx*/) override { }

  virtual void enterDeleteStatement(MSqlParser::DeleteStatementContext * /*ctx*/) override { }
  virtual void exitDeleteStatement(MSqlParser::DeleteStatementContext * /*ctx*/) override { }

  virtual void enterSingleDeleteStatement(MSqlParser::SingleDeleteStatementContext * /*ctx*/) override { }
  virtual void exitSingleDeleteStatement(MSqlParser::SingleDeleteStatementContext * /*ctx*/) override { }

  virtual void enterMultipleDeleteStatement(MSqlParser::MultipleDeleteStatementContext * /*ctx*/) override { }
  virtual void exitMultipleDeleteStatement(MSqlParser::MultipleDeleteStatementContext * /*ctx*/) override { }

  virtual void enterLimitClauseAtom(MSqlParser::LimitClauseAtomContext * /*ctx*/) override { }
  virtual void exitLimitClauseAtom(MSqlParser::LimitClauseAtomContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

