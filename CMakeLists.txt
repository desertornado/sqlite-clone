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
        DBEngine/src/DBDataTypes/schema.cpp
        DBEngine/src/DBDataTypes/schema.h
        DBEngine/src/DBDataTypes/Utils.cpp
        DBEngine/src/DBDataTypes/Utils.h
        DBEngine/src/DBCommands/ConnectCommand.cpp
        DBEngine/src/DBCommands/ConnectCommand.h
        DBEngine/src/DBCommands/QueryCommands/QuerySelectCommand.cpp
        DBEngine/src/DBCommands/QueryCommands/QuerySelectCommand.h
        DBEngine/src/DBCommands/CommitCommand.cpp
        DBEngine/src/DBCommands/CommitCommand.h
        DBEngine/src/Parser/Parser.cpp
        DBEngine/src/Parser/Parser.h
        DBEngine/src/DBCommands/QueryCommands/QueryInsertIntoCommand.cpp
        DBEngine/src/DBCommands/QueryCommands/QueryInsertIntoCommand.h
        DBEngine/src/DataBase.cpp
        DBEngine/src/DataBase.h
        DBEngine/tests/MockDs/Simple_R_W_Op_Small_DB.cpp
        DBEngine/tests/MockDs/Simple_R_W_Op_Small_DB.h)
target_include_directories(sqlite-clone PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/cli")


