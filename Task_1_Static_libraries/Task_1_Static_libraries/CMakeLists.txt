cmake_minimum_required(VERSION 3.22.0)
project(StaticClass)
add_library(StaticLibraryLib STATIC StaticClass.cpp)
add_executable(StaticLibraryExe ../StaticLibrariesClient/StaticLibrariesClient.cpp)
target_link_libraries(StaticLibraryExe StaticLibraryLib)
 