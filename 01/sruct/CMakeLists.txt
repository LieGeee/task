cmake_minimum_required(VERSION 3.25)
project(sruct)

set(CMAKE_CXX_STANDARD 17)

add_executable(sruct main.cpp)
add_executable(linkList 02_linkList/linkList.cpp 02_linkList/linkList.h 02_linkList/main.cpp)
