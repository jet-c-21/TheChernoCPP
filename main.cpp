#include <iostream>
#include "Math.hpp"
#include "ep_test/test_file.hpp"
#include "ep16_pointer_tutorial/pointer_tutorial.hpp"
#include "ep17_ref_turtorial/ref_tutorial.hpp"
#include "ep18_class_in_cpp/class_in_cpp.hpp"
#include "ep20_first_class/first_class.hpp"
#include "ep21_static_in_cpp/static_in_cpp.hpp"

//int s_var = 10;
extern int s_var;

void function() {

}

int main() {
//  test_main();
//  pointer_tutorial_main();
//  ref_tutorial_main();
//  class_in_cpp_main();
//  first_class_main();
  static_in_cpp_main();
  std::cout << s_var << std::endl;
  return 0;
}
