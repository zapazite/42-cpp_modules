#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& src);
        ScavTrap& operator=(const ScavTrap& src);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
        int getEnergyPoints() const;
    protected:
        int _energy_points;
};

#endif