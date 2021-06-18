# MSql

## Fuck MiniSQL

### Complie and Test
Since there will be specific path information inside the MakeFile(will causes error) if I compile all things in my computer, so in order to test the whole system:
+ first test:
  ```c++
  mkdir build && cd build
  cmake ..
  make -j
  ./MSql
+ for latter test:
  ```c++
  cd build
  make
  ./MSql
