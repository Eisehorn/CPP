#include "Cat.hpp"

Cat::Cat() {
    std::cout<<"Cat constructor called."<<std::endl;
    brain = new Brain;
    this->type = "Cat";
}

Cat::~Cat(){
    delete brain;
    std::cout<<"Cat destructor called"<<std::endl;
}

void    Cat::makeSound() const {
    std::cout<<"Meow!"<<std::endl;
}

Brain* Cat::getBrain() const{
    return this->brain;
}