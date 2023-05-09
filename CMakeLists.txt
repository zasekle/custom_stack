cmake_minimum_required(VERSION 3.25)
project(custom_stack)

set(CMAKE_CXX_STANDARD 23)

add_executable(custom_stack main.cpp custom_stack.h stack_tests.cpp stack_tests.h)
