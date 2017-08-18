cmake_minimum_required(VERSION 3.8)
project(HeadFirstDesignPatterns)

set(CMAKE_CXX_STANDARD 14)

file(GLOB INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/*/include")
include_directories(${INCLUDE_DIRS})

file(GLOB STRATEGY_SOURCE_FILES "${CMAKE_SOURCE_DIR}/Strategy/src/*.cpp")
add_executable(Strategy ${STRATEGY_SOURCE_FILES})

file(GLOB OBSERVER_SOURCE_FILES "${CMAKE_SOURCE_DIR}/Observer/src/*.cpp")
add_executable(Observer ${OBSERVER_SOURCE_FILES})

file(GLOB DECORATOR_SOURCE_FILES "${CMAKE_SOURCE_DIR}/Decorator/src/*.cpp")
add_executable(Decorator ${DECORATOR_SOURCE_FILES})

file(GLOB FACTORY_METHOD_SOURCE_FILES "${CMAKE_SOURCE_DIR}/FactoryMethod/src/*.cpp")
add_executable(FactoryMethod ${FACTORY_METHOD_SOURCE_FILES})

file(GLOB ABSTRACT_FACTORY_SOURCE_FILES "${CMAKE_SOURCE_DIR}/AbstractFactory/src/*.cpp")
add_executable(AbstractFactory ${ABSTRACT_FACTORY_SOURCE_FILES})