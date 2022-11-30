#include "Harl.hpp"

// int main(int argc, char **argv) {
// 	if (argc != 2) {
//         std::cout<<"No complain from Harl!"<<std::endl;
//         return 0;
//     }
//     Harl harl;
// 	harl.complain(argv[1]);
// 	return 0;
// }


int	harl_translate(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}

void	harl_switch(char *argv, Harl &h)
{
	switch (harl_translate(argv))
	{
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl h;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		harl_switch(argv[1], h);
	return (0);
}