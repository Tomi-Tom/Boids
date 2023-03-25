cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)
project(Boids)

include_directories(include)
include_directories(include/class)
include_directories(include/class/interface)
include_directories(include/class/abstract)
include_directories(src/playground)

add_executable(Boids
        src/main.cpp
        include/class/abstract/ABoid.cpp
        src/playground/Playground.cpp
        src/factory/Factory.cpp
        )

if (WIN32)
    set(SFML_DIR "C:/SFML-2.5.1/lib/cmake/SFML")
    find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
    target_link_libraries(Boids
            sfml-graphics
            sfml-window
            sfml-system
            )
elseif (UNIX AND NOT APPLE)
    find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
    target_link_libraries(Boids
            sfml-graphics
            sfml-window
            sfml-system
            pthread
            )
endif()
