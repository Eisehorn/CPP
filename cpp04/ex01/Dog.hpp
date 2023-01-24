#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Animal.hpp"
#endif
#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Brain.hpp"
#endif

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog();
        ~Dog();
        void    makeSound() const ;
        Brain* getBrain() const;
};