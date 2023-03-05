cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)
project(Boids)


add_executable(
    template
        src/main/main.cpp
        ${SRCS}
        ${INCLUDES}
)

add_subdirectory(src)