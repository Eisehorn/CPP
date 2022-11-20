#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
	this->_name = name;
	this->_Weapon = weapon.getType();
}

HumanA::~HumanA() {};

void	HumanA::attack() {
	std::cout<<this->_name<<" attack with their "<<this->_Weapon<<std::endl;
}