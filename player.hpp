#ifndef PLAYER_HPP
#define PLAYER_HPP

enum DieType { NORMAL = 1, LOADED };

class Player
{
    private:
        DieType type;
        int sides;
    public:
        Player();
        Player(DieType, int);
        DieType getType();
        int getSides();
};

#endif
