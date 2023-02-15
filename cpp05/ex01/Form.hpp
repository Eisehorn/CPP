#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        bool                _signed;
        int const           _grade_to_sign;
        int const           _grade_to_execute;
    public:
		Form();
		Form(std::string name, int gradetosign, int gradetoexecute);
		~Form() {};
        std::string			getName(void) const;
		int					getGradetoSign(void) const;
        int                 getGradetoExecute(void) const;
        bool                getifSigned(void) const;
        void                beSigned(const Bureaucrat b);

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

std::ostream &operator<<(std::ostream &out, Form const &b);

# include "Bureaucrat.hpp"

#endif