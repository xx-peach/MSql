
// Generated from ./MSqlParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "MSqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MSqlParser.
 */
class  MSqlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSqlStatements(MSqlParser::SqlStatementsContext *ctx) = 0;
  virtual void exitSqlStatements(MSqlParser::SqlStatementsContext *ctx) = 0;

  virtual void enterCreateTable(MSqlParser::CreateTableContext *ctx) = 0;
  virtual void exitCreateTable(MSqlParser::CreateTableContext *ctx) = 0;

  virtual void enterCreateDefinitions(MSqlParser::CreateDefinitionsContext *ctx) = 0;
  virtual void exitCreateDefinitions(MSqlParser::CreateDefinitionsContext *ctx) = 0;

  virtual void enterColumnDeclaration(MSqlParser::ColumnDeclarationContext *ctx) = 0;
  virtual void exitColumnDeclaration(MSqlParser::ColumnDeclarationContext *ctx) = 0;

  virtual void enterConstraintDeclaration(MSqlParser::ConstraintDeclarationContext *ctx) = 0;
  virtual void exitConstraintDeclaration(MSqlParser::ConstraintDeclarationContext *ctx) = 0;

  virtual void enterColumnDefinition(MSqlParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(MSqlParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterDataType(MSqlParser::DataTypeContext *ctx) = 0;
  virtual void exitDataType(MSqlParser::DataTypeContext *ctx) = 0;

  virtual void enterLengthOneDimension(MSqlParser::LengthOneDimensionContext *ctx) = 0;
  virtual void exitLengthOneDimension(MSqlParser::LengthOneDimensionContext *ctx) = 0;

  virtual void enterLengthTwoOptionalDimension(MSqlParser::LengthTwoOptionalDimensionContext *ctx) = 0;
  virtual void exitLengthTwoOptionalDimension(MSqlParser::LengthTwoOptionalDimensionContext *ctx) = 0;

  virtual void enterNullColumnConstraint(MSqlParser::NullColumnConstraintContext *ctx) = 0;
  virtual void exitNullColumnConstraint(MSqlParser::NullColumnConstraintContext *ctx) = 0;

  virtual void enterDefaultColumnConstraint(MSqlParser::DefaultColumnConstraintContext *ctx) = 0;
  virtual void exitDefaultColumnConstraint(MSqlParser::DefaultColumnConstraintContext *ctx) = 0;

  virtual void enterPrimaryKeyColumnConstraint(MSqlParser::PrimaryKeyColumnConstraintContext *ctx) = 0;
  virtual void exitPrimaryKeyColumnConstraint(MSqlParser::PrimaryKeyColumnConstraintContext *ctx) = 0;

  virtual void enterUniqueKeyColumnConstraint(MSqlParser::UniqueKeyColumnConstraintContext *ctx) = 0;
  virtual void exitUniqueKeyColumnConstraint(MSqlParser::UniqueKeyColumnConstraintContext *ctx) = 0;

  virtual void enterCheckColumnConstraint(MSqlParser::CheckColumnConstraintContext *ctx) = 0;
  virtual void exitCheckColumnConstraint(MSqlParser::CheckColumnConstraintContext *ctx) = 0;

  virtual void enterTableConstraint(MSqlParser::TableConstraintContext *ctx) = 0;
  virtual void exitTableConstraint(MSqlParser::TableConstraintContext *ctx) = 0;

  virtual void enterDropTable(MSqlParser::DropTableContext *ctx) = 0;
  virtual void exitDropTable(MSqlParser::DropTableContext *ctx) = 0;

  virtual void enterCreateIndex(MSqlParser::CreateIndexContext *ctx) = 0;
  virtual void exitCreateIndex(MSqlParser::CreateIndexContext *ctx) = 0;

  virtual void enterIndexColumnNames(MSqlParser::IndexColumnNamesContext *ctx) = 0;
  virtual void exitIndexColumnNames(MSqlParser::IndexColumnNamesContext *ctx) = 0;

  virtual void enterIndexColumnName(MSqlParser::IndexColumnNameContext *ctx) = 0;
  virtual void exitIndexColumnName(MSqlParser::IndexColumnNameContext *ctx) = 0;

  virtual void enterDropIndex(MSqlParser::DropIndexContext *ctx) = 0;
  virtual void exitDropIndex(MSqlParser::DropIndexContext *ctx) = 0;

  virtual void enterSelectStatement(MSqlParser::SelectStatementContext *ctx) = 0;
  virtual void exitSelectStatement(MSqlParser::SelectStatementContext *ctx) = 0;

  virtual void enterSelectElements(MSqlParser::SelectElementsContext *ctx) = 0;
  virtual void exitSelectElements(MSqlParser::SelectElementsContext *ctx) = 0;

  virtual void enterSelectColumnElement(MSqlParser::SelectColumnElementContext *ctx) = 0;
  virtual void exitSelectColumnElement(MSqlParser::SelectColumnElementContext *ctx) = 0;

  virtual void enterSelectFunctionElement(MSqlParser::SelectFunctionElementContext *ctx) = 0;
  virtual void exitSelectFunctionElement(MSqlParser::SelectFunctionElementContext *ctx) = 0;

  virtual void enterTableSources(MSqlParser::TableSourcesContext *ctx) = 0;
  virtual void exitTableSources(MSqlParser::TableSourcesContext *ctx) = 0;

  virtual void enterWhereClause(MSqlParser::WhereClauseContext *ctx) = 0;
  virtual void exitWhereClause(MSqlParser::WhereClauseContext *ctx) = 0;

  virtual void enterFromClause(MSqlParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(MSqlParser::FromClauseContext *ctx) = 0;

  virtual void enterGroupByClause(MSqlParser::GroupByClauseContext *ctx) = 0;
  virtual void exitGroupByClause(MSqlParser::GroupByClauseContext *ctx) = 0;

  virtual void enterGroupByItem(MSqlParser::GroupByItemContext *ctx) = 0;
  virtual void exitGroupByItem(MSqlParser::GroupByItemContext *ctx) = 0;

  virtual void enterHavingClause(MSqlParser::HavingClauseContext *ctx) = 0;
  virtual void exitHavingClause(MSqlParser::HavingClauseContext *ctx) = 0;

  virtual void enterOrderByClause(MSqlParser::OrderByClauseContext *ctx) = 0;
  virtual void exitOrderByClause(MSqlParser::OrderByClauseContext *ctx) = 0;

  virtual void enterOrderByExpression(MSqlParser::OrderByExpressionContext *ctx) = 0;
  virtual void exitOrderByExpression(MSqlParser::OrderByExpressionContext *ctx) = 0;

  virtual void enterLimitClause(MSqlParser::LimitClauseContext *ctx) = 0;
  virtual void exitLimitClause(MSqlParser::LimitClauseContext *ctx) = 0;

  virtual void enterLogicalOperator(MSqlParser::LogicalOperatorContext *ctx) = 0;
  virtual void exitLogicalOperator(MSqlParser::LogicalOperatorContext *ctx) = 0;

  virtual void enterComparisonOperator(MSqlParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(MSqlParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterBitOperator(MSqlParser::BitOperatorContext *ctx) = 0;
  virtual void exitBitOperator(MSqlParser::BitOperatorContext *ctx) = 0;

  virtual void enterMathOperator(MSqlParser::MathOperatorContext *ctx) = 0;
  virtual void exitMathOperator(MSqlParser::MathOperatorContext *ctx) = 0;

  virtual void enterJsonOperator(MSqlParser::JsonOperatorContext *ctx) = 0;
  virtual void exitJsonOperator(MSqlParser::JsonOperatorContext *ctx) = 0;

  virtual void enterValue(MSqlParser::ValueContext *ctx) = 0;
  virtual void exitValue(MSqlParser::ValueContext *ctx) = 0;

  virtual void enterDecimalLiteral(MSqlParser::DecimalLiteralContext *ctx) = 0;
  virtual void exitDecimalLiteral(MSqlParser::DecimalLiteralContext *ctx) = 0;

  virtual void enterHexadecimalLiteral(MSqlParser::HexadecimalLiteralContext *ctx) = 0;
  virtual void exitHexadecimalLiteral(MSqlParser::HexadecimalLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(MSqlParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(MSqlParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterTextLiteral(MSqlParser::TextLiteralContext *ctx) = 0;
  virtual void exitTextLiteral(MSqlParser::TextLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(MSqlParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(MSqlParser::StringLiteralContext *ctx) = 0;

  virtual void enterCollationName(MSqlParser::CollationNameContext *ctx) = 0;
  virtual void exitCollationName(MSqlParser::CollationNameContext *ctx) = 0;

  virtual void enterNullNotnull(MSqlParser::NullNotnullContext *ctx) = 0;
  virtual void exitNullNotnull(MSqlParser::NullNotnullContext *ctx) = 0;

  virtual void enterDefaultValue(MSqlParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(MSqlParser::DefaultValueContext *ctx) = 0;

  virtual void enterUnaryOperator(MSqlParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(MSqlParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterConstant(MSqlParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(MSqlParser::ConstantContext *ctx) = 0;

  virtual void enterFullColumnName(MSqlParser::FullColumnNameContext *ctx) = 0;
  virtual void exitFullColumnName(MSqlParser::FullColumnNameContext *ctx) = 0;

  virtual void enterAggregateFunctionCall(MSqlParser::AggregateFunctionCallContext *ctx) = 0;
  virtual void exitAggregateFunctionCall(MSqlParser::AggregateFunctionCallContext *ctx) = 0;

  virtual void enterAggregateWindowedFunction(MSqlParser::AggregateWindowedFunctionContext *ctx) = 0;
  virtual void exitAggregateWindowedFunction(MSqlParser::AggregateWindowedFunctionContext *ctx) = 0;

  virtual void enterFunctionArg(MSqlParser::FunctionArgContext *ctx) = 0;
  virtual void exitFunctionArg(MSqlParser::FunctionArgContext *ctx) = 0;

  virtual void enterFunctionArgs(MSqlParser::FunctionArgsContext *ctx) = 0;
  virtual void exitFunctionArgs(MSqlParser::FunctionArgsContext *ctx) = 0;

  virtual void enterUid(MSqlParser::UidContext *ctx) = 0;
  virtual void exitUid(MSqlParser::UidContext *ctx) = 0;

  virtual void enterFullId(MSqlParser::FullIdContext *ctx) = 0;
  virtual void exitFullId(MSqlParser::FullIdContext *ctx) = 0;

  virtual void enterDottedId(MSqlParser::DottedIdContext *ctx) = 0;
  virtual void exitDottedId(MSqlParser::DottedIdContext *ctx) = 0;

  virtual void enterTableName(MSqlParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(MSqlParser::TableNameContext *ctx) = 0;

  virtual void enterTables(MSqlParser::TablesContext *ctx) = 0;
  virtual void exitTables(MSqlParser::TablesContext *ctx) = 0;

  virtual void enterInsertStatement(MSqlParser::InsertStatementContext *ctx) = 0;
  virtual void exitInsertStatement(MSqlParser::InsertStatementContext *ctx) = 0;

  virtual void enterUidList(MSqlParser::UidListContext *ctx) = 0;
  virtual void exitUidList(MSqlParser::UidListContext *ctx) = 0;

  virtual void enterInsertStatementValue(MSqlParser::InsertStatementValueContext *ctx) = 0;
  virtual void exitInsertStatementValue(MSqlParser::InsertStatementValueContext *ctx) = 0;

  virtual void enterExpressions(MSqlParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(MSqlParser::ExpressionsContext *ctx) = 0;

  virtual void enterIsExpression(MSqlParser::IsExpressionContext *ctx) = 0;
  virtual void exitIsExpression(MSqlParser::IsExpressionContext *ctx) = 0;

  virtual void enterNotExpression(MSqlParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(MSqlParser::NotExpressionContext *ctx) = 0;

  virtual void enterLogicalExpression(MSqlParser::LogicalExpressionContext *ctx) = 0;
  virtual void exitLogicalExpression(MSqlParser::LogicalExpressionContext *ctx) = 0;

  virtual void enterPredicateExpression(MSqlParser::PredicateExpressionContext *ctx) = 0;
  virtual void exitPredicateExpression(MSqlParser::PredicateExpressionContext *ctx) = 0;

  virtual void enterSoundsLikePredicate(MSqlParser::SoundsLikePredicateContext *ctx) = 0;
  virtual void exitSoundsLikePredicate(MSqlParser::SoundsLikePredicateContext *ctx) = 0;

  virtual void enterExpressionAtomPredicate(MSqlParser::ExpressionAtomPredicateContext *ctx) = 0;
  virtual void exitExpressionAtomPredicate(MSqlParser::ExpressionAtomPredicateContext *ctx) = 0;

  virtual void enterJsonMemberOfPredicate(MSqlParser::JsonMemberOfPredicateContext *ctx) = 0;
  virtual void exitJsonMemberOfPredicate(MSqlParser::JsonMemberOfPredicateContext *ctx) = 0;

  virtual void enterInPredicate(MSqlParser::InPredicateContext *ctx) = 0;
  virtual void exitInPredicate(MSqlParser::InPredicateContext *ctx) = 0;

  virtual void enterSubqueryComparasionPredicate(MSqlParser::SubqueryComparasionPredicateContext *ctx) = 0;
  virtual void exitSubqueryComparasionPredicate(MSqlParser::SubqueryComparasionPredicateContext *ctx) = 0;

  virtual void enterBetweenPredicate(MSqlParser::BetweenPredicateContext *ctx) = 0;
  virtual void exitBetweenPredicate(MSqlParser::BetweenPredicateContext *ctx) = 0;

  virtual void enterBinaryComparasionPredicate(MSqlParser::BinaryComparasionPredicateContext *ctx) = 0;
  virtual void exitBinaryComparasionPredicate(MSqlParser::BinaryComparasionPredicateContext *ctx) = 0;

  virtual void enterIsNullPredicate(MSqlParser::IsNullPredicateContext *ctx) = 0;
  virtual void exitIsNullPredicate(MSqlParser::IsNullPredicateContext *ctx) = 0;

  virtual void enterLikePredicate(MSqlParser::LikePredicateContext *ctx) = 0;
  virtual void exitLikePredicate(MSqlParser::LikePredicateContext *ctx) = 0;

  virtual void enterRegexpPredicate(MSqlParser::RegexpPredicateContext *ctx) = 0;
  virtual void exitRegexpPredicate(MSqlParser::RegexpPredicateContext *ctx) = 0;

  virtual void enterUnaryExpressionAtom(MSqlParser::UnaryExpressionAtomContext *ctx) = 0;
  virtual void exitUnaryExpressionAtom(MSqlParser::UnaryExpressionAtomContext *ctx) = 0;

  virtual void enterCollateExpressionAtom(MSqlParser::CollateExpressionAtomContext *ctx) = 0;
  virtual void exitCollateExpressionAtom(MSqlParser::CollateExpressionAtomContext *ctx) = 0;

  virtual void enterMysqlVariableExpressionAtom(MSqlParser::MysqlVariableExpressionAtomContext *ctx) = 0;
  virtual void exitMysqlVariableExpressionAtom(MSqlParser::MysqlVariableExpressionAtomContext *ctx) = 0;

  virtual void enterNestedExpressionAtom(MSqlParser::NestedExpressionAtomContext *ctx) = 0;
  virtual void exitNestedExpressionAtom(MSqlParser::NestedExpressionAtomContext *ctx) = 0;

  virtual void enterNestedRowExpressionAtom(MSqlParser::NestedRowExpressionAtomContext *ctx) = 0;
  virtual void exitNestedRowExpressionAtom(MSqlParser::NestedRowExpressionAtomContext *ctx) = 0;

  virtual void enterMathExpressionAtom(MSqlParser::MathExpressionAtomContext *ctx) = 0;
  virtual void exitMathExpressionAtom(MSqlParser::MathExpressionAtomContext *ctx) = 0;

  virtual void enterExistsExpressionAtom(MSqlParser::ExistsExpressionAtomContext *ctx) = 0;
  virtual void exitExistsExpressionAtom(MSqlParser::ExistsExpressionAtomContext *ctx) = 0;

  virtual void enterJsonExpressionAtom(MSqlParser::JsonExpressionAtomContext *ctx) = 0;
  virtual void exitJsonExpressionAtom(MSqlParser::JsonExpressionAtomContext *ctx) = 0;

  virtual void enterSubqueryExpressionAtom(MSqlParser::SubqueryExpressionAtomContext *ctx) = 0;
  virtual void exitSubqueryExpressionAtom(MSqlParser::SubqueryExpressionAtomContext *ctx) = 0;

  virtual void enterConstantExpressionAtom(MSqlParser::ConstantExpressionAtomContext *ctx) = 0;
  virtual void exitConstantExpressionAtom(MSqlParser::ConstantExpressionAtomContext *ctx) = 0;

  virtual void enterFunctionCallExpressionAtom(MSqlParser::FunctionCallExpressionAtomContext *ctx) = 0;
  virtual void exitFunctionCallExpressionAtom(MSqlParser::FunctionCallExpressionAtomContext *ctx) = 0;

  virtual void enterBinaryExpressionAtom(MSqlParser::BinaryExpressionAtomContext *ctx) = 0;
  virtual void exitBinaryExpressionAtom(MSqlParser::BinaryExpressionAtomContext *ctx) = 0;

  virtual void enterFullColumnNameExpressionAtom(MSqlParser::FullColumnNameExpressionAtomContext *ctx) = 0;
  virtual void exitFullColumnNameExpressionAtom(MSqlParser::FullColumnNameExpressionAtomContext *ctx) = 0;

  virtual void enterBitExpressionAtom(MSqlParser::BitExpressionAtomContext *ctx) = 0;
  virtual void exitBitExpressionAtom(MSqlParser::BitExpressionAtomContext *ctx) = 0;

  virtual void enterMysqlVariable(MSqlParser::MysqlVariableContext *ctx) = 0;
  virtual void exitMysqlVariable(MSqlParser::MysqlVariableContext *ctx) = 0;

  virtual void enterExpressionsWithDefaults(MSqlParser::ExpressionsWithDefaultsContext *ctx) = 0;
  virtual void exitExpressionsWithDefaults(MSqlParser::ExpressionsWithDefaultsContext *ctx) = 0;

  virtual void enterExpressionOrDefault(MSqlParser::ExpressionOrDefaultContext *ctx) = 0;
  virtual void exitExpressionOrDefault(MSqlParser::ExpressionOrDefaultContext *ctx) = 0;

  virtual void enterDeleteStatement(MSqlParser::DeleteStatementContext *ctx) = 0;
  virtual void exitDeleteStatement(MSqlParser::DeleteStatementContext *ctx) = 0;

  virtual void enterSingleDeleteStatement(MSqlParser::SingleDeleteStatementContext *ctx) = 0;
  virtual void exitSingleDeleteStatement(MSqlParser::SingleDeleteStatementContext *ctx) = 0;

  virtual void enterMultipleDeleteStatement(MSqlParser::MultipleDeleteStatementContext *ctx) = 0;
  virtual void exitMultipleDeleteStatement(MSqlParser::MultipleDeleteStatementContext *ctx) = 0;

  virtual void enterLimitClauseAtom(MSqlParser::LimitClauseAtomContext *ctx) = 0;
  virtual void exitLimitClauseAtom(MSqlParser::LimitClauseAtomContext *ctx) = 0;


};

