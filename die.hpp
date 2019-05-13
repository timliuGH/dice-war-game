#ifndef DIE_HPP
#define DIE_HPP

// Die class declaration
class Die
{
    protected:
        int sides;
    public:
        Die(int = 6);
        int roll();
};

#endif
