#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Animal.hpp"
#endif

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        void    makeSound();
};