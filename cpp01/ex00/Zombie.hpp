#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
};

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout<<this->name<<" has been killed!"<<std::endl;
}


#endif
