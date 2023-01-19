#include "Animal.hpp"

Animal::Animal() {
    std::cout<<"Animal contructor called."<<std::endl;
}

Animal::~Animal() {
    std::cout<<"Animal destructor called."<<std::endl;
}

void    Animal::makeSound() {
    std::cout<<"cacca"<<std::endl;
}

std::string Animal::getType() {
    return this->type;
}