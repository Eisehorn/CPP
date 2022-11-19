#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::announce(void) {
	std::cout<<this->_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout<<this->_name<<" has been killed!"<<std::endl;
}