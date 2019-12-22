fantasy: main.o character.o vampire.o barbarian.o bluemen.o medusa.o harrypotter.o menu.o
	g++ main.o character.o vampire.o barbarian.o bluemen.o medusa.o harrypotter.o menu.o -o fantasy

main.o: main.cpp
	g++ -c main.cpp

character.o: character.cpp
	g++ -c character.cpp

vampire.o: vampire.cpp
	g++ -c vampire.cpp

barbarian.o: barbarian.cpp
	g++ -c barbarian.cpp

bluemen.o: bluemen.cpp
	g++ -c bluemen.cpp

medusa.o: medusa.cpp
	g++ -c medusa.cpp

harrypotter.o: harrypotter.cpp
	g++ -c harrypotter.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

clean:
	rm *.o fantasy