#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		const Weapon& _weapon;
	public:
		~HumanA();
		HumanA(const std::string& name, const Weapon& weapon);
		void attack();
};
#endif
