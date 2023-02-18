#include <iostream>

class Bureaucrat {
    private:
        std::string const	_name;
        int					_grade;
    public:
		Bureaucrat() {};
		Bureaucrat(std::string name, int grade);
		~Bureaucrat() {};
		std::string			getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
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