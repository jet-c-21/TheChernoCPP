//
// Created by puff on 2023-01-08.
//
#include "static_arr_in_cpp.hpp"
#include <array>

template<std::size_t SIZE>
void PrintArray(const std::array<int, SIZE>& data){
  for (int i = 0; i < data.size(); i++) {
    std::cout << data[i] << std::endl;
  }
}


void static_arr_in_cpp_main() {
  std::array<int, 5> data{};
  data[0] = 2;
  data[5] = 9;

  int dataOld[5];
  dataOld[0] = 0;

  PrintArray(data);
}