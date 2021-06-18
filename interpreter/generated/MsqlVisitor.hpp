#include <string>
#include <iostream>

#include "tree/ErrorNode.h"
#include "ParserRuleContext.h"
#include "tree/ParseTreeListener.h"
#include "support/CPPUtils.h"

#include "MSqlParserVisitor.h"
#include "MSqlParserBaseVisitor.h"

using namespace std;
// using namespace tree;
using namespace antlr4;

class MSqlVisitor : public MSqlParserVisitor {
public:
    // antlrcpp::Any visitTerminal(TerminalNode* node) override {
    //     return node->getText();
    // }

    // antlrcpp::Any visitSqlStatements(MSqlParser::SqlStatementsContext *context) override {
    //     vector<string> tokens
    //     // if ( is<ErrorNode *>(context) ) {
            
    //     // }
    // }
};