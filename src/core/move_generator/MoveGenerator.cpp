#include "MoveGenerator.h"
#include <iostream>

namespace chess {

MoveGenerator::MoveGenerator() { }
MoveGenerator::~MoveGenerator() { }

std::vector<Move> MoveGenerator::generate_moves() const {
    std::cout << "MoveGenerator::generate_moves() placeholder\n";
    return {};
}

} // namespace chess
