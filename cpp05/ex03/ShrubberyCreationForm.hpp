#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm() {};
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm() {};
        void    execute(Bureaucrat const & executor) const;
        void    tree() const;
};

#endif