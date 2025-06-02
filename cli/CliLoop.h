//
// Created by andrea on 02/06/25.
//

#ifndef CLILOOP_H
#define CLILOOP_H
#include <string>

namespace cli {

class CliLoop {
    public:
    CliLoop() = default;
    ~CliLoop() = default;

    int cli_loop(std::string & input);
};

} // cli

#endif //CLILOOP_H
