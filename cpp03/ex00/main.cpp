#include "ClapTrap.hpp"

int main(void) {
	ClapTrap claptrap("clap");
	claptrap.beRepaired(5);
	claptrap.attack("Dominic Toretto");
	claptrap.takeDamage(4);
	claptrap.takeDamage(7);
	claptrap.beRepaired(2);
	claptrap.beRepaired(9);
}