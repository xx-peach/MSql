# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(MSql)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

# add the executable 
add_executable(MSql main.cpp)

# add subdirectoy into the ptoject
add_subdirectory(api)
add_subdirectory(buffer)
# add_subdirectory(catalog)
# add_subdirectory(index)
add_subdirectory(interpreter)
add_subdirectory(record)
add_subdirectory(ui)
# add_subdirectory(utils)

# links the object file to the library file
target_link_libraries(
    MSql PUBLIC
    interpreter
    record
    buffer
    index
    api
    ui
    # catalog
    # utils
)

# include the subdirectories
target_include_directories(
    MSql PUBLIC
    interpreter
    record
    buffer
    index
    api
    ui
    # catalog
    # utils
)