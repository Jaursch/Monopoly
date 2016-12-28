#ifndef PLAYER_H
#define PLAYER_H

#include "./header.h"
#include "./square.h"

class player {
	private:
		string piece;
		class square * current;
		int cash;
		int net_worth;
		class square * properties;
		bool jail_card;
		bool in_jail;		
	public:
		string get_piece();
		void set_piece(string);
		class square * get_current();
		int get_cash();
		void set_cash(int);
		int get_net_worth();
		void set_net_worth(int);
		class square * get_properties();
		void set_properties(square *);
		bool is_jail_card();
		void set_jail_card(bool);
		bool is_in_jail();
		void set_in_jail(bool);
};

#endif
