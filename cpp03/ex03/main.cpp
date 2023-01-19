#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap diamondtrap("diamond");
	diamondtrap.beRepaired(5);
	diamondtrap.attack("Dominic Toretto");
	diamondtrap.takeDamage(4);
	diamondtrap.takeDamage(7);
	diamondtrap.beRepaired(2);
	diamondtrap.beRepaired(9);
	diamondtrap.whoAmI();
}