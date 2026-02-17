cmake_minimum_required(VERSION 3.10)
project(ChessEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE ENGINE_SOURCES src/*.cpp)

add_library(engine STATIC ${ENGINE_SOURCES})

add_executable(cli apps/cli/main.cpp)
target_link_libraries(cli PRIVATE engine)

add_executable(perft tests/perft.cpp)
target_link_libraries(perft PRIVATE engine)

option(BUILD_TESTS "Build tests" ON)
if(BUILD_TESTS)
  enable_testing()
endif()
