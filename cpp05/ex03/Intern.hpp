#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
    private:
        Form *makeShrub(std::string target);
        Form *makePres(std::string target);
        Form *makeRobo(std::string target);
    public:
        Intern(){};
        ~Intern(){};
        Form    *makeForm(std::string form_name, std::string target);
};

#endif