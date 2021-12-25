#include "game.h"

Game::Game(){
    board = 0;
    compute_move_table();
    compute_score_table();
    init();
}

static void Game::compute_move_table(){
    for(unsigned short i=0; i<0xffff; i++){
        unsigned char i = i;   
    }
}

static void Game::compute_score_table(){
    for(unsigned long long i = 0; i < ULLONG_MAX; i++){
        score_table[i] = 0;
    }
}
