#pragma once

namespace chess {

class Evaluator {
public:
    Evaluator();
    ~Evaluator();
    int evaluate() const; // placeholder returns centipawn estimate
};

} // namespace chess
