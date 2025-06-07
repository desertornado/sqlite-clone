cmake_minimum_required(VERSION 3.31)
project(sqlite-clone)

set(CMAKE_CXX_STANDARD 20)

include_directories(cli)
add_executable(sqlite-clone cli/main.cpp
        cli/CliDataTypes/DataTypes.cpp
        cli/CliDataTypes/DataTypes.hpp
        cli/CliCommand/ICommand.cpp
        cli/CliCommand/ICommand.h
        cli/CliCommand/ExitCommand.cpp
        cli/CliCommand/ExitCommand.h
        cli/CliCommand/HelpCommand.cpp
        cli/CliCommand/HelpCommand.h
        cli/CliLoop.cpp
        cli/CliLoop.h
        DBEngine/DBDataTypes/schema.cpp
        DBEngine/DBDataTypes/schema.h
        DBEngine/DBDataTypes/Utils.cpp
        DBEngine/DBDataTypes/Utils.h)
target_include_directories(sqlite-clone PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/cli")


