class square{
	private:
		string name;
		class player * players_on_square; //??
		class square * next; //linked list
	public:
		virtual void action(class player * player_) = 0; //going to change
		string get_name();
		
}
