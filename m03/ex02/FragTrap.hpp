#ifndef FragTrap_HPP
# define FragTrap_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& src);
        FragTrap& operator=(const FragTrap& src);
        ~FragTrap();
        void highFivesGuys();
};

#endif