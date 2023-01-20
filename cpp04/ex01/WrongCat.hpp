#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "WrongAnimal.hpp"
#endif

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        void    makeSound() const ;
};