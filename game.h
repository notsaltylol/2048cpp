#include <bits/stdc++.h>

class Game {
    static unordered_map<int, int> move_table;
    static unordered_map<int, int> score_table;
    static void compute_move_table();
    static void compute_score_table();
    void init();
}