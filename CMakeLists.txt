cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)
project(Boids)

include_directories(include)
include_directories(include/class)

add_executable(
    Boids
        src/main.cpp
        src/abstract/ABoid.cpp
)
