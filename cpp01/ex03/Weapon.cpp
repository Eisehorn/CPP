#include "Weapon.hpp"

std::string &Weapon::getType() {
    std::string &my_ref = this->_type;
    return my_ref;
}

void Weapon::setType(std::string new_type) {
    this->_type = new_type;
}

Weapon::Weapon(std::string name) {
    this->_type = name;
}