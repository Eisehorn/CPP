#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->_Energy_points = 100;
    this->_Hit_points = 100;
    this->_Attack_damage = 30;
    std::cout<<"Dance battle! Or, you know... regular battle."<<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_Energy_points = 100;
    this->_Hit_points = 100;
    this->_Attack_damage = 30;
    std::cout<<"Man versus machine! Very tiny streamlined machine!"<<std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout<<"Up top?"<<std::endl;
}

FragTrap::~FragTrap(){
    std::cout<<"No fair! I wasn't ready."<<std::endl;
}

void	FragTrap::attack(const std::string& target){
	ClapTrap::attack(target);
	std::cout<<"Does this thing have whindshield wipers?"   <<std::endl;
}