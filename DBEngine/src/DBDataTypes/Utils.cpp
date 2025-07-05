//
// Created by andrea on 07/06/25.
//

#include "Utils.h"

#include <random>


std::uint32_t static generate_random(){
    std::mt19937 gen(std::random_device{}());

    // Define a uniform distribution for 32-bit unsigned integers
    std::uniform_int_distribution<uint32_t> dist;

    // Generate a random 32-bit unsigned integer
    std::uint32_t random_id = dist(gen);
    return random_id;
}
