cmake_minimum_required(VERSION 3.6)
project(cmake_project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

add_subdirectory(library)

set(SOURCE_FILES main.cpp)
add_executable(cmake_project ${SOURCE_FILES})

target_link_libraries(cmake_project LINK_PUBLIC library)