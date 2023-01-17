#include <iostream>

class ClapTrap {
	protected:
		std::string	_name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};