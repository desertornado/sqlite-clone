#include <fstream>
#include <iostream>

enum InputType {
    EXIT,
    HELP,
    OTHER
};

int main() {
    std::cout << "Hello and welcome to my FOSS c++ sqlite clone!\n";
    std::string input;
    while (true) {
        std::cout << "Please enter a command: (exit, help)\n";
        std::getline(std::cin, input);

        switch (input) {
            case EXIT:
                return EXIT_SUCCESS;

            case HELP: {
                std::cout << "Syntax TBD";
                break;
            }

            case OTHER:
                break;
        }
    }

    return 0;
}
