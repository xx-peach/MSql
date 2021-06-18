# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(api)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

# add subdirectoy into the project
set(API api CACHE INTERNAL "")
set(API_SRC
    api.hpp
    api.cpp
)

# add the variables into the library
add_library(${API} ${API_SRC})

# links the object file to the library file
target_link_libraries(
    ${API} PUBLIC
)

# include directories
target_include_directories(
    ${API} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
