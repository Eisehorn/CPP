#include "Animal.hpp"

Animal::Animal() {
    std::cout<<"Animal contructor called."<<std::endl;
}

Animal::~Animal() {
    std::cout<<"Animal destructor called."<<std::endl;
}

void    Animal::makeSound() const {
    std::cout<<"Animal sound!"<<std::endl;
}

std::string Animal::getType() const {
    return this->type;
}