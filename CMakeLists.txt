cmake_minimum_required(VERSION 3.5)

project(Lib8tion)

include_directories(${CMAKE_CURRENT_LIST_DIR}/src)
add_executable(lib8tiontest ${CMAKE_CURRENT_LIST_DIR}/extras/test/lib8tiontest.cpp)
