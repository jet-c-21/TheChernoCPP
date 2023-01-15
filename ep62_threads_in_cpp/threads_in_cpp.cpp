//
// Created by puff on 2023-01-16.
//

#include "threads_in_cpp.hpp"
#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork() {
  using namespace std::literals::chrono_literals;

  std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

  while (!s_Finished) {
    std::cout << "Working..." << std::endl;
    std::this_thread::sleep_for(1s);
  }

}

void threads_in_cpp_main() {
  std::thread worker(DoWork);

  std::cin.get();
  s_Finished = true;

  worker.join();
  std::cout << "Finish Work. " << std::endl;

  std::cout << "Main thread id = " << std::this_thread::get_id() << std::endl;


  std::cin.get();
}