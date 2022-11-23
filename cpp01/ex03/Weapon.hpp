#include <iostream>
#include <string>

class Weapon
{
    public:
        std::string const &getType() const;
        void setType(std::string new_type);
        Weapon(std::string name);
        ~Weapon(){};

    private:
        std::string _type;
};
    