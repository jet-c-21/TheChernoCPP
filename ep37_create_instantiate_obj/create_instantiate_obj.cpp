//
// Created by puff on 2022-10-22.
//

#include "create_instantiate_obj.hpp"

using String = std::string;

class EntityEp37 {
 private:
  String m_Name;
 public:
  EntityEp37() : m_Name("Unknown"){}
  EntityEp37(const String& name) : m_Name(name){}

  const String& GetName() const { return m_Name;}
};

void create_instantiate_obj_main() {
  EntityEp37* e;
  {
//    EntityEp37 entity("Cherno"); // create on entity on stack
    EntityEp37* entity = new EntityEp37("Cherno");
    e = entity;
    std::cout << entity->GetName() << std::endl;
  }

  std::cout << e->GetName() << std::endl;
  delete e;
}