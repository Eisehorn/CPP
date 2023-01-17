#include "ScavTrap.hpp"

int main(void) {
	ScavTrap scavtrap("clap");
	scavtrap.beRepaired(5);
	scavtrap.attack("Dominic Toretto");
	scavtrap.takeDamage(4);
	scavtrap.takeDamage(7);
	scavtrap.beRepaired(2);
	scavtrap.beRepaired(9);
	scavtrap.guardGate();
}