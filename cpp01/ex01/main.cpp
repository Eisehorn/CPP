#include "Zombie.hpp"

int main() {
	int N = 5;
	std::string name = "Tony";
	Zombie *z;
	z = zombieHorde(N, name);
	delete []z;
	return (0);
}