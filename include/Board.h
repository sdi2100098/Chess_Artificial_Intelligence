#pragma once

#include <string>

namespace chess {

class Board {
public:
    Board();
    ~Board();

    // Load a position from FEN (placeholder)
    bool load_fen(const std::string &fen);

    // Reset to starting position
    void reset();
};

} // namespace chess
