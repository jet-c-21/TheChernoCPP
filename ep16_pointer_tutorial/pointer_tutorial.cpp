#include "pointer_tutorial.hpp"

void pointer_tutorial_main() {
  int var = 8;
  int* ptr = &var;
  *ptr = 10;

  char* buffer = new char[8];
  memset(buffer, 1, 8);

  char** buffer_ptr = &buffer;

  delete[] buffer;

  std::cin.get();

}