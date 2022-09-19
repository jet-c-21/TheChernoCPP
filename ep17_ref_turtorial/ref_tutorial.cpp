#include "ref_tutorial.hpp"

void increment_by_ptr(int* val) {
  (*val)++;
}

void increment_by_ref(int& val) {
  val++;
}

void ref_tutorial_main() {
  int a = 5;
//  increment_by_ptr(&a);

  increment_by_ref(a);
  log(a);

  log("bad practice of re-ref an object");
  int x = 6;
  int y = 9;
  int& ref = x;
  ref = y;
  log(x);
  log(y);

  log("good practice");
  int m = 10;
  int n = 100;
  int* ref_2 = &m;
  log(*ref_2);
  ref_2 = &n;
  log(*ref_2);


}