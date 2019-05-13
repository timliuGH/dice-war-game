#include <iostream>
#include <string>
#include "game.hpp"
#include "die.hpp"
#include "utility.hpp"

// Definition of Game constructor; displays the menu
Game::Game()
{
    std::cout << "\nWelcome to Dice War!\n\n";
    std::cout << "Select 1 to play game or 2 to exit.\n";
    std::cout << "1. Play game\n";
    std::cout << "2. Exit game" << std::endl;
}

// Definition of setMenuChoice function 
void Game::setMenuChoice()
{
    menuChoice = static_cast<MenuOption>
                 (
                     getPosInt(2, "Select 1 to play or 2 to exit")
                 );
}

int Game::getMenuChoice()
{
    return menuChoice;
}

// Definition of setup function 
void Game::setup()
{
    std::cout << "\nNumber of rounds (up to 5): ";
    rounds = getPosInt(5, "Number of rounds (up to 5)");

    p1 = makePlayer(1);
    p2 = makePlayer(2);
}

Player Game::makePlayer(int num)
{
    std::cout << "\nPlayer " << num << "'s die type:\n";
    std::cout << "1. Normal die\n";
    std::cout << "2. Loaded die" << std::endl;
    DieType type = static_cast<DieType>
                   (
                       getPosInt(2, "Select 1 for Normal or 2 for Loaded")
                   );

    std::cout << "\n# of sides for player "<< num << "'s die (up to 6): ";
    int sides = getPosInt(6, "Select number of sides up to 6: ");
    return Player(type, sides);
}

void Game::play()
{
    // Make die for each player based on settings
    if (p1.getType() == NORMAL)
        Die p1Die(p1.getSides());
    else
        LoadedDie p1Die(p1.getSides());

    if (p2.getType() == NORMAL)
        Die p2Die(p2.getSides());
    else
        LoadedDie p2Die(p2.getSides());
}
