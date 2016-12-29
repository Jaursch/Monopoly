
play: player.o square.o property.o
	g++ square.o property.o -o play
player.o: player.h #player.cpp (commented out)
	g++ player.h -c #player.cpp
square.o: square.cpp square.h
	g++ square.cpp square.h -c
property.o: property.cpp property.h
	g++ property.cpp property.h -c
clean:
	rm -f *.o *.h.gch #play
