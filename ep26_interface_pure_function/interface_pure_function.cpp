//
// Created by puff on 2022-10-07.
//
#include "interface_pure_function.hpp"
class Printable {
 public:
  virtual std::string GetClassName() = 0;
};

// interface is just class in c++
class EntityEp26 : public Printable {
 public:
//  virtual std::string GetName() = 0; // set to be pure virtual
  virtual std::string GetName(){return "Entity";}
  std::string GetClassName() override {return "Entity";}
};


class PlayerEp26 : public EntityEp26 {
 private:
  std::string m_Name;
 public:
  PlayerEp26(const std::string &name) : m_Name(name) {}

  std::string GetName() override { return m_Name; }
  std::string GetClassName() override {return "Player";}
};

void Print(Printable* obj) {
  std::cout << obj->GetClassName() << std::endl;
}

void interface_pure_func_main() {
  EntityEp26* e = new EntityEp26();
  Print(e);

  PlayerEp26* p = new PlayerEp26("puff");
  Print(p);
}

