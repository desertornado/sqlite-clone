cmake_minimum_required(VERSION 3.31)
project(sqlite-clone)

set(CMAKE_CXX_STANDARD 20)

include_directories(cli)
add_executable(sqlite-clone cli/main.cpp
        cli/CliDataTypes/DataTypes.cpp
        cli/CliDataTypes/DataTypes.hpp)
target_include_directories(sqlite-clone PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/cli")


