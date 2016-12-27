class property : public square{
	public:
		int price;
		int house_cost;
		int mortgage_cost;
		int houses;
		struct player;
		bool is_mortgage;

	private:
		void action(struct player *player_);
		int get_price();
		int get_house_cost();
		int get_mortgage_cost();
		int get_houses();
		struct get_player();
		bool get_is_mortgage();
		
}
