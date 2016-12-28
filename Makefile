
play: player.o square.o property.o
	g++ player.o square.o property.o -o play
player.o: player.cpp player.h
	g++ player.cpp player.h -c
square.o: square.cpp square.h
	g++ square.cpp square.h -c
property.o: property.cpp property.h
	g++ property.cpp property.h
