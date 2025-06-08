//
// Created by andrea on 31/05/25.
//

#include "ICommand.h"

#include <string>

namespace cli {


    auto ICommand::doExit() -> int {
        return EXIT_SUCCESS;
    }


    auto ICommand::doHelp() -> std::string {
        return "Need some help?";
    }
}

