cmake_minimum_required(VERSION 3.19)

project(ct_strs VERSION 1.0 LANGUAGES CXX C)
set(CMAKE_CXX_STANDARD 20)
if (MSVC)
    add_compile_options("/Zc:__cplusplus")
    add_compile_options("/Zc:preprocessor")
endif(MSCV)

add_executable(${PROJECT_NAME}_example)
target_include_directories(${PROJECT_NAME}_example PRIVATE include)
target_sources(${PROJECT_NAME}_example PRIVATE example.cpp)