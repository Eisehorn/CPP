#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout<<"Thanks for giving me a second chance, God. I really appreciate it."<<std::endl;;
    this->_Attack_damage = FragTrap::_Attack_damage;
    this->_Hit_points = FragTrap::_Hit_points;
    this->_Energy_points = ScavTrap::_Energy_points;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout<<"My programmer always said two hands are better then one. But then he only gave me one. I wonder why?"<<std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_Attack_damage = FragTrap::_Attack_damage;
    this->_Hit_points = FragTrap::_Hit_points;
    this->_Energy_points = ScavTrap::_Energy_points;
}

void	DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout<<"My name is "<<this->_name<<" !"<<std::endl;
    std::cout<<"ClapTrap's name is "<<ClapTrap::_name<< " !"<<std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout<<"Glitching weirdness is a term of endearment, right?"<<std::endl;
}