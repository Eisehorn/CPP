#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        virtual void    makeSound() const ;
        std::string getType() const;
};