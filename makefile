main: main.o game.o player.o die.o loaded_die.o utility.o
	g++ -g main.o game.o player.o die.o loaded_die.o utility.o -o main

game.o: game.cpp game.hpp
	g++ -c game.cpp

player.o: player.cpp player.hpp
	g++ -c player.cpp

die.o: die.cpp die.hpp
	g++ -c die.cpp

loaded_die.o: loaded_die.cpp loaded_die.hpp
	g++ -c loaded_die.cpp

utility.o: utility.cpp utility.hpp
	g++ -c utility.cpp
