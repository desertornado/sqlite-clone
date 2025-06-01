//
// Created by andrea on 31/05/25.
//

#include "ICommand.h"

#include <string>

namespace cli {


    int ICommand::doExit() -> int {
        return EXIT_SUCCESS;
    }


    std::string ICommand::doHelp() -> std::string {
        return "Need some help?";
    }


}

