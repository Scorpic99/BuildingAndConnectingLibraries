cmake_minimum_required (VERSION 3.8)
project ("DinamicLibrariesCMake")
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(CMakeDinamicLib SHARED DinamicLibrariesCMake/DinamicClass.h DinamicLibrariesCMake/DinamicClass.cpp)
add_executable(CMakeDinamicExe DinamicLibrariesCMakeClients/DinamicLibrariesCMakeClients.cpp)
target_link_libraries(CMakeDinamicExe CMakeDinamicLib)

#add_subdirectory ("CMakeDinamicLib")
