#include <iostream>
#include <string>
#include "game.hpp"
#include "utility.hpp"

// Definition of Game constructor; displays the menu
Game::Game()
{
    std::cout << "\nWelcome to Dice War!\n\n";
    std::cout << "Select 1 to play game or 2 to exit.\n";
    std::cout << "1. Play game\n";
    std::cout << "2. Exit game" << std::endl;
}

// Definition of setMenuChoice with input validation
void Game::setMenuChoice()
{
#if 0
    std::string user;
    getline(std::std::cin, user);

    // Ensure input is one char and either 1 or 2
    while (user.length() != 1 || 
           (user.compare("1") != 0 && user.compare("2") != 0))
    {
        std::cout << "Select 1 to play game or 2 to exit." << std::endl;
        getline(std::std::cin, user);
    }
    // Convert user input to int value and save
    menuChoice = static_cast<int>(user[0] - '0');
#endif

    menuChoice = getPositiveInt();

}

int Game::getMenuChoice()
{
    return menuChoice;
}

void Game::setup()
{
    std::cout << "\nNumber of rounds: ";

}
