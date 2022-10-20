#include "virtual_func_in_cpp.hpp"

class EntityEp26 {
 public:
  virtual std::string GetName() { return "Entity"; }
};

class Player : public EntityEp26 {
 private:
  std::string m_Name;
 public:
  Player(const std::string &name) : m_Name(name) {}

  std::string GetName() override { return m_Name; }
};

void PrintName(EntityEp26 *entity) {
  std::cout << entity->GetName() << std::endl;
}

void virtual_func_in_cpp() {
//  EntityEp26* e = new EntityEp26();
//  std::cout << e->GetName() << std::endl;
//
//  Player* p = new Player("Cherno");
//  std::cout << p->GetName() << std::endl;

//  EntityEp26* entity = p;
//  std::cout << entity->GetName() << std::endl;

  EntityEp26 *e = new EntityEp26();
  PrintName(e);

  Player* p = new Player("Cherno");
  PrintName(p);

}