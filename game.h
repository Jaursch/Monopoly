#ifndef GAME_H
#define GAME_H

#include "./header.h"
#include "./player.h" 
#include "./square.h" 

class game{
	protected:
	   	player *p //array that holds the players
		square *Board //36 squares that hold the board locations
	public: 
		square * create_board(Board);
		player * create_players(p);
	       	void decide_start(p);
		void play_game();
	       		
			

}
