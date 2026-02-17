#pragma once

#include <vector>
#include <cstdint>

namespace chess {

using Move = uint32_t; // placeholder

class MoveGenerator {
public:
    MoveGenerator();
    ~MoveGenerator();

    // Generate pseudo-legal moves for the current board (placeholder)
    std::vector<Move> generate_moves() const;
};

} // namespace chess
