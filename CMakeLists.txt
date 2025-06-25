cmake_minimum_required(VERSION 3.31)
project(sqlite-clone)

set(CMAKE_CXX_STANDARD 20)

include_directories(cli)
add_executable(sqlite-clone cli/main.cpp
        cli/CliDataTypes/DataTypes.cpp
        cli/CliDataTypes/DataTypes.hpp
        cli/Command/ICommand.cpp
        cli/Command/ICommand.h
        cli/Command/ExitCommand.cpp
        cli/Command/ExitCommand.h
        cli/Command/HelpCommand.cpp
        cli/Command/HelpCommand.h
        cli/CliLoop.cpp
        cli/CliLoop.h
        DBEngine/DBDataTypes/schema.cpp
        DBEngine/DBDataTypes/schema.h
        DBEngine/DBDataTypes/Utils.cpp
        DBEngine/DBDataTypes/Utils.h
        DBEngine/DBCommands/ConnectCommand.cpp
        DBEngine/DBCommands/ConnectCommand.h
        DBEngine/DBCommands/QueryCommands/QuerySelectCommand.cpp
        DBEngine/DBCommands/QueryCommands/QuerySelectCommand.h
        DBEngine/DBCommands/CommitCommand.cpp
        DBEngine/DBCommands/CommitCommand.h
        DBEngine/Parser/Parser.cpp
        DBEngine/Parser/Parser.h
        DBEngine/DBCommands/QueryCommands/QueryInsertIntoCommand.cpp
        DBEngine/DBCommands/QueryCommands/QueryInsertIntoCommand.h
        DBEngine/DataBase.cpp
        DBEngine/DataBase.h)
target_include_directories(sqlite-clone PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/cli")


