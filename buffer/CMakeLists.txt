# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(buffer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

set(BUFFER buffer CACHE INTERNAL "")
set(BUFFER_SRC
    buffer.hpp
    buffer.cpp
)

# add the variables into the library
add_library(${BUFFER} ${BUFFER_SRC})

# links the object file to the library file
target_link_libraries(
    ${BUFFER} PUBLIC
)

# include directories
target_include_directories(
    ${BUFFER} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
