file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Iterator ${SOURCE_FILES})
target_include_directories(Iterator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)