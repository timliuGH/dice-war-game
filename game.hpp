#ifndef GAME_HPP
#define GAME_CPP

enum MenuOption { PLAY = 1, EXIT };

class Game
{
    private:
        int menuChoice;

    public:
        Game();
        void setMenuChoice();
        int getMenuChoice();
        void setup();
};

#endif
