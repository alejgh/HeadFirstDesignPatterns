cmake_minimum_required(VERSION 3.8)
project(HeadFirstDesignPatterns)

set(CMAKE_CXX_STANDARD 14)

file(GLOB INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/*/include")
include_directories(${INCLUDE_DIRS})

file(GLOB DUCK_SOURCE_FILES "${CMAKE_SOURCE_DIR}/Ducks/src/*.cpp")
add_executable(Strategy ${DUCK_SOURCE_FILES})