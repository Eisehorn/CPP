#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        std::string _Weapon;    
    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA();
        void    attack();
};