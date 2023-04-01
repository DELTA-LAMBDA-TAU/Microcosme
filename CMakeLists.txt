##
##  Project Name : Microcosme
##  Authors: Crooser, Steci, Tom BP
##  Date: 2023-04-01
##  File: CMakeLists.txt
##  Description: CMakeLists.txt
##

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)
project(Microcosme)

include_directories(include)
include_directories(include/Interface)
include_directories(src/Simulation)
include_directories(src/Menu)
include_directories(src/Playground)
include_directories(src/components/Button)

add_executable(Microcosme
        src/main.cpp
        src/Simulation/Simulation.cpp
        src/Menu/Menu.cpp
        src/Playground/Playground.cpp
        src/components/Button/Button.cpp
        )

if (WIN32)
    set(SFML_DIR "C:/SFML-2.5.1/lib/cmake/SFML")
    find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
    target_link_libraries(Microcosme
            sfml-graphics
            sfml-window
            sfml-system
            )
elseif (UNIX AND NOT APPLE)
    find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
    target_link_libraries(Microcosme
            sfml-graphics
            sfml-window
            sfml-system
            )
endif()
