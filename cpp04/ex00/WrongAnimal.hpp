#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Animal.hpp"
#endif
#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        void    makeSound() const ;
        std::string getType() const;
};