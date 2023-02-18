#include "Intern.hpp"

Form    *Intern::makeShrub(std::string target) {
    return (new ShrubberyCreationForm(target));
}

Form    *Intern::makePres(std::string target) {
    return (new PresidentialPardonForm(target));
}

Form    *Intern::makeRobo(std::string target) {
    return (new RobotomyRequestForm(target));
}

Form    *Intern::makeForm(std::string form_name, std::string target) {
    Form							*object;
	std::string						forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(Intern::*costr[3])(std::string target) = {&Intern::makeShrub, &Intern::makeRobo, &Intern::makePres};
    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == form_name)
        {
            object = (this->*costr[i])(target);
            std::cout<<"Intern creates "<<form_name<<std::endl;
            return (object);
        }
    }
    std::cout<<"Intern can't do s..."<<std::endl;
    return (NULL);
}