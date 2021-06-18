
// Generated from ./MSqlParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "MSqlParserVisitor.h"


/**
 * This class provides an empty implementation of MSqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MSqlParserBaseVisitor : public MSqlParserVisitor {
public:

  virtual antlrcpp::Any visitSqlStatements(MSqlParser::SqlStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTable(MSqlParser::CreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDefinitions(MSqlParser::CreateDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDeclaration(MSqlParser::ColumnDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintDeclaration(MSqlParser::ConstraintDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(MSqlParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataType(MSqlParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthOneDimension(MSqlParser::LengthOneDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthTwoOptionalDimension(MSqlParser::LengthTwoOptionalDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullColumnConstraint(MSqlParser::NullColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultColumnConstraint(MSqlParser::DefaultColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryKeyColumnConstraint(MSqlParser::PrimaryKeyColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUniqueKeyColumnConstraint(MSqlParser::UniqueKeyColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckColumnConstraint(MSqlParser::CheckColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableConstraint(MSqlParser::TableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTable(MSqlParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndex(MSqlParser::CreateIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexColumnNames(MSqlParser::IndexColumnNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexColumnName(MSqlParser::IndexColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropIndex(MSqlParser::DropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStatement(MSqlParser::SelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectElements(MSqlParser::SelectElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectColumnElement(MSqlParser::SelectColumnElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectFunctionElement(MSqlParser::SelectFunctionElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSources(MSqlParser::TableSourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhereClause(MSqlParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromClause(MSqlParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupByClause(MSqlParser::GroupByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupByItem(MSqlParser::GroupByItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHavingClause(MSqlParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByClause(MSqlParser::OrderByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByExpression(MSqlParser::OrderByExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitClause(MSqlParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOperator(MSqlParser::LogicalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(MSqlParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitOperator(MSqlParser::BitOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathOperator(MSqlParser::MathOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJsonOperator(MSqlParser::JsonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(MSqlParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalLiteral(MSqlParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimalLiteral(MSqlParser::HexadecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(MSqlParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextLiteral(MSqlParser::TextLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(MSqlParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollationName(MSqlParser::CollationNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullNotnull(MSqlParser::NullNotnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultValue(MSqlParser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(MSqlParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(MSqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullColumnName(MSqlParser::FullColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregateFunctionCall(MSqlParser::AggregateFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregateWindowedFunction(MSqlParser::AggregateWindowedFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArg(MSqlParser::FunctionArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArgs(MSqlParser::FunctionArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUid(MSqlParser::UidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullId(MSqlParser::FullIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDottedId(MSqlParser::DottedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableName(MSqlParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTables(MSqlParser::TablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatement(MSqlParser::InsertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUidList(MSqlParser::UidListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatementValue(MSqlParser::InsertStatementValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(MSqlParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsExpression(MSqlParser::IsExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(MSqlParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(MSqlParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExpression(MSqlParser::PredicateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSoundsLikePredicate(MSqlParser::SoundsLikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAtomPredicate(MSqlParser::ExpressionAtomPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJsonMemberOfPredicate(MSqlParser::JsonMemberOfPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInPredicate(MSqlParser::InPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryComparasionPredicate(MSqlParser::SubqueryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetweenPredicate(MSqlParser::BetweenPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryComparasionPredicate(MSqlParser::BinaryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsNullPredicate(MSqlParser::IsNullPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikePredicate(MSqlParser::LikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegexpPredicate(MSqlParser::RegexpPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpressionAtom(MSqlParser::UnaryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollateExpressionAtom(MSqlParser::CollateExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysqlVariableExpressionAtom(MSqlParser::MysqlVariableExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedExpressionAtom(MSqlParser::NestedExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedRowExpressionAtom(MSqlParser::NestedRowExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathExpressionAtom(MSqlParser::MathExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExistsExpressionAtom(MSqlParser::ExistsExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJsonExpressionAtom(MSqlParser::JsonExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryExpressionAtom(MSqlParser::SubqueryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpressionAtom(MSqlParser::ConstantExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpressionAtom(MSqlParser::FunctionCallExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpressionAtom(MSqlParser::BinaryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullColumnNameExpressionAtom(MSqlParser::FullColumnNameExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitExpressionAtom(MSqlParser::BitExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysqlVariable(MSqlParser::MysqlVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionsWithDefaults(MSqlParser::ExpressionsWithDefaultsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionOrDefault(MSqlParser::ExpressionOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteStatement(MSqlParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleDeleteStatement(MSqlParser::SingleDeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipleDeleteStatement(MSqlParser::MultipleDeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitClauseAtom(MSqlParser::LimitClauseAtomContext *ctx) override {
    return visitChildren(ctx);
  }


};

