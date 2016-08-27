cmake_minimum_required (VERSION 2.8.12)
project (GPSData)

# Compiler flags ###############################################################
set(CMAKE_VERBOSE_MAKEFILE 1)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -coverage -std=c++11 -pedantic -Wall -Wextra -Wshadow -Winit-self -Wold-style-cast -Woverloaded-virtual -Werror")

# Setting executable location ##################################################
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Adding subdirectories ########################################################
add_subdirectory(src)
