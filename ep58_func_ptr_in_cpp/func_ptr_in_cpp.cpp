//
// Created by puff on 2023-01-08.
//

#include "func_ptr_in_cpp.hpp"
#include <iostream>
#include <vector>

void HelloWorld(int a) {
  std::cout << "Hello World! Value: " << a << std::endl;
}

void func_ptr_in_cpp_main() {
//  void(*cherno)() = HelloWorld;
//  cherno();

//  auto function = HelloWorld;
//  function();

  typedef void(*HelloWorldFunction)(int);
  HelloWorldFunction f = HelloWorld;

  f(9);

}

void PrintValue(int value) {
  std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int> &values, void(*func)(int)) {
  for (int val : values)
    func(val);
}

void func_ptr_in_cpp_main_2() {
  std::vector<int> values = {1, 5, 4, 2, 3};
  ForEach(values, PrintValue);

  ForEach(values, [](int value) { std::cout << "Val = " << value << std::endl; });

}