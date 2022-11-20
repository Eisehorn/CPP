#include "HumanA.hpp"

class HumanB {
    private:
        std::string _name;
        std::string _Weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon weapon);
};