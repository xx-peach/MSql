#include "antlr4-runtime.h"
#include "MSqlLexer.h"
#include "MSqlParser.h"
#include "MSqlParserBaseListener.h"
#include "MSqlParserBaseVisitor.h"
#include "MSqlVisitor.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using namespace antlr4;

int main() {
    string command;
    while (1) {
        getline(cin, command);
        if ( command == "#") break;
        // cout << endl << command << endl;
        ANTLRInputStream input(command);
        /* Instantiate the lexer */
        MSqlLexer lexer(&input);
        /* Instantiate the tokens */
        CommonTokenStream tokens(&lexer);
        // cout << tokens.getText() << endl;
        tokens.fill();
        for ( auto token : tokens.getTokens() ) {
            cout << token->getText() << ", ";
        }
        cout << endl;

        // /* Instantiate the parser */
        // MSqlParser parser(&tokens);
        // dfa::Vocabulary s = parser.getVocabulary();
        // cout << s.getDisplayName() << endl;
        // vector<string> t = parser.getTokenNames();
        // for ( int i = 0; i < t.size(); i++ ) {
        //     cout << t[i] << endl;
        // }
        // tree::ParseTree* trees = parser.sqlStatements();
        // cout << trees->toStringTree(&parser) << endl << endl;
        // cout << trees->toString() << endl;
        // // MSqlVisitor visitor;
        // // cout << "here" << endl;
        // // visitor.visitSqlStatements(trees);

        // // /* Instantiate the tree walker */
        // MSqlParserBaseListener listener;
        // tree::ParseTreeWalker::DEFAULT.walk(&listener, trees);
    }
    return 0;
}