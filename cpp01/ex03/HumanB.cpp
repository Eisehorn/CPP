#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
}

HumanB::~HumanB() {};

void    HumanB::attack() {
    std::cout<<this->_name<<" attack with their "<<this->_Weapon<<std::endl;
}

void    HumanB::setWeapon(Weapon weapon) {
    this->_Weapon = weapon.getType();
}