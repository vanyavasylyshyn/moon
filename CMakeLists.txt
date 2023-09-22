cmake_minimum_required(VERSION 3.26)
project(moon)

set(CMAKE_CXX_STANDARD 23)

add_executable(moon main.cpp
        src/graphics/window.h
        src/graphics/window.cpp)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(moon PRIVATE glfw "-framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo")
