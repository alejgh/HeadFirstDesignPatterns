file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(AbstractFactory ${SOURCE_FILES})
target_include_directories(AbstractFactory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)