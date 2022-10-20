#include "string_in_cpp.hpp"

void PrintStringEp31(const std::string& s) {
  std::cout << s << std::endl;

}


void string_in_cpp_main() {
//  const char* name = "Puff"; // c style way of defining string
//  char *name0 = "Cherno";
//  name0[2] = 'a';
//  char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', 0};
//  char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};
//  std::cout << name2 << std::endl;

//  std::string name = "Cherno" + " hi!"; // bad implement
  std::string name = "Cherno";
  name += " hi!";
  std::cout << name << std::endl;
  std::string name3 = std::string("Cherno") + std::string(" hi!");
  std::string name4 = std::string("Cherno") + " hi!";

  bool if_contains = name.find("no") != std::string::npos;
  std::cout << if_contains << std::endl;


}