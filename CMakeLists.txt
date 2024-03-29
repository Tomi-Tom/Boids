cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)
project(Boids)

include_directories(include)
include_directories(include/Interface)
include_directories(src/Simulation)
include_directories(src/Menu)
include_directories(src/Playground)
include_directories(src/components/Button)
include_directories(src/Boid)

add_executable(Boids
        src/main.cpp
        src/Simulation/Simulation.cpp
        src/Menu/Menu.cpp
        src/Playground/Playground.cpp
        src/components/Button/Button.cpp
        src/Boid/Boid.cpp
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
            )
endif()
