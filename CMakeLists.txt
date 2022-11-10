cmake_minimum_required(VERSION 3.23)
project(KeyLogger)

set(CMAKE_CXX_STANDARD 23)

add_executable(KeyLogger saveData.h main.cpp)
