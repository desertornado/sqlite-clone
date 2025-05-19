#include <fstream>
#include <iostream>


int main() {

    std::cout << "Hello and welcome to my FOSS c++ sqlite clone!\n";
    std::string input;
    while (true) {
        std::cout << "Please enter a command: (exit)\n";
        std::getline(std::cin, input);

        if (input == "exit") {
            return EXIT_SUCCESS;
        }
    }

    return 0;
}
