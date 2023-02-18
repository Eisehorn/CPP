#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
    this->_target = target;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradetoExecute())
        throw (Form::GradeTooLowException());
    std::cout<<executor.getName()<<" is executing "<<this->getName()<<std::endl;
    executor.executeForm(*this);
    this->pardon();
}

void    PresidentialPardonForm::pardon() const {
    std::cout<<this->_target<<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
}