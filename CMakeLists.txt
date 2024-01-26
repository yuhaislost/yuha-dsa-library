cmake_minimum_required(VERSION 3.20.5)

set(CMAKE_CXX_STANDARD 20)
project(YuhaDSA)

set(LOCAL_PROJECT_NAME "YuhaDSA")
set(LOCAL_PROJECT_VERSION "0.0.1")
set(LOCAL_PROJECT_DESCRIPTION "A datastructures and algorithms library")

set(HEADERS vector.hpp linkedlist.hpp utils.hpp)
set(SOURCES vector.cpp linkedlist.cpp utils.cpp)
set(DEFINES )
set(OPTIONS )

project(${LOCAL_PROJECT_NAME} VERSION ${LOCAL_PROJECT_VERSION} LANGUAGES CXX)

add_executable(${LOCAL_PROJECT_NAME})

list(TRANSFORM HEADERS PREPEND "include/")
list(TRANSFORM SOURCES PREPEND "src/")

target_include_directories(${LOCAL_PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_sources(${LOCAL_PROJECT_NAME} PRIVATE ${SOURCES} ${HEADERS})
target_compile_definitions(${LOCAL_PROJECT_NAME} PRIVATE ${DEFINES})
target_compile_options(${LOCAL_PROJECT_NAME} PRIVATE ${OPTIONS})



