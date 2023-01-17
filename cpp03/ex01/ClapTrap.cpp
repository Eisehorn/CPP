#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_Hit_points = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	std::cout<<"Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!"<<std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout<<"I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"<<std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout<<"ClapTrap "<<this->_name<<" attacks "<<target<<" causing "<<this->_Attack_damage<<" points of damage!"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_Hit_points += amount;
	if (this->_Hit_points > 10)
	{
		std::cout<<"Back as new! YAY!"<<std::endl;
		this->_Hit_points = 10;
	}
	else
		std::cout<<"ClapTrap is being repaired of "<<amount<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->_Hit_points -= amount;
	if (this->_Hit_points <= 0) {
		this->_Hit_points = 0;
		std::cout<<"I'm being destroyed, I need repair ASAP!"<<std::endl;
	}
	else
		std::cout<<"ClapTrap is being damaged for "<<amount<<" hit points!"<<std::endl;
}