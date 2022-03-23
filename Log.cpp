//
// Author: Jet Chien
// GitHub: https://github.com/jet-chien
// Create Date: 2/27/22
//
#include "Log.hpp"

void InitLog() {
  Log("Initialized Log");
}

void Log(const char *message) {
  std::cout << message << std::endl;
}