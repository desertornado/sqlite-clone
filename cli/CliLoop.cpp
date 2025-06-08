//
// Created by andrea on 02/06/25.
//

#include "CliLoop.h"

#include <iostream>

#include "Command/ExitCommand.h"
#include "Command/HelpCommand.h"

namespace cli {

    enum AdmittedCommands {
        EXIT,
        HELP,
        UNKNOWN
    } admitted_command;

    AdmittedCommands getAdmittedCommand(std::string input) {
        if (input.compare("-exit") == 0) return EXIT;
        if (input.compare("-help") == 0) return HELP;
        return UNKNOWN;

    }


    int cli_loop(std::string input) {
        while (true) {
            std::cout << "Please enter a command: (-exit, -help)\n";
            std::getline(std::cin, input);

            if (input.at(0) == '-') {
                AdmittedCommands command = getAdmittedCommand(input);
                switch (command) {

                    case EXIT: {
                        ExitCommand *exit_command = new ExitCommand();
                        return exit_command->doExit();
                    }

                    case HELP: {
                        HelpCommand *help_command = new HelpCommand();
                        std::cout << help_command->doHelp() << std::endl;
                        continue;
                    }
                        case UNKNOWN: {
                        std::cout << "Unknown command." << std::endl;
                    }
                        default: {
                        std::cout << "Unknown command." << std::endl;
                    }

                    // case "-query": {
                    //     std::cout << "Syntax TBD";
                    //     continue;
                    // }

                }
            } else
                std::cout << std::endl << input <<  "Unknown command\n ";

        }

    }
} // cli
