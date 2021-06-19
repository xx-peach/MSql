# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(ui)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

set(UI ui CACHE INTERNAL "")
set(UI_SRC
    ui.hpp
    ui.cpp
)

# add the variables into the library
add_library(${UI} ${UI_SRC})

# links the object file to the library file
target_link_libraries(
    ${UI} PUBLIC
)

# include directories
target_include_directories(
    ${UI} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
