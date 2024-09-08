#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& src);
        DiamondTrap& operator=(const DiamondTrap& src);
        ~DiamondTrap();
        void whoAmI();
    private:
        std::string _name;
};

#endif