cmake_minimum_required(VERSION 3.15)
project(MyHello)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})
set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CONAN_DIR}/cmake")


find_package(Conan)
conan_add_remote(NAME jfrog
    URL https://jfrog.io/artifactory/api/conan/)

conan_package(
    NAME hello
    VERSION 0.1.0
    REQUIRES gtest/1.10.0
    OPTIONS BUILD_TESTS=OFF)


add_library(hello STATIC hello.cpp)
add_executable(greet main.cpp)
target_link_libraries(greet hello)
if (WIN32 AND "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    target_link_libraries(greet stdc++)
endif()
