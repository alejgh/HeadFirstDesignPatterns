file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Strategy ${SOURCE_FILES})
target_include_directories(Strategy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)