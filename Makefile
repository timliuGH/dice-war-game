main: main.o game.o utility.o
	g++ main.o game.o utility.o -o main

game.o: game.cpp game.hpp
	g++ -c game.cpp

die.o: die.cpp die.hpp
	g++ -c die.cpp

utility.o: utility.cpp utility.hpp
	g++ -c utility.cpp
