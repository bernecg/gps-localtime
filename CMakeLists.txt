cmake_minimum_required (VERSION 2.8.12)
project (GPSData CXX)

SET(OUTPUT "_output")

# Compiler flags ##############################################################
set(CMAKE_VERBOSE_MAKEFILE 1)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -coverage -std=c++11 -pedantic -Wall -Wextra -Wshadow -Winit-self -Wold-style-cast -Woverloaded-virtual -Werror")

# Adding subdirectories ##############################################################
add_subdirectory(src)

add_custom_target(build-time-make-directory ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory ${OUTPUT})
