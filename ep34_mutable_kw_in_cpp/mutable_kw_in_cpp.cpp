#include "mutable_kw_in_cpp.hpp"

class EntityEp34{
 private:
  std::string m_Name;
  mutable int m_DebugCount = 0;
 public:
  const std::string& GetName() const{
    m_DebugCount++;
    return m_Name;
  }
};


void mutable_kw_in_cpp() {
  const EntityEp34 e;
  e.GetName();

  int x = 8;
  auto f = [=]() mutable {
    x++;
    std::cout << x << std::endl;
  };
  f();

  std::cout << x << std::endl;

}