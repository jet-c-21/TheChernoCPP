//
// Created by puff on 2022-12-04.
//

#include "template_in_cpp.hpp"

template<typename T>
void Print(T val) {
  std::cout << val << std::endl;
}

template<typename T, int N>
class Array{
 private:
  T m_Array[N];
 public:
  int GetSize() const {return N;}
};

void template_in_cpp_main() {
//  Print(5);
//  Print("Hello");
//  Print(5.5f);

  Array<std::string, 5> array;
  std::cout << array.GetSize() << std::endl;

}