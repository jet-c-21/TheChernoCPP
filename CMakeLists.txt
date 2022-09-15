cmake_minimum_required(VERSION 3.15)
project(TheChernoCPP)

set(CMAKE_CXX_STANDARD 20)

aux_source_directory(TheChernoCPP ep16_pointer_tutorial)

file(GLOB TheChernoCPPSrc
        "*.cpp"
        "*.hpp"
        "ep*/*"
        )

add_executable(TheChernoCPP main.cpp ${TheChernoCPPSrc})
