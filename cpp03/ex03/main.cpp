#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap fragtrap("clap");
	fragtrap.beRepaired(5);
	fragtrap.attack("Dominic Toretto");
	fragtrap.takeDamage(4);
	fragtrap.takeDamage(7);
	fragtrap.beRepaired(2);
	fragtrap.beRepaired(9);
	fragtrap.highFivesGuys();
}