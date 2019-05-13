#ifndef DIE_HPP
#define DIE_HPP

// Die class declaration
class Die
{
    private:
        int sides;
    public:
        Die(int = 6);
        int roll();
};

#endif
