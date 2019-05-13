#include <iostream>
#include "utility.hpp"

int getPosInt(int max, std::string err)
{
    // Get int from user
    int value;
    std::cin >> value;

    // Ensure value is no more than max
    while (value <= 0 || value > max || std::cin.fail() || 
           std::cin.get() != '\n')
    {
        std::cout << err << ": ";       // Output error message
        std::cin.clear();               // Clear error flag on cin
        std::cin.ignore(INT_MAX, '\n'); // Skip to next newline
        std::cin >> value;              // Get int from user
    }

    return value;
}
