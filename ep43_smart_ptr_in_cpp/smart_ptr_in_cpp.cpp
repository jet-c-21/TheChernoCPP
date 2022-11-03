#include "smart_ptr_in_cpp.hpp"

class EntityEp44 {
 public:
  EntityEp44() {
    std::cout << "Created Entity! (ep44)" << std::endl;
  }

  ~EntityEp44() {
    std::cout << "Destroyed Entity! (ep44)" << std::endl;
  }

  void Print() {}

};

void smart_ptr_in_cpp_main() {
  {
    std::shared_ptr<EntityEp44> e0;
    {
//    std::unique_ptr<EntityEp44> entity(new EntityEp44);
//      std::unique_ptr<EntityEp44> entity = std::make_unique<EntityEp44>(); // preferred way
//    std::unique_ptr<EntityEp44> e0 = entity; // not allowed, error!
//      entity->Print();

      std::shared_ptr<EntityEp44> sharedEntity = std::make_shared<EntityEp44>();
      e0 = sharedEntity;

    }
  }

  {
    std::weak_ptr<EntityEp44> e0;
    {
      std::shared_ptr<EntityEp44> sharedEntity = std::make_shared<EntityEp44>();
      e0 = sharedEntity;
    }
  }


}