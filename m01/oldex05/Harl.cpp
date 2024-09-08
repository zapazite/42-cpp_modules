#include "Harl.hpp"
#include <iostream>

std::map<std::string, Harl::complaintFunction> Harl::_map_level;

Harl::Harl()
{
    if (_map_level.empty())
    {
        _map_level["DEBUG"] = &Harl::debug;
        _map_level["INFO"] = &Harl::info;
        _map_level["WARNING"] = &Harl::warning;
        _map_level["ERROR"] = &Harl::error;
    }
}

Harl::Harl(const Harl& source)
{
    (void)source;
}

Harl& Harl::operator=(const Harl& source)
{
    if (this != &source) {}
    return *this;
}

Harl::~Harl() {}

void Harl::complain(const std::string& level)
{
    std::map<std::string, complaintFunction>::const_iterator it = _map_level.find(level);
    if (it != _map_level.end())
    {
        (this->*(it->second))();
    }
    else
    {
        std::cout << "Unknown complaint level: " << level << std::endl;
    }
}

void Harl::debug() const
{
    std::cout << "Debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() const
{
    std::cout << "Info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() const
{
    std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() const
{
    std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}