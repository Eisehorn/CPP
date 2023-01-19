#include "iostream"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        void    makeSound();
        std::string getType();
};