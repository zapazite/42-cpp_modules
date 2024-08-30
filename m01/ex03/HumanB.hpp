#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB(const std::string& name);
		HumanB(const HumanB& source); // Copy constructor
		HumanB& operator=(const HumanB& source); // Copy assignment operator
		~HumanB(); // Destructor

		void setWeapon(Weapon& weapon);
		void attack();
};

#endif
