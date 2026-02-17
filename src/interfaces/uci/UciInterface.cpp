#include "UciInterface.h"
#include <iostream>

namespace chess {

UciInterface::UciInterface() { }
UciInterface::~UciInterface() { }

void UciInterface::run() {
    std::cout << "UCI interface placeholder. Type 'quit' to exit.\n";
    std::string cmd;
    while (std::getline(std::cin, cmd)) {
        if (cmd == "quit") break;
        // Very small placeholder: echo
        std::cout << "Received: " << cmd << std::endl;
    }
}

} // namespace chess
