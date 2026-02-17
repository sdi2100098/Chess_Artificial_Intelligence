#include "Board.h"
#include <iostream>

namespace chess {

Board::Board() { }
Board::~Board() { }

bool Board::load_fen(const std::string &fen) {
    // Placeholder: not implemented yet
    (void)fen;
    std::cout << "Board::load_fen() placeholder\n";
    return true;
}

void Board::reset() {
    std::cout << "Board::reset() placeholder\n";
}

} // namespace chess
