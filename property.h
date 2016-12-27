#include "square.h"

class property : public square{
	public:
		int price;
		int house_cost;
		int mortgage_cost;
		int houses;
		class player; //should make a pointer?
		bool is_mortgage;

	private:
		void action(struct class *player_);
		int get_price();
		int get_house_cost();
		int get_mortgage_cost();
		int get_houses();
		class get_player();
		bool get_is_mortgage();
		
}
