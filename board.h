#include "Game.h"

class Board {
    uint64_t board;
    Board();
    void move_left();
    void move_right();
    void move_up();
    void move_down();
    void add_random_tile();
    void print();
};