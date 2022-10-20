//
// Created by puff on 2022-10-09.
//

#include "array_in_cpp.hpp"

class ClassA {
 public:
  static const int exampleSize = 5;
  int example[exampleSize];

  std::array<int, 5> another;

  ClassA() {
    for (int i = 0; i < exampleSize; i++)
      example[i] = 2;

    for (int i = 0; i < another.size(); i++)
      another[i] = 2;
  }
};

void array_in_cpp_main() {
  int example[5]; // created on the stack
  int *another = new int[5]; // created on the heap
//  int *ptr = example;

  ClassA a;

//  example[2] = 5;
//  *(ptr + 2) = 5;
//  *(int *) ((char *) ptr + 8) = 5;

//  std::cout << example[0] << std::endl;
//  std::cout << example << std::endl;

}