file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Command ${SOURCE_FILES})
target_include_directories(Command PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)