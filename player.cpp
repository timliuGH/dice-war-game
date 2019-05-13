#include "player.hpp"

// Definition of Player default constructor
Player::Player()
{
    this->type = NORMAL;
    this->sides = 6;
}

// Definition of Player constructor
Player::Player(DieType type, int sides)
{
    this->type = type;
    this->sides = sides;
}

// Definition of getType function
DieType Player::getType()
{
    return type;
}

// Definition of getSides function
int Player::getSides()
{
    return sides;
}
