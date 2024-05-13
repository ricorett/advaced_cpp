cmake_minimum_required(VERSION 3.27)

#if (POLICY CMP0025)
#    cmake_policy(SET CMP0025 NEW)
#endif()

project(list_test)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(catch2)
add_executable(${PROJECT_NAME} tests.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
