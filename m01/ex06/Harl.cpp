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

void Harl::filter(const std::string& level) {
    int startIndex = -1;
    for (size_t i = 0; i < sizeof(_levels) / sizeof(_levels[0]); ++i) {
        if (_levels[i] == level) {
            startIndex = i;
            break;
        }
    }

    switch (startIndex) {
        case 0:
            (this->*_functions[0])();
            std::cout << std::endl;
            // fall through
        case 1:
            (this->*_functions[1])();
            std::cout << std::endl;
            // fall through
        case 2:
            (this->*_functions[2])();
            std::cout << std::endl;
            // fall through
        case 3:
            (this->*_functions[3])();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::debug() const {
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I really do!" << std::endl;
}

void Harl::info() const {
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger!" << std::endl << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() const {
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() const {
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}