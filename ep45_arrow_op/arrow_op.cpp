#include "arrow_op.hpp"

class EntityEp55{
 public:
  void Print() const {std::cout << "Hello!" << std::endl;}

};

class ScopedPtr{
 private:
  EntityEp55* m_Obj;
 public:
  ScopedPtr(EntityEp55* entity) : m_Obj(entity) {

  }

  ~ScopedPtr(){
    delete m_Obj;
  }

  EntityEp55* operator->(){
    return m_Obj;
  }

};

struct Vector3{
  float x,y,z;
};


void arrow_op_main() {
  EntityEp55 e;
  e.Print();

  EntityEp55* ptr = &e;
  EntityEp55& entity0 = *ptr;
  entity0.Print();

  ScopedPtr entity = new EntityEp55();
  entity->Print();

//  int offset = (int)&((Vector3*)nullptr) -> z; // dont work in mac
//  std::cout << offset << std::endl;


}