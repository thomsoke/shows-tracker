shows: main.o menu.o management.o show.o
	g++ main.o menu.o management.o show.o -o shows

main.o: main.cpp
	g++ -c main.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

management.o: management.cpp
	g++ -c management.cpp

show.o: show.cpp
	g++ -c show.cpp

clean:
	rm *.o shows
