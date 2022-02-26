cmake_minimum_required(VERSION 3.15)
project(TheChernoCPP)

set(CMAKE_CXX_STANDARD 20)

file(GLOB TheChernoCPPSrc
        "*.cpp"
        "*.hpp")

add_executable(TheChernoCPP main.cpp ${TheChernoCPPSrc})