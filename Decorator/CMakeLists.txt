file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Decorator ${SOURCE_FILES})
target_include_directories(Decorator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)