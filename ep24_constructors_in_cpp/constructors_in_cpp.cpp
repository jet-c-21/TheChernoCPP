# include "constructors_in_cpp.hpp"

class Entity {
 public:
  float x, y;

  Entity() {
    x = 0.0f;
    y = 0.0f;
  }

  Entity(float x_val, float y_val) {
    x = x_val;
    y = y_val;
  }

//  void init() {
//    x = 0.0f;
//    y = 0.0f;
//  }


  void print() {
    std::cout << x << ", " << y << std::endl;
  }

  void greet() {
    std::cout << "Hi!" << std::endl;
  }
};

void constructor_in_cpp_main() {
//  Entity e;
  Entity e(10.f, 5.f);
  std::cout << e.x << std::endl;
  e.print();
//  e.greet();
//  std::cout << e.x;
}