//
// Created by andrea on 31/05/25.
//

#ifndef ABSTRACTCLICOMMAND_H
#define ABSTRACTCLICOMMAND_H
#include <string>

namespace cli {
    class ICommand {



    public:

        virtual ~ICommand() = default;

        virtual int doExit();

        virtual std::string doHelp();

    };
} // cli

#endif //ABSTRACTCLICOMMAND_H
