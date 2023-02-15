#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Form;

class Bureaucrat {
    private:
        std::string const	_name;
        int					_grade;
    public:
		Bureaucrat() : _name("RandomBureaucrat") {};
		Bureaucrat(std::string name, int grade);
		~Bureaucrat() {};
		std::string			getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form &f);
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &b);
# include "Form.hpp"

#endif