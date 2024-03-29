#include "Intern.hpp"

int main() {
	Bureaucrat	john("John", 1);
	Intern		intern;
	Form		*form;

	form = intern.makeForm("shrubbery creation", "home");

	john.signForm(*form);
	john.executeForm(*form);
	// delete form;

	form = intern.makeForm("robotomy request", "Bender");

	john.signForm(*form);
	john.executeForm(*form);
	delete form;

	form = intern.makeForm("presidential pardon", "Jerry Smith");

	john.signForm(*form);
	john.executeForm(*form);
	delete form;

	form = intern.makeForm("nothing", "Jerry Smith");
	delete form;

	// john.signForm(*form);
	// john.executeForm(*form);

	return (0);
}