#include "obj_lifetime_in_cpp.hpp"

class EntityEp42{
 public:
  EntityEp42(){
    std::cout << "Created Entity!" << std::endl;
  }

  ~EntityEp42(){
    std::cout << "Destroyed Entity!" << std::endl;
  }

};

// bad implementation
int* CreateArray(){
  int array[50];
  return array;
}

class ScopedPtr{
 private:
  EntityEp42* m_Ptr;
 public:
  ScopedPtr(EntityEp42* ptr): m_Ptr(ptr){}

  ~ScopedPtr(){
    delete m_Ptr;
  }

};


void obj_lifetime_in_cpp() {
//  int* a = CreateArray();
//  std::cout << a << std::endl;


  {
    ScopedPtr e = new EntityEp42();
//    ScopedPtr* e = new ScopedPtr(new EntityEp42());
//    EntityEp42* e = new EntityEp42();
  }

  std::cin.get();
}