#include "Form.hpp"

int main() {
	Bureaucrat				john("John", 1);
	Bureaucrat				fra("cozy", 120);
	Form					build("Robottino", 119, 119);

	std::cout<<build<<std::endl;

	fra.signForm(build);
	john.signForm(build);

	std::cout<<build<<std::endl;
	return (0);
}