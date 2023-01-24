#include "Dog.hpp"

Dog::Dog() {
    std::cout<<"Dog constructor called."<<std::endl;
    brain = new Brain;
    this->type = "Dog";
}

Dog::~Dog() {
    delete brain;
    std::cout<<"Dog destructor called."<<std::endl;
}

void    Dog::makeSound() const {
    std::cout<<"Woof!"<<std::endl;
}

Brain* Dog::getBrain() const {
    return this->brain;
}