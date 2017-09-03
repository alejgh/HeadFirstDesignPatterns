file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Facade ${SOURCE_FILES})
target_include_directories(Facade PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)