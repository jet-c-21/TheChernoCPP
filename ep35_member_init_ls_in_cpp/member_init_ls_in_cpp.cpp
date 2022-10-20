#include "member_init_ls_in_cpp.hpp"

class ExampleEp35 {
 public:
  ExampleEp35() {
    std::cout << "Created Entity!" << std::endl;
  }

  ExampleEp35(int x) {
    std::cout << "Created Entity with " << x << "!" << std::endl;
  }

};

class EntityEp35 {
 private:
  std::string m_Name;
  int m_Score;
  ExampleEp35 m_Example;

 public:
//  EntityEp35() : m_Name("Unknown"), m_Score(0) {
//  }

//  EntityEp35() {
//    m_Name = std::string("Unknown");
//    m_Example = ExampleEp35(8);
//  }

  EntityEp35() : m_Example(8){
    m_Name = std::string("Unknown");

  }

  EntityEp35(const std::string &name) {
    m_Name = name;
  }

  const std::string &GetName() const { return m_Name; }

};

void member_init_ls_in_cpp_main() {
//  EntityEp35 e0;
//  std::cout << e0.GetName() << std::endl;
//
//  EntityEp35 e1("Cherno");
//  std::cout << e1.GetName() << std::endl;

    EntityEp35 e0;

}