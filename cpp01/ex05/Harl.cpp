#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void	Harl::complain(std::string level) {
	void	(Harl::*complaint[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*complaint[i])();
			break;
		}
	}
}