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
				virtual const char *what() const throw() {
					return ("This grade is too High");
				}
		};
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("This grade is too Low");
				}
		};
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &b);