#include "square.h"

class property : public square{
	public:
		int price;
		int house_cost;
		int mortgage_cost;
		int houses;
		player owner; //should make a pointer?
		bool is_mortgage;

	private:
		void action(class player *);
		int get_price();
		int get_house_cost();
		int get_mortgage_cost();
		int get_houses();
		player get_player();
		bool get_is_mortgage();
};
