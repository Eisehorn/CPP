#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form {
    private:
        std::string _target;
    public:
        RobotomyRequestForm() {};
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm() {};
        void    execute(Bureaucrat const & executor) const;
        void    drill() const;
};

#endif