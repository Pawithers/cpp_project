cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(CHAPTER_1 CXX)

set(COMP_LIB comp)
set(LEET_LIB leet_lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(COMP_INCLUDE_DIRS "")
set(COMP_SOURCES "")

set(LEET_INCLUDE_DIRS "")
set(LEET_SOURCES "")

add_library(${COMP_LIB} STATIC)
add_library(${LEET_LIB} STATIC)

add_subdirectory(chapter_1_lib)
add_subdirectory(leetcode_prob)

target_sources(${COMP_LIB} PUBLIC ${COMP_SOURCES})
target_sources(${LEET_LIB} PUBLIC ${LEET_SOURCES})

add_executable(comp_exe ${PROJECT_SOURCE_DIR}/main.cpp)

target_link_libraries(comp_exe PUBLIC ${COMP_LIB} ${LEET_LIB})
target_include_directories(comp_exe PUBLIC ${COMP_INCLUDE_DIRS} ${LEET_INCLUDE_DIRS})