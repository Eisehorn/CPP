#include <string>
#include <iostream>

class Harl {
	public:
		void	complain(std::string level);
		Harl();
		~Harl();
	private:
		void	debug() {
            std::cout<<"[ DEBUG ]"<<std::endl;
			std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup-burger. I really do!"<<std::endl;
		};
		void	info() {
            std::cout<<"[ INFO ]"<<std::endl;
			std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<std::endl;
		};
		void	warning() {
            std::cout<<"[ WARNING ]"<<std::endl;
			std::cout<<"I think I deserve to have extra bacon for free. I've been coming for years whereas you started working here since last month."<<std::endl;
		};
		void	error() {
            std::cout<<"[ ERROR ]"<<std::endl;
			std::cout<<"This is unacceptable! I want to speak with the manager now."<<std::endl;
		};
};