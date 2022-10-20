#include "string_literals_in_cpp.hpp"

void string_literals_in_cpp() {
//  char* name = "Cherno"; // undefined behavior
//  name[2] = 'a'; // undefined behavior
  char name[] = "Cherno";
  name[2] = 'a';
  std::cout << name << std::endl;

  const char* puff = "Puff";
  std::cout << puff << std::endl;

  const wchar_t* name2 = L"Cherno";
  const char16_t* name3 = u"Cherno";
  const char32_t* name4 = U"Cherno";

//  std::string s_append = "Cherno"s + " hi!"; // works on windows ?

  const char* example = R"(I
  am
happy)";

  std::cout << example << std::endl;

}