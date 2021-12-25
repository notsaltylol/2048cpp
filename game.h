#include <bits/stdc++.h>

class Board {
    int board;
    Board();
}

class Game {
    Board b;
    unordered_map<int, int> move_table;
    unordered_map<int, int> score_table;
    static void compute_move_tables();
    static void compute_score_tables();
}