#include "./property.h"
 
int property:: get_price(){
	return price;
}

int property:: get_house_cost(){
	return house_cost;  
}

int property:: get_mortgage_cost(){
	return mortgage_cost;
}

int property:: get_houses(){
	return houses;
}

player property:: get_player(){
}

bool property:: get_is_mortgage(){
	return is_mortgage;	
}

void property:: action(class player * curr_player){
	cout<< "action"<<endl;
}
