#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        const Weapon &_Weapon;    
    public:
        HumanA(std::string name, const Weapon &weapon);
        ~HumanA();
        void    attack() const;
};