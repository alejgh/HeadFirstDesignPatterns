file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Singleton ${SOURCE_FILES})
target_include_directories(Singleton PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)