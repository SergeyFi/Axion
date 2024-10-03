cmake_minimum_required(VERSION 3.29)
project(Axion)

set(CMAKE_CXX_STANDARD 20)

# libs
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
find_package(Vulkan REQUIRED)

add_executable(Axion src/main.cpp
        src/window.h
        src/window.cpp
        src/App.cpp
        src/App.h)

# link libs
target_link_libraries(Axion PRIVATE glfw glm::glm Vulkan::Vulkan)
