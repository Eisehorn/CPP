#include "Harl.hpp"

int main() {
	Harl harl;
	std::string debug = "DEBUG";
	std::string info = "INFO";
	std::string warning = "WARNING";
	std::string error = "ERROR";
	harl.complain(info);
	return 0;
}