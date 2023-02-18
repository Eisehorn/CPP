#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
    this->_target = target;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradetoExecute())
        throw (Form::GradeTooLowException());
    std::cout<<executor.getName()<<" is executing "<<this->getName()<<std::endl;
    executor.executeForm(*this);
    this->drill();
}

void    RobotomyRequestForm::drill() const {
    std::cout<<"\"Drilling Noises\"";
    int r = rand();
    if (r % 2 == 0)
        std::cout<<this->_target<<" has been succcesfully robotomized."<<std::endl;
    else
        std::cout<<"Robotomy has failed."<<std::endl;
}