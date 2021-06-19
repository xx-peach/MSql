# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(index)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

set(INDEX index CACHE INTERNAL "")
set(INDEX_SRC
    bplus_tree.cpp
    bplus_tree.hpp
    index_manager.cpp
    index_manager.hpp
    node.hpp
)

# add the variables into the library
add_library(${INDEX} ${INDEX_SRC})

# links the object file to the library file
target_link_libraries(
    ${INDEX} PUBLIC
)

# include directories
target_include_directories(
    ${INDEX} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
