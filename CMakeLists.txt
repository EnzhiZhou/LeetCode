cmake_minimum_required(VERSION 3.0.0)
project(LeetCode VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

include_directories(include/)

aux_source_directory(src/ DIR_SRCS)

add_executable(${PROJECT_NAME} main.cpp ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
