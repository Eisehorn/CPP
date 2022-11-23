#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : _Weapon(weapon) {
	this->_name = name;
}

HumanA::~HumanA() {};

void	HumanA::attack() const {
	std::cout<<this->_name<<" attack with their "<<this->_Weapon.getType()<<std::endl;
}