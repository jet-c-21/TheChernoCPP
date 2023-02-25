//
// Created by puff on 2023-01-17.
//

#include "timing_in_cpp.hpp"
#include <iostream>
#include <chrono>
#include <thread>

struct Timer {
//  std::chrono::time_point<std::chrono::steady_clock> start, end; // for windows
  std::chrono::high_resolution_clock::time_point start, end;
  std::chrono::duration<float> duration;

  Timer() {
    start = std::chrono::high_resolution_clock::now();
  }

  ~Timer() {
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;

    float ms = duration.count() * 1000.0f;
    std::cout << "Timer took " << ms << "ms" << std::endl;
  }

};

void Function_for_timer() {
  Timer timer;
  for (int i = 0; i < 100; i++) {
    std::cout << "Hello\n";
  }
}

void timing_in_cpp_main() {
//  using namespace std::literals::chrono_literals;
//
//  auto start = std::chrono::high_resolution_clock::now();
//  std::this_thread::sleep_for(1s);
//  auto end = std::chrono::high_resolution_clock::now();
//
//  std::chrono::duration<float> duration = end - start;
//  std::cout << duration.count() << "s " << std::endl;

  Function_for_timer();

}