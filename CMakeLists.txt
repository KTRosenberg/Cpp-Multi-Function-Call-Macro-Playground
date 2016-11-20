cmake_minimum_required(VERSION 3.6)
project(macro_tests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp __B.cpp __B.h __A.cpp __A.h Construct_One_Step.h)
add_executable(macro_tests ${SOURCE_FILES})