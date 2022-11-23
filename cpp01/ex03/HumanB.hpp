#include "HumanA.hpp"

class HumanB {
    private:
        std::string _name;
        const Weapon *_Weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setWeapon(const Weapon &weapon);
};