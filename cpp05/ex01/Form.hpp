#include "Bureaucrat.hpp"

class Form {
    private:
        std::string const   _name;
        bool                _signed = 0;
        int const           _grade_to_sign;
        int const           _grade_to_execute;
    public:
        std::string			getName(void) const;
		int					getGradetoSign(void) const;
        int                 getGradetoExecute(void) const;
        bool                getifSigned(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
        void                beSigned(Bureaucrat b);

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