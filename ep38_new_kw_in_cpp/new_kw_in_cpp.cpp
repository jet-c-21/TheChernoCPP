#include "new_kw_in_cpp.hpp"
using String = std::string;

class EntityEp38{
 private:
  String m_Name;
 public:
  EntityEp38():m_Name("Unknown"){}
  EntityEp38(const String& name) :m_Name(name) {}

  const String& GetName() const {return m_Name;}

};


void new_keyword_in_cpp_main() {
  int a = 2;
  int* b = new int[50]; // 200 bytes of memory with operator new[]

//  EntityEp38* e = new EntityEp38(); // it will call the constructor
//  EntityEp38* e = (EntityEp38*) malloc(sizeof(EntityEp38)); // this one will NOT call the constructor

//  EntityEp38* e = new EntityEp38[50];
  EntityEp38* e = new EntityEp38;
  delete e;

  delete[] b;

}