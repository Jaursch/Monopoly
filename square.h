class square{
	Private:
		string name;
		struct player * players_on_square; //??
		class square * next; //linked list
	Public:
		virtual void action(struct player * player_) = 0; //going to change
		string get_name();
		
}
