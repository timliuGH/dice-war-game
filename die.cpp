#include <cstdlib>
#include <ctime>
#include "die.hpp"

#include <iostream>

// Definition of Die constructor
Die::Die(int sides)
{
    this->sides = sides;
}

// Definition of roll function
int Die::roll()
{
    std::cout << "inside Die roll" << std::endl;
    srand(time(0));
    return (rand() % sides) + 1;
}
