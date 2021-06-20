#include "./interpreter/interpreter.hpp"
#include "./index/index_manager.hpp"
#include <iostream>
#include <chrono>

using namespace std;

int main() {
   /* instantiate all the needed objects */
   UI ui;
   BufferManager buffer_manager;
   IndexManager index_manager(buffer_manager);
   CatalogManager catalog_manager;
   RecordManager record_manager(index_manager, buffer_manager, catalog_manager);
   API api(catalog_manager, record_manager, index_manager, ui);
   Interpreter interpreter(api);

   /* print the welcome prompt when first enters the system */
   cout << "MSql 1.0.0" << " (default, " << __DATE__ << " " << __TIME__ << ")" << endl;
   cout << "[GCC " << __VERSION__ << "]";
   #ifdef linux
      cout << " on linux" << endl;
   #endif
   #ifdef _UNIX
      cout << " on unix" << endl;
   #endif
   #ifdef __WINDOWS_
      cout << " on windows" << endl;
   #endif
   #ifdef _WIN32
      cout << " on WIN32" << endl;
   #endif
    
   /* begin the operations of the system */
   string statement;
   while (1) {
      // fetch the statement via api
      statement = api.fetchStatement();
      // start the counting
      auto begin = chrono::system_clock::now();
      // exit the system via 'quit;' statement
      if ( statement == "quit;" ) return 0;
      // execute the statements      
      else if (statement.find("execfile") == statement.npos) {
         try {
            interpreter.interpret(statement);
         } catch(MError& e) {
            e.diagnostic();
         }
      }
      else {
			string word;
			stringstream sstring(statement);
			sstring >> word; sstring >> word;
			auto instLists = api.fetchFile(string(word, 0, word.length()-1));
         for ( auto i : instLists ) {
            if ( i == "quit;" ) return 0;
            try {
               cout << i << endl;
               interpreter.interpret(i);
            } catch(MError& e) {
               e.diagnostic();
            }
         }
      }
      // output the total execution time
      auto end = chrono::system_clock::now();
      auto duration = chrono::duration_cast<chrono::microseconds>(end - begin);
      cout << "finish execution in " << double(duration.count()) * chrono::microseconds::period::num / chrono::microseconds::period::den << " seconds" << endl;
   }
}