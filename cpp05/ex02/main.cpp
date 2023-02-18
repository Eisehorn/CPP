#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat				john("John", 1);
	Bureaucrat				Fra("Fra", 150);

	ShrubberyCreationForm	shrub("home");
	RobotomyRequestForm		robot("Mike");
	PresidentialPardonForm	pres("Jerry Smith");

	try
	{
		john.signForm(shrub);
		//shrub.execute(Fra);
		shrub.execute(john);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		john.signForm(robot);
		// robot.execute(Fra);
		robot.execute(john);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		john.signForm(pres);
		// pres.execute(Fra);
		pres.execute(john);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
	

	return (0);
}