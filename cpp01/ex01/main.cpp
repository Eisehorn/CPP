#include "Zombie.hpp"

int main() {
	Zombie *zomb = newZombie("Andreotti");
	randomChump("Tonietto randomico");
	delete zomb;
	return (0);
}