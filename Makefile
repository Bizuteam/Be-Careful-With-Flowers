CC = g++
CFLAGS = -std=c++11 -Wall
LFLAGS = -lSDL2
GBD = -g

be_careful_with_flowers : main.o map.o globalMap.o stats.o character.o monster.o playerChar.o utils.o
	$(CC) -o be_careful_with_flowers.out $^ $(CFLAGS)

main.o : main.cpp main.hpp globalMap.hpp globalMap.cpp stats.cpp stats.hpp ./utils/utils.cpp ./utils/utils.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

utils.o : ./utils/utils.cpp ./utils/utils.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

map.o : map.cpp map.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

globalMap.o : globalMap.cpp globalMap.hpp map.cpp map.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

stats.o : stats.cpp stats.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

character.o : character.cpp character.hpp stats.cpp stats.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

monster.o : monster.cpp monster.hpp character.cpp character.hpp stats.cpp stats.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

playerChar.o : playerChar.cpp playerChar.hpp character.cpp character.hpp stats.cpp stats.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm *.o
	rm *.out
