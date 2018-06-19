cmake_minimum_required(VERSION 3.10)
project(Project-Euler)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project-Euler main.cpp Problem1/Problem1.cpp Problem1/Problem1.h Problem2/Problem2.cpp Problem2/Problem2.h "Problem3/Problem3.cpp" "Problem3/Problem3.h")