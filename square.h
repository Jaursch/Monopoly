#ifndef SQUARE_H
#define SQUARE_H

#include "player.h"
#include "./header.h"

class square{
	private:
		string name;
		char type;
		class player * players_on_square; //??
		class square * next; //linked list
	public:
		virtual void action(class player * player_) = 0;
		string get_name();
		void set_name(string); //name of square
		char get_type();
		void set_type(char); //property, community...
		class square * get_next();
		void set_next(class square *);
};

#endif
