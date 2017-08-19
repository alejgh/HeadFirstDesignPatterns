file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(FactoryMethod ${SOURCE_FILES})
target_include_directories(FactoryMethod PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)