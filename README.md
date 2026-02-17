# Chess Artificial Intelligence (C++)

This repository is a personal C++ chess engine project scaffold. It uses a mailbox-first design initially and will later migrate to bitboards. The repo contains a minimal CMake build, placeholder source headers, and a perft test harness.

Build (Linux):

```bash
mkdir -p build && cd build
cmake ..
cmake --build . -- -j
./perft
./cli
```

Next steps: populate `src/` and `include/` with engine code, implement perft, search, and evaluation.
# Chess_Artificial_Intelligence