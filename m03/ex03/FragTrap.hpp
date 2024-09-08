#ifndef FragTrap_HPP
# define FragTrap_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& src);
        FragTrap& operator=(const FragTrap& src);
        ~FragTrap();
        void highFivesGuys();
        int getHitPoints() const;
        int getAttackDamage() const;
    protected:
        int _hit_points;
        int _attack_damage;
};

#endif