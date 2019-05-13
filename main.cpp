#include <iostream>
#include <limits>
#include "game.hpp"

int main()
{
    Game game;
    game.setMenuChoice();

    if (game.getMenuChoice() == PLAY)
    {
        game.setup();
        game.play();
    }

    return 0;
}
