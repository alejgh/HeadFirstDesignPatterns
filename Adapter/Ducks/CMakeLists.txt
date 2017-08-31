file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Adapter_Ducks ${SOURCE_FILES})

target_include_directories(Adapter_Ducks PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)