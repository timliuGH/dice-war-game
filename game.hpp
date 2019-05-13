#ifndef GAME_HPP
#define GAME_CPP

#include "player.hpp"

enum MenuOption { PLAY = 1, EXIT };

class Game
{
    private:
        MenuOption menuChoice;
        int rounds;
        Player p1;
        Player p2;

    public:
        Game();
        void setMenuChoice();
        int getMenuChoice();
        void setup();
        Player makePlayer(int);
        void play();
};

#endif
