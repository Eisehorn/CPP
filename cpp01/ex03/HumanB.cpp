#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
}

HumanB::~HumanB() {};

void    HumanB::attack() {
    if (this->_Weapon)
        std::cout<<this->_name<<" attack with their "<<this->_Weapon->getType()<<std::endl;
    else
        std::cout<<this->_name<<" can't attack"<<std::endl;
}

void    HumanB::setWeapon(const Weapon &weapon) {
    this->_Weapon = &weapon;
}