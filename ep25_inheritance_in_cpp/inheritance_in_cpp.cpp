#include "inheritance_in_cpp.hpp"

class MyEntity {
 public:
  float X, Y;
  void Move(float xa, float ya) {
    X+=xa;
    Y+=ya;
  }
};

class Player : public MyEntity{
 public:
  const char* Name;

  void PrintName() {
    std::cout << "Name is: " << Name << std::endl;
  }

};


void inheritance_in_cpp_main() {
  std::cout << sizeof(Player)<< std::endl;
  Player player;
  player.Move(5, 5);

  player.X = 2;

  std::cout << player.X << std::endl;
  player.PrintName();

}