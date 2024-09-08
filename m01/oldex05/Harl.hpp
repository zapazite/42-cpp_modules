#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <map>

class Harl
{
    public:
        Harl();
        Harl(const Harl& source);
        Harl& operator=(const Harl& source);
        ~Harl();

        void complain(const std::string& level);

    private:
        void debug() const;
        void info() const;
        void warning() const;
        void error() const;

        typedef void (Harl::*complaintFunction)() const;
        static std::map<std::string, complaintFunction> _map_level;
};
#endif