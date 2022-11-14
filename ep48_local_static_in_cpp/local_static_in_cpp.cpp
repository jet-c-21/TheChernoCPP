#include "local_static_in_cpp.hpp"

//class Singleton {
// private:
//  static Singleton *s_Instance;
// public:
//  static Singleton &Get() { return *s_Instance; }
//  void Hello() {};
//
//};

class Singleton {
 public:
  static Singleton &Get() {
    static Singleton instance;
    return instance;
  }
  
  void Hello() {};

};

Singleton *Singleton::s_Instance = nullptr;

void Function() {
  static int i = 0;
  i++;
  std::cout << i << std::endl;
}

void local_static_in_cpp_main() {
//  Function();
//  Function();

  Singleton::Get().Hello();

}