cmake_minimum_required(VERSION 3.29)
project(Axion)

set(CMAKE_CXX_STANDARD 20)

# libs
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
find_package(Vulkan REQUIRED)

# make static lib
add_library(AxionEngine STATIC
        src/Private/Axion/App.cpp
        src/Private/Axion/Window.cpp
)

# public headers
target_include_directories(AxionEngine PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Public
)

# link libs
target_link_libraries(AxionEngine PRIVATE glfw glm::glm Vulkan::Vulkan)