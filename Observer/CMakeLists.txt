file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(Observer ${SOURCE_FILES})
target_include_directories(Observer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)