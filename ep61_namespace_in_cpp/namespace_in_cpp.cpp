//
// Created by puff on 2023-01-12.
//

#include "namespace_in_cpp.hpp"
#include <iostream>
#include <string>
#include <algorithm>

namespace apple {
//namespace functions {
void print(const char *text) {
  std::cout << text << std::endl;
}

void print_again() {}

//}
}

namespace orange {
void print(const char *text) {
  std::string temp = text;
  std::reverse(temp.begin(), temp.end());
  std::cout << temp << std::endl;
}
}

namespace dog {
  namespace function {
    void print(const char *text) {
      std::cout << text << std::endl;
    }
  }
}

void namespace_in_cpp_main() {
  orange::print("Hello");
  using apple::print;
  print("HI");

  apple::print_again();

  namespace a = apple;
  a::print("123");

  namespace d = dog::function;
  d::print("aaa");
//  using namespace apple;
//  print("Hi");
}