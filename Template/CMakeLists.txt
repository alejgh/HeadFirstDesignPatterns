file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Template ${SOURCE_FILES})
target_include_directories(Template PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)