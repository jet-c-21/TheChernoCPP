#include "implicit_and_explicit_kw_in_cpp.hpp"
class EntityEp39 {
 private:
  std::string m_Name;
  int m_Age;
 public:
  EntityEp39(const std::string &name) : m_Name(name), m_Age(-1) {}
  explicit EntityEp39(int age) : m_Name("Unknown"), m_Age(age) {}
};

void implicit_and_explicit_kw_in_cpp() {
//  EntityEp39 a("Cherno"); // normal way
//  EntityEp39 b(22); // normal way

  EntityEp39 a = std::string("Cherno"); //
//  EntityEp39 b = 22; // implicit conversion


}