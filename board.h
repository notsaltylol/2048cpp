#include "Game.h"

class Board {
    unsigned long long board;
    Board();
    void move_left();
    void move_right();
    void move_up();
    void move_down();
    void add_random_tile();
    void print();
}