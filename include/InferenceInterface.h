#pragma once

#include <string>

namespace chess {

class InferenceInterface {
public:
    virtual ~InferenceInterface() = default;
    // Load model from file (ONNX, jit, etc.)
    virtual bool load_model(const std::string &path) = 0;
    // Evaluate features and return value in centipawns (placeholder)
    virtual int evaluate(const void *features) = 0;
};

} // namespace chess
