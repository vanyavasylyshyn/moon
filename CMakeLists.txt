cmake_minimum_required(VERSION 3.26)
project(moon)

set(CMAKE_CXX_STANDARD 23)

add_executable(moon main.cpp
        src/graphics/window.h
        src/graphics/window.cpp
        src/maths/vec2.h
        src/maths/vec2.cpp
        src/maths/vec3.h
        src/maths/vec3.cpp
        src/maths/vec4.h
        src/maths/vec4.cpp
        src/maths/maths.h
        src/maths/mat4.h
        src/maths/mat4.cpp
        src/maths/maths_func.h)

find_package(GLEW REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

target_link_libraries(moon PRIVATE glfw GLEW::glew "-framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo")
