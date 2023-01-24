#include <iostream>
#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Brain.hpp"
#endif

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        virtual void    makeSound() const ;
        virtual std::string getType() const;
        virtual Brain* getBrain() const = 0;
};