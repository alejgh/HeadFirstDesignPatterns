file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Adapter_Iter ${SOURCE_FILES})
target_include_directories(Adapter_Iter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)