//
// Author: Jet Chien
// GitHub: https://github.com/jet-chien
// Create Date: 2/28/22
//
#include <iostream>
#include "Log.hpp"


static int Multiply(int a, int b) {
  Log("Multiply");
  int res = a * b;
  return res;
}

int main() {
  std::cout << Multiply(5, 8) << std::endl;
  std::cin.get();

}
