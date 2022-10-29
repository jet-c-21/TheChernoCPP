cmake_minimum_required(VERSION 3.15)
project(TheChernoCPP)

set(CMAKE_CXX_STANDARD 20)

aux_source_directory(TheChernoCPP ep16_pointer_tutorial)

file(GLOB TheChernoCPPSrc
        "*.cpp"
        "*.hpp"
        "ep*/*"
        )

add_executable(TheChernoCPP main.cpp ${TheChernoCPPSrc} ep28_interface_pure_function/interface_pure_function.cpp ep28_interface_pure_function/interface_pure_function.hpp ep29_visibility_in_cpp/visibility_in_cpp.cpp ep29_visibility_in_cpp/visibility_in_cpp.h ep30_array_in_cpp/array_in_cpp.cpp ep30_array_in_cpp/array_in_cpp.hpp ep37_create_instantiate_obj/create_instantiate_obj.cpp ep37_create_instantiate_obj/create_instantiate_obj.hpp ep40_op_overload_in_cpp/op_overload_in_cpp.cpp ep40_op_overload_in_cpp/op_overload_in_cpp.hpp ep41_this_kw_in_cpp/this_kw_in_cpp.cpp ep41_this_kw_in_cpp/this_kw_in_cpp.hpp)
