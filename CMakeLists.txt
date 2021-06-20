# -*- mode:cmake -*-
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")

SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(MSql)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

# add subdirectoy into the ptoject
add_subdirectory(buffer)
add_subdirectory(index)
add_subdirectory(record)
add_subdirectory(ui)
add_subdirectory(api)
add_subdirectory(interpreter)
# add_subdirectory(catalog)
# add_subdirectory(utils)

# add the executable 
add_executable(MSql main.cpp)

# links the object file to the library file
target_link_libraries(
    MSql PUBLIC
    buffer
    index
    record
    ui
    api
    interpreter
    # catalog
    # utils
)

# include the subdirectories
target_include_directories(
    MSql PUBLIC
    buffer
    index
    record
    ui
    api
    interpreter
    # catalog
    # utils
)
