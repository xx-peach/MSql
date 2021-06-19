# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(utils)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

set(UTILS utils CACHE INTERNAL "")
set(UTILS_SRC
    attribute.hpp
    element.hpp
    fieldType.hpp
    index.hpp
    selectCondition.hpp
    table.hpp
    tuple.hpp
)

# add the variables into the library
add_library(${UTILS} ${UTILS_SRC})

# links the object file to the library file
target_link_libraries(
    ${UTILS} PUBLIC
)

# include directories
target_include_directories(
    ${UTILS} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
