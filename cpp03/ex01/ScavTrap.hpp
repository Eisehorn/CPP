#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string& target);
};