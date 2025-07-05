//
// Created by andrea on 07/06/25.
//

#ifndef UTILS_H
#define UTILS_H
#include <cstdint>
#include <string>


class Utils final {
private:
    std::string name;

public:
    Utils() {
        this->name="utils";
    };
    ~Utils();

    std::string getName() const {
        return name;
    }
    std::uint32_t static generate_random();

};



