# <center>环境配置

## wsl

这个就 Microsoft Store 里面下一下？小意思这个:smile_cat:

## Java

```
sudo apt update
sudo apt install openjdk-11-jdk
```

可以用下面语句来检查

```
java -version
```

## make

```
sudo apt-get install make
```

## cmake

```
sudo apt-get install cmake
```

## antlr4

1. 下载，可以挂个代理，或者多关关 cmd，重启试试（

   ```
   $ cd /usr/local/lib
   $ curl -O https://www.antlr.org/download/antlr-4.9-complete.jar
   ```

2. 加到环境变量里面去：

   1. 如果用的是 `bash` 的话：

      ```
      vim ~/.bashrc
      ```

      在文件末尾加入：

      ```
      # JAVA
      export CLASSPATH=".:/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH"
      alias antlr4='java -Xmx500M -cp "/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
      alias grun='java -Xmx500M -cp "/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH" org.antlr.v4.gui.TestRig'
      ```

      然后更新：

      ```
      source ~/.bashrc
      ```

      

   2. 如果用的是 `zsh` 的话：

      ```
      vim ~/.zshrc
      ```

      在文件末尾加入：

      ```
      # JAVA
      export CLASSPATH=".:/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH"
      alias antlr4='java -Xmx500M -cp "/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
      alias grun='java -Xmx500M -cp "/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH" org.antlr.v4.gui.TestRig'
      ```

      然后更新：

      ```
      source ~/.zshrc
      ```

      

