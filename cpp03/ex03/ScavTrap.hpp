#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include "ClapTrap.hpp"
#endif

class ScavTrap : virtual public ClapTrap{
    public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string& target);
};