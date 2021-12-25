#include <bits/stdc++.h>


using namespace std;
class Game {
    unordered_map<uint16_t, uint16_t> move_table;
    unordered_map<uint64_t, int> score_table;
    void compute_move_table();
    void compute_score_table();
    void init();
public:
    Game();    
};