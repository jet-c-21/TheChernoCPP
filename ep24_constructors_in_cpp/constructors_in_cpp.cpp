# include "constructors_in_cpp.hpp"

class MyEntity {
 public:
  float x, y;

  MyEntity() {
    x = 0.0f;
    y = 0.0f;
    std::cout << "Created MyEntity!" << std::endl;
  }

  MyEntity(float x_val, float y_val) {
    x = x_val;
    y = y_val;
  }

  ~MyEntity(){
    std::cout << "Destroyed MyEntity!" << std::endl;
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
//  MyEntity e;
//  MyEntity e(10.f, 5.f);
  MyEntity e;
//  std::cout << e.x << std::endl;
  e.print();
  e.~MyEntity();
//  e.greet();
//  std::cout << e.x;
}