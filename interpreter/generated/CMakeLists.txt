# -*- mode:cmake -*-
if(NOT UNIX)
    message(WARNING "Unsupported operating system")
endif()

cmake_minimum_required(VERSION 3.16)
project(generated)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE RELEASE)
else()
    string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
endif()
message(STATUS "Building GENERATED in ${CMAKE_BUILD_TYPE} mode")

# define some variables
set(GENERATED generated CACHE INTERNAL "")
set(GENERATED_SRC
    MSqlParserBaseListener.cpp
    MSqlParserBaseListener.h
    MSqlParserBaseVisitor.cpp
    MSqlParserBaseVisitor.h
    MSqlParserListener.cpp
    MSqlParserListener.h
    MSqlParserVisitor.cpp
    MSqlParserVisitor.h
    MSqlParser.cpp
    MSqlParser.h
    MSqlLexer.cpp
    MSqlLexer.h
)

# add subdirectoy into the project
add_subdirectory(antlr4_cpp_runtime)

# add the variables into the library
add_library(${GENERATED} ${GENERATED_SRC})

# link libraries
target_link_libraries(
    ${GENERATED} PUBLIC
    antlr4_cpp_runtime
)

# include directories
target_include_directories(
    ${GENERATED} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    antlr4_cpp_runtime
)
