#include <iostream>
#include "utility.hpp"

int getPositiveInt(int max, std::string err)
{
    int value;
    std::cin >> value;
    while (value <= 0 || value > max || std::cin.fail() || 
           std::cin.get() != '\n')
    {
        std::cout << err << ": ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> value;
    }

    return value;
}
