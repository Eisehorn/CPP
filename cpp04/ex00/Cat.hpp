#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Animal.hpp"
#endif

class Cat : public Animal {
    public:
        Cat();
        ~Cat();
        void    makeSound();
};