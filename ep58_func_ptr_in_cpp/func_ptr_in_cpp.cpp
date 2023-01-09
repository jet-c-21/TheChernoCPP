//
// Created by puff on 2023-01-08.
//

#include "func_ptr_in_cpp.hpp"
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

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

void ForEach(const std::vector<int> &values, const std::function<void(int)> &func) {
//  void(*func)(int)
  for (int val : values)
    func(val);
}

void func_ptr_in_cpp_main_2() {
  std::vector<int> values = {1, 5, 4, 2, 3};
  auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
  std::cout << *it << std::endl;

  ForEach(values, PrintValue);

  int a = 5;

  auto lambda = [=](int value) { std::cout << "Val = " << a << std::endl; };
  ForEach(values, lambda);

}