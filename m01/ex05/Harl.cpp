#include "Harl.hpp"
#include <iostream>

const std::string Harl::_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
const Harl::complaintFunction Harl::_functions[] = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
};

Harl::Harl() {}

Harl::Harl(const Harl& source) {
    (void)source;
}

Harl& Harl::operator=(const Harl& source) {
    if (this != &source) {}
    return *this;
}

Harl::~Harl() {}

void Harl::complain(const std::string& level) {
    for (size_t i = 0; i < sizeof(_levels) / sizeof(_levels[0]); ++i) {
        if (_levels[i] == level) {
            (this->*_functions[i])();
            return;
        }
    }
    std::cout << "Unknown complaint level: " << level << std::endl;
}

void Harl::debug() const {
    std::cout << "Debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() const {
    std::cout << "Info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() const {
    std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() const {
    std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}