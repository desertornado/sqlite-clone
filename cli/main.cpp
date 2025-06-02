#include <fstream>
#include <iostream>


#include "CliLoop.h"
#include "CliCommand/ExitCommand.h"
#include "CliCommand/HelpCommand.h"



int main() {
    std::cout << "Hello and welcome to my FOSS c++ sqlite clone!\n";
    std::string input;

    auto cliLoop = cli::CliLoop();
    return cliLoop.cli_loop(input);

}
