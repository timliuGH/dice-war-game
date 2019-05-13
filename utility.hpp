#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <climits>
#include <string>

// This function takes a max int and an error message and prompts the user
// for an int up to the max, returning the value if valid and re-prompting
// with the error message otherwise
int getPosInt(int = INT_MAX, std::string = "Invalid input. Try again");

#endif
