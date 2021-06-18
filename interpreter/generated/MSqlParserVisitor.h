
// Generated from ./MSqlParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "MSqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MSqlParser.
 */
class  MSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MSqlParser.
   */
    virtual antlrcpp::Any visitSqlStatements(MSqlParser::SqlStatementsContext *context) = 0;

    virtual antlrcpp::Any visitCreateTable(MSqlParser::CreateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateDefinitions(MSqlParser::CreateDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitColumnDeclaration(MSqlParser::ColumnDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstraintDeclaration(MSqlParser::ConstraintDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(MSqlParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitDataType(MSqlParser::DataTypeContext *context) = 0;

    virtual antlrcpp::Any visitLengthOneDimension(MSqlParser::LengthOneDimensionContext *context) = 0;

    virtual antlrcpp::Any visitLengthTwoOptionalDimension(MSqlParser::LengthTwoOptionalDimensionContext *context) = 0;

    virtual antlrcpp::Any visitNullColumnConstraint(MSqlParser::NullColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitDefaultColumnConstraint(MSqlParser::DefaultColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryKeyColumnConstraint(MSqlParser::PrimaryKeyColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitUniqueKeyColumnConstraint(MSqlParser::UniqueKeyColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitCheckColumnConstraint(MSqlParser::CheckColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitTableConstraint(MSqlParser::TableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitDropTable(MSqlParser::DropTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndex(MSqlParser::CreateIndexContext *context) = 0;

    virtual antlrcpp::Any visitIndexColumnNames(MSqlParser::IndexColumnNamesContext *context) = 0;

    virtual antlrcpp::Any visitIndexColumnName(MSqlParser::IndexColumnNameContext *context) = 0;

    virtual antlrcpp::Any visitDropIndex(MSqlParser::DropIndexContext *context) = 0;

    virtual antlrcpp::Any visitSelectStatement(MSqlParser::SelectStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectElements(MSqlParser::SelectElementsContext *context) = 0;

    virtual antlrcpp::Any visitSelectColumnElement(MSqlParser::SelectColumnElementContext *context) = 0;

    virtual antlrcpp::Any visitSelectFunctionElement(MSqlParser::SelectFunctionElementContext *context) = 0;

    virtual antlrcpp::Any visitTableSources(MSqlParser::TableSourcesContext *context) = 0;

    virtual antlrcpp::Any visitWhereClause(MSqlParser::WhereClauseContext *context) = 0;

    virtual antlrcpp::Any visitFromClause(MSqlParser::FromClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupByClause(MSqlParser::GroupByClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupByItem(MSqlParser::GroupByItemContext *context) = 0;

    virtual antlrcpp::Any visitHavingClause(MSqlParser::HavingClauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderByClause(MSqlParser::OrderByClauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderByExpression(MSqlParser::OrderByExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLimitClause(MSqlParser::LimitClauseContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOperator(MSqlParser::LogicalOperatorContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(MSqlParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBitOperator(MSqlParser::BitOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMathOperator(MSqlParser::MathOperatorContext *context) = 0;

    virtual antlrcpp::Any visitJsonOperator(MSqlParser::JsonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitValue(MSqlParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitDecimalLiteral(MSqlParser::DecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimalLiteral(MSqlParser::HexadecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(MSqlParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTextLiteral(MSqlParser::TextLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(MSqlParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitCollationName(MSqlParser::CollationNameContext *context) = 0;

    virtual antlrcpp::Any visitNullNotnull(MSqlParser::NullNotnullContext *context) = 0;

    virtual antlrcpp::Any visitDefaultValue(MSqlParser::DefaultValueContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(MSqlParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitConstant(MSqlParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitFullColumnName(MSqlParser::FullColumnNameContext *context) = 0;

    virtual antlrcpp::Any visitAggregateFunctionCall(MSqlParser::AggregateFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAggregateWindowedFunction(MSqlParser::AggregateWindowedFunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArg(MSqlParser::FunctionArgContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgs(MSqlParser::FunctionArgsContext *context) = 0;

    virtual antlrcpp::Any visitUid(MSqlParser::UidContext *context) = 0;

    virtual antlrcpp::Any visitFullId(MSqlParser::FullIdContext *context) = 0;

    virtual antlrcpp::Any visitDottedId(MSqlParser::DottedIdContext *context) = 0;

    virtual antlrcpp::Any visitTableName(MSqlParser::TableNameContext *context) = 0;

    virtual antlrcpp::Any visitTables(MSqlParser::TablesContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatement(MSqlParser::InsertStatementContext *context) = 0;

    virtual antlrcpp::Any visitUidList(MSqlParser::UidListContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatementValue(MSqlParser::InsertStatementValueContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(MSqlParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitIsExpression(MSqlParser::IsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(MSqlParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(MSqlParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExpression(MSqlParser::PredicateExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSoundsLikePredicate(MSqlParser::SoundsLikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAtomPredicate(MSqlParser::ExpressionAtomPredicateContext *context) = 0;

    virtual antlrcpp::Any visitJsonMemberOfPredicate(MSqlParser::JsonMemberOfPredicateContext *context) = 0;

    virtual antlrcpp::Any visitInPredicate(MSqlParser::InPredicateContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryComparasionPredicate(MSqlParser::SubqueryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBetweenPredicate(MSqlParser::BetweenPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparasionPredicate(MSqlParser::BinaryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitIsNullPredicate(MSqlParser::IsNullPredicateContext *context) = 0;

    virtual antlrcpp::Any visitLikePredicate(MSqlParser::LikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitRegexpPredicate(MSqlParser::RegexpPredicateContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpressionAtom(MSqlParser::UnaryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitCollateExpressionAtom(MSqlParser::CollateExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMysqlVariableExpressionAtom(MSqlParser::MysqlVariableExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitNestedExpressionAtom(MSqlParser::NestedExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitNestedRowExpressionAtom(MSqlParser::NestedRowExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMathExpressionAtom(MSqlParser::MathExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitExistsExpressionAtom(MSqlParser::ExistsExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitJsonExpressionAtom(MSqlParser::JsonExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryExpressionAtom(MSqlParser::SubqueryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpressionAtom(MSqlParser::ConstantExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpressionAtom(MSqlParser::FunctionCallExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpressionAtom(MSqlParser::BinaryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFullColumnNameExpressionAtom(MSqlParser::FullColumnNameExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitBitExpressionAtom(MSqlParser::BitExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMysqlVariable(MSqlParser::MysqlVariableContext *context) = 0;

    virtual antlrcpp::Any visitExpressionsWithDefaults(MSqlParser::ExpressionsWithDefaultsContext *context) = 0;

    virtual antlrcpp::Any visitExpressionOrDefault(MSqlParser::ExpressionOrDefaultContext *context) = 0;

    virtual antlrcpp::Any visitDeleteStatement(MSqlParser::DeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitSingleDeleteStatement(MSqlParser::SingleDeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitMultipleDeleteStatement(MSqlParser::MultipleDeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitLimitClauseAtom(MSqlParser::LimitClauseAtomContext *context) = 0;


};

