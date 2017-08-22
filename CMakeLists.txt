cmake_minimum_required(VERSION 3.8)
project(HeadFirstDesignPatterns)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(${CMAKE_SOURCE_DIR}/AbstractFactory)
add_subdirectory(${CMAKE_SOURCE_DIR}/Decorator)
add_subdirectory(${CMAKE_SOURCE_DIR}/FactoryMethod)
add_subdirectory(${CMAKE_SOURCE_DIR}/Observer)
add_subdirectory(${CMAKE_SOURCE_DIR}/Strategy)
add_subdirectory(${CMAKE_SOURCE_DIR}/Singleton)
add_subdirectory(${CMAKE_SOURCE_DIR}/Command)