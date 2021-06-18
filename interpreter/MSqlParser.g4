parser grammar MSqlParser;
options { tokenVocab=MSqlLexer; language=Cpp; }

/* Top Level Description */
sqlStatements
    : createTable | createIndex
    | dropTable | dropIndex
    | insertStatement | deleteStatement
    | selectStatement
    ;

/* Define the create table queries */
createTable
    : CREATE TABLE tableName createDefinitions?
      ';'
    ;
createDefinitions
    : '(' createDefinition (',' createDefinition)* ')'
    ;

createDefinition
    : uid columnDefinition                                          #columnDeclaration
    | tableConstraint                                               #constraintDeclaration
    ;
columnDefinition
    : dataType columnConstraint*
    ;
dataType
    : CHAR lengthOneDimension?
    | INT lengthOneDimension? (SIGNED | UNSIGNED)? ZEROFILL?
    | FLOAT lengthTwoOptionalDimension? (SIGNED | UNSIGNED)? ZEROFILL?
    ;
lengthOneDimension
    : '(' decimalLiteral ')'
    ;
lengthTwoOptionalDimension
    : '(' decimalLiteral ',' decimalLiteral ')'
    ;
columnConstraint
    : nullNotnull                                                   #nullColumnConstraint
    | DEFAULT defaultValue                                          #defaultColumnConstraint
    | PRIMARY? KEY                                                  #primaryKeyColumnConstraint
    | UNIQUE KEY?                                                   #uniqueKeyColumnConstraint
    | (CONSTRAINT name=uid?)?
      CHECK '(' expression ')'                                      #checkColumnConstraint
    ;
tableConstraint
    : (CONSTRAINT name=uid?)?
      PRIMARY KEY '(' uid ')'
    | (CONSTRAINT name=uid?)?
      UNIQUE KEY '(' uid ')'
    | (CONSTRAINT name=uid?)?
    | (CONSTRAINT name=uid?)?
      CHECK '(' expression ')'
    ;



/* Define the drop table query */
dropTable
    : DROP TABLE tables ';'
    ;



/* Define the create index query */
createIndex
    : CREATE
      INDEX uid
      ON tableName indexColumnNames
      ';'
    ;
indexColumnNames
    : '(' indexColumnName (',' indexColumnName)? ')'
    ;
indexColumnName
    : (uid | STRING_LITERAL) ('(' decimalLiteral ')')? sortType=(ASC | DESC)?
    ;


/* Define the drop table query */
dropIndex
    : DROP INDEX uid ';'
    ;



/* Define the select queries */
selectStatement
    : SELECT selectElements
      fromClause? groupByClause? havingClause? orderByClause? limitClause?
      ';'
    ;
selectElements
    : (star='*' | selectElement ) (',' selectElement)*
    ;
selectElement
    : fullColumnName (AS? uid)?             #selectColumnElement
    | functionCall (AS? uid)?               #selectFunctionElement
    ;
tableSources
    : tableName (',' tableName)*
    ;
whereClause
    : WHERE expression
    ;
fromClause
    : FROM tableSources
      (WHERE whereExpr=expression)?
    ;
groupByClause
    : GROUP BY groupByItem (',' groupByItem)*
    ;
groupByItem
    : fullColumnName order=(ASC | DESC)?
    ;
havingClause
    : HAVING expression
    ;
orderByClause
    : ORDER BY orderByExpression (',' orderByExpression)*
    ;
orderByExpression
    : fullColumnName order=(ASC | DESC)?
    ;
limitClause
    : LIMIT
    (
      (offset=decimalLiteral ',')? limit=decimalLiteral
      | limit=decimalLiteral OFFSET offset=decimalLiteral
    )
    ;
logicalOperator
    : AND | '&' '&'  | OR | '|' '|'
    ;
comparisonOperator
    : '=' | '>' | '<' | '<' '=' | '>' '='
    | '<' '>' | '!' '=' | '<' '=' '>'
    ;
bitOperator
    : '<' '<' | '>' '>' | '&' | '^' | '|'
    ;
mathOperator
    : '*' | '/' | '%' | DIV | MOD | '+' | '-' | '--'
    ;
jsonOperator
    : '-' '>' | '-' '>' '>'
    ;
value
    : uid
    | textLiteral
    | decimalLiteral
    ;
decimalLiteral
    : DECIMAL_LITERAL
    ;
hexadecimalLiteral
    : STRING_CHARSET_NAME? HEXADECIMAL_LITERAL
    ;
booleanLiteral
    : TRUE | FALSE;
textLiteral
    : TEXT_STRING
    ;
stringLiteral
    : (
        STRING_CHARSET_NAME? STRING_LITERAL
        | START_NATIONAL_STRING_LITERAL
      ) STRING_LITERAL+
    | (
        STRING_CHARSET_NAME? STRING_LITERAL
        | START_NATIONAL_STRING_LITERAL
      ) (COLLATE collationName)?
    ;
collationName
    : uid | STRING_LITERAL;
nullNotnull
    : NOT? (NULL_LITERAL | NULL_SPEC_LITERAL)
    ;
defaultValue
    : (NULL_LITERAL | unaryOperator? constant | '(' expression ')')
    ;
unaryOperator
    : '!' | '~' | '+' | '-' | NOT
    ;
constant
    : stringLiteral | decimalLiteral
    | '-' decimalLiteral
    | hexadecimalLiteral | booleanLiteral
    | REAL_LITERAL | BIT_STRING
    | NOT? nullLiteral=(NULL_LITERAL | NULL_SPEC_LITERAL)
    ;
fullColumnName
    : uid (dottedId dottedId? )?
    | . dottedId dottedId?
    ;
functionCall
    : aggregateWindowedFunction             #aggregateFunctionCall
    ;
aggregateWindowedFunction
    : (AVG | MAX | MIN | SUM) '(' functionArg ')'
    | COUNT '(' (starArg='*' |  functionArg?) ')'
    | COUNT '(' aggregator=DISTINCT functionArgs ')'
    ;
functionArg
    : fullColumnName
    ;
functionArgs
    : fullColumnName (',' fullColumnName)*
    ;
uid
    : ID
    ;
fullId
    : uid (DOT_ID | '.' uid)?
    ;
dottedId
    : DOT_ID
    | '.' uid
    ;
tableName
    : fullId
    ;
tables
    : tableName (',' tableName)*
    ;



/* Defines the insert queries */
insertStatement
    : INSERT INTO tableName
      (PARTITION '(' columns=uidList ')')? insertStatementValue
      ';'
    ;
uidList
    : uid (',' uid)*
    ;
insertStatementValue
    : selectStatement
    | insertFormat=(VALUES | VALUE)
      '(' expressionsWithDefaults? ')'
        (',' '(' expressionsWithDefaults? ')')*
    ;
expressions
    : expression (',' expression)*
    ;
expression
    : notOperator=(NOT | '!') expression                            #notExpression
    | expression logicalOperator expression                         #logicalExpression
    | predicate IS NOT? testValue=(TRUE | FALSE | UNKNOWN)          #isExpression
    | predicate                                                     #predicateExpression
    ;
predicate
    : predicate NOT? IN '(' (selectStatement | expressions) ')'     #inPredicate
    | predicate IS nullNotnull                                      #isNullPredicate
    | left=predicate comparisonOperator right=predicate             #binaryComparasionPredicate
    | predicate comparisonOperator
      quantifier=(ALL | ANY | SOME) '(' selectStatement ')'         #subqueryComparasionPredicate
    | predicate NOT? BETWEEN predicate AND predicate                #betweenPredicate
    | predicate SOUNDS LIKE predicate                               #soundsLikePredicate
    | predicate NOT? LIKE predicate (ESCAPE STRING_LITERAL)?        #likePredicate
    | predicate NOT? regex=(REGEXP | RLIKE) predicate               #regexpPredicate
    | LOCAL_ID? expressionAtom                                      #expressionAtomPredicate
    | predicate MEMBER OF '(' predicate ')'                         #jsonMemberOfPredicate
    ;
expressionAtom
    : constant                                                      #constantExpressionAtom
    | fullColumnName                                                #fullColumnNameExpressionAtom
    | functionCall                                                  #functionCallExpressionAtom
    | expressionAtom COLLATE collationName                          #collateExpressionAtom
    | mysqlVariable                                                 #mysqlVariableExpressionAtom
    | unaryOperator expressionAtom                                  #unaryExpressionAtom
    | BINARY expressionAtom                                         #binaryExpressionAtom
    | '(' expression (',' expression)* ')'                          #nestedExpressionAtom
    | ROW '(' expression (',' expression)+ ')'                      #nestedRowExpressionAtom
    | EXISTS '(' selectStatement ')'                                #existsExpressionAtom
    | '(' selectStatement ')'                                       #subqueryExpressionAtom
    | left=expressionAtom bitOperator right=expressionAtom          #bitExpressionAtom
    | left=expressionAtom mathOperator right=expressionAtom         #mathExpressionAtom
    | left=expressionAtom jsonOperator right=expressionAtom         #jsonExpressionAtom
    ;
mysqlVariable
    : LOCAL_ID
    | GLOBAL_ID
    ;
expressionsWithDefaults
    : expressionOrDefault (',' expressionOrDefault)*
    ;
expressionOrDefault
    : expression | DEFAULT
    ;



/* Define the delete queries */
deleteStatement
    : singleDeleteStatement | multipleDeleteStatement
    ';'
    ;
singleDeleteStatement
    : DELETE FROM tableName
      (PARTITION '(' uidList ')' )?
      (WHERE expression)?
      orderByClause? (LIMIT limitClauseAtom)?
    ;

multipleDeleteStatement
    : DELETE
      (
        tableName ('.' '*')? ( ',' tableName ('.' '*')? )*
            FROM tableSources
        | FROM
            tableName ('.' '*')? ( ',' tableName ('.' '*')? )*
            USING tableSources
      )
      (WHERE expression)?
    ;
limitClauseAtom
	: decimalLiteral | mysqlVariable | uid
	;