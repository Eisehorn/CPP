#include "Form.hpp"

Form::Form() : _name("RandomForm"), _grade_to_sign(-4), _grade_to_execute(-4){
    this->_signed = false;
}

Form::Form(std::string name, int gradetosign, int gradetoexecute) : _name(name), _grade_to_sign(gradetosign), _grade_to_execute(gradetoexecute) {
    if(gradetosign > 150 || gradetoexecute > 150)
        throw Form::GradeTooLowException();
    else if (gradetosign < 1 || gradetoexecute)
        throw Form::GradeTooHighException();
    this->_signed = false;
}

std::string Form::getName() const {
    return this->_name;
}

int Form::getGradetoSign() const {
    return this->_grade_to_sign;
}

int Form::getGradetoExecute() const {
    return this->_grade_to_execute;;
}

bool Form::getifSigned() const {
    this->_signed;
}

void Form::beSigned(const Bureaucrat b) {
    if (b.getGrade() < this->_grade_to_sign)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &f) {
    out<<f.getName()<<", form grade to sign "<<f.getGradetoSign()<<", form grade to execute "<< f.getGradetoExecute()<<", form is signed: "<<f.getifSigned();
    return (out);
}
