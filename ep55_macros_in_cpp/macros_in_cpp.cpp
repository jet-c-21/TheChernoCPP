#include "macros_in_cpp.hpp"
#include <iostream>
#include <string>

#define WAIT std::cin.get();

#if defined(DEBUG)
#define LOG(x) std::cout << x << std::endl;
#elif defined(RELEASE)
#define LOG(x);
#else
#define LOG(x);

#endif

void macros_in_cpp_main() {
  LOG("");
}