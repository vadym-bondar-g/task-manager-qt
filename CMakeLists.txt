cmake_minimum_required(VERSION 3.16)
project(TaskManager)
set(CMAKE_CXX_STANDARD 17)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
add_executable(TaskManager src/main.cpp)

target_link_libraries(TaskManager Qt6::Widgets)

