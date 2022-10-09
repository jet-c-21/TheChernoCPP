//
// Created by puff on 2022-10-08.
//

#include "visibility_in_cpp.h"

class EntityEp29 {
 protected:
  int X, Y;
  void Print() {}

 public:
  EntityEp29() {
    X = 0;
    Print();
  }
};

class PlayerEp29 : public EntityEp29 {
 public:
  PlayerEp29() {
    X = 10;
    Print();
  }
};

void visibility_in_cpp_main() {
  EntityEp29 e;
  PlayerEp29 p;
//  e.X = 2;
//  e.Print();

}