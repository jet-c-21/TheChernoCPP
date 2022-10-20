#include "const_in_cpp.hpp"

class EntityEp33 {
 private:
  int m_X, m_Y;
  int *m_ptr, *m_ptr2;
  mutable int var;
 public:
  int GetX() const {
//    m_X = 2; // error
    var = 2;
    return m_X;
  }

  const int *const GetPtr() const {
    /*
      we are returning a pointer that cannot be modified
      the contents of the pointer cannot be modified
      this method promises not to modify the actual Entity Class
    */
    return m_ptr;
  }

  void SetX(int x) {
    m_X = x;
  }

};

void PrintEntity(const EntityEp33 &e) {
  std::cout << e.GetX() << std::endl;
}

void const_in_cpp_main() {
  const int MAX_AGE = 90;

  int *a = new int;
  *a = 2;
  a = (int *) &MAX_AGE;
  std::cout << *a << std::endl;

  *a = 30;
  std::cout << a << " " << *a << std::endl;
  std::cout << &MAX_AGE << " " << MAX_AGE << std::endl;

//  const int *b = new int; // they are equal
  int const *b = new int; // they are equal
//  *b = 2; // error
  b = (int *) &MAX_AGE;

  int *const c = new int;
  *c = 2;
//  c = (int *) &MAX_AGE; // error




}