cmake_minimum_required(VERSION 3.30)
project(BrandoRDBMS)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(BrandoRDBMS main.cpp src/Car.cpp src/Table.cpp)
