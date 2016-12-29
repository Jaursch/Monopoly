#include "./square.h"

string square:: get_name(){
	return name;
}

void square:: set_name(string s){
	name = s;
}
char square:: get_type(){
	return type;
}

void square:: set_type(char t){
	type = t;
}

class square* square:: get_next(){
	return next;
}

void square:: set_next(class square * n){
	next = n;
}


