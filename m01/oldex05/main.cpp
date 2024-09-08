#include "Harl.hpp"
#include <iostream>

int main()
{
    Harl harl;
    std::cout << "Enter complaint level (DEBUG, INFO, WARNING, ERROR): ";
    std::string level;
    std::cin >> level;
    harl.complain(level);
    return 0;
}