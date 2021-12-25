#include <bits/stdc++.h>

class Game {
    unordered_map<int, int> move_table;
    unordered_map<int, int> score_table;
    static void compute_move_tables();
    static void compute_score_tables();
    void init();
}