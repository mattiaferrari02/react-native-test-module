cmake_minimum_required(VERSION 3.4.1)
project(TestModule)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

add_library(react-native-test-module            SHARED
            ../cpp/react-native-test-module.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
