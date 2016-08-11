CC=g++
CFLAGS= -std=c++11 -Wall
GBD = -g

be_careful_with_flowers : main.o utils.o
	$(CC) -o be_careful_with_flowers.out $^ $(CFLAGS)

main.o : main.cpp main.hpp globalMap.hpp globalMap.cpp ./utils/utils.cpp ./utils/utils.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

utils.o : ./utils/utils.cpp ./utils/utils.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

map.o : map.cpp map.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

globalMap.o : globalMap.cpp globalMap.hpp map.cpp map.hpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm ./*.o

clean_all : clean
	rm *.out
