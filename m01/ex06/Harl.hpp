#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
public:
    Harl();
    Harl(const Harl& source);
    Harl& operator=(const Harl& source);
    ~Harl();

    void complain(const std::string& level);
    void filter(const std::string& level);

private:
    void debug() const;
    void info() const;
    void warning() const;
    void error() const;

    typedef void (Harl::*complaintFunction)() const;
    static const std::string _levels[];
    static const complaintFunction _functions[];
};

#endif