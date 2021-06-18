在 `Interpreter/` 目录下面：

```
mkdir build && cd build
cmake ..
make
./MSql
```





如果要编译 `.g4` 文件的话：

1. 用 `Java` 直接编译的话：

   ```
   >>> java org.antlr.v4.Tool MSqlLexer.g4 MSqlParser.g4
   >>> javac MSql*.java
   >>> java org.antlr.v4.gui.TestRig MSql sqlStatements -gui
   >>> 输入要执行的语句 + Enter
   >>> Ctrl + Z + Enter
   >>> 
   ```

   

