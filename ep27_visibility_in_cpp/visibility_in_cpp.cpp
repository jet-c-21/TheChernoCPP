//
// Created by puff on 2022-10-08.
//

#include "visibility_in_cpp.h"

class EntityEp27 {
 protected:
  int X, Y;
  void Print() {}

 public:
  EntityEp27() {
    X = 0;
    Print();
  }
};

class PlayerEp27 : public EntityEp27 {
 public:
  PlayerEp27() {
    X = 10;
    Print();
  }
};

void visibility_in_cpp_main() {
  EntityEp27 e;
  PlayerEp27 p;
//  e.X = 2;
//  e.Print();

}