cmake_minimum_required(VERSION 3.27)

if (POLICY CMP0025)
    cmake_policy(SET CMP0025 NEW)
endif()

project(testing)

set(CMAKE_CXX_STANDARD 17)



add_executable(testingExe tests.cpp main.h list.h)


