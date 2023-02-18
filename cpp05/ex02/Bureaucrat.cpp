#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void    Bureaucrat::decrementGrade() {
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void    Bureaucrat::incrementGrade() {
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::signForm(Form &f) {
    try {
        f.beSigned(*this);
        std::cout<<this->_name<<" signed "<<f.getName()<<std::endl;
    }
    catch (std::exception &ex) {            //Form::GradeTooLow e
        std::cout<<this->_name<<" couldn't sign "<<f.getName()<<" because "<<ex.what()<<std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
                    return ("This grade is too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
					return ("This grade is too Low");
}

void        Bureaucrat::executeForm(Form const &form) const {
    std::cout<<this->_name<<" executed "<<form.getName()<<std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b) {
    out<<b.getName()<<", bureacrat grade"<<b.getGrade();
    return (out);
}