CC = g++ -std=c++11
exe_file = shows-tracker

$(exe_file): main.o menu.o management.o show.o

	$(CC) main.o menu.o management.o show.o -o $(exe_file)
main.o: main.cpp
	$(CC) -c main.cpp

menu.o: menu.cpp
	$(CC) -c menu.cpp

management.o: management.cpp
	$(CC) -c management.cpp

show.o: show.cpp
	$(CC) -c show.cpp

clean:
	rm -f *.out *o $(exe_file)

cleanish:
	rm -f *o
