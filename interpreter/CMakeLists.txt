# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(interpreter)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

set(INTERPRETER interpreter CACHE INTERNAL "")
set(INTERPRETER_SRC
    interpreter.hpp
    interpreter.cpp
)

# add subdirectoy into the project
add_subdirectory(generated)

# add the variables into the library
add_library(${INTERPRETER} ${INTERPRETER_SRC})

# links the object file to the library file
target_link_libraries(
    ${INTERPRETER} PUBLIC
    generated
)

# include directories
target_include_directories(
    ${INTERPRETER} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    generated
)
