#include "Form.hpp"

int main() {
    try {
    Bureaucrat bru("Eratostene", 120);
    bru.decrementGrade();    
    std::cout<<bru.getName()<<" and grade is ";
    std::cout<<bru.getGrade()<<std::endl;
    }
    catch (std::exception &ex) {
        std::cout<<ex.what()<<std::endl;
    }
    try {
        Bureaucrat bru2("Demostene", 150);
        bru2.incrementGrade();
        std::cout<<bru2.getName()<<" and grade is ";
        std::cout<<bru2.getGrade()<<std::endl;
    }
    catch (std::exception &ex) {
        std::cout<<ex.what()<<std::endl;
    }
    try {
        Bureaucrat bru3("Aristotele", 1);
        bru3.decrementGrade();
        std::cout<<bru3.getName()<<" and grade is ";
        std::cout<<bru3.getGrade()<<std::endl;
    }
    catch (std::exception &ex) {
        std::cout<<ex.what()<<std::endl;
    }
    try {
        Bureaucrat bru4("Eraclito", -5);
        std::cout<<bru4.getGrade()<<" and grade is ";
        std::cout<<bru4.getName()<<std::endl;
    }
    catch (std::exception &ex) {
        std::cout<<ex.what()<<std::endl;
    }
    try {
        Bureaucrat bru5("Anassimandro", 155);
        std::cout<<bru5.getGrade()<<" and grade is ";
        std::cout<<bru5.getName()<<std::endl;
    }
    catch (std::exception &ex) {
        std::cout<<ex.what()<<std::endl;
    }
}