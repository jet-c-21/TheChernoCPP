#include "struct_in_cls_and_struct.hpp"

struct Entity{
  int x, y;

  static void print(){
    std::cout << x << ", " << y << std::endl;
  }
};


void struct_in_cls_and_struct_main() {
  Entity e0;
  e0.x = 2;
  e0.y = 3;

  Entity e1;
  e1.x = 5;
  e1.y = 8;

  Entity::print();

}