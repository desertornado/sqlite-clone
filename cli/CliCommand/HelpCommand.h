//
// Created by andrea on 01/06/25.
//

#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H



#include "ICommand.h"


class HelpCommand : public cli::ICommand {
public:

    HelpCommand() = default;
    ~HelpCommand() = default;

    static std::string doHelp() {};
    //exceptions handled in the future



};



#endif //HELPCOMMAND_H
