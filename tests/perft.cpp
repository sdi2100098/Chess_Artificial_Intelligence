#include <iostream>
#include "Board.h"

int main() {
    chess::Board b;
    b.load_fen("startpos");
    std::cout << "perft placeholder - no nodes counted yet" << std::endl;
    return 0;
}
