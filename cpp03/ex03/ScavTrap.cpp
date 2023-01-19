#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    this->_Energy_points = 50;
    this->_Hit_points = 100;
    this->_Attack_damage = 20;
    std::cout<<"Cool! Now we're both super-crazy-amazing!"<<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_Energy_points = 50;
    this->_Hit_points = 100;
    this->_Attack_damage = 20;
    std::cout<<"Hey everybody! Check out my package!"<<std::endl;
}

void    ScavTrap::guardGate(){
    std::cout<<this->_name<<" is now in Gate Keeper mode!"<<std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<<"Argh arghargh death gurgle gurglegurgle urgh... death."<<std::endl;
}

void	ScavTrap::attack(const std::string& target){
	ClapTrap::attack(target);
	std::cout<<"Don't bother with plastic surgery - there's NO fixing that!"<<std::endl;
}