#include <iostream>
#include "Board.h"
#include "UciInterface.h"

int main(int argc, char **argv) {
    (void)argc; (void)argv;
    chess::Board b;
    b.reset();
    chess::UciInterface uci;
    uci.run();
    return 0;
}
