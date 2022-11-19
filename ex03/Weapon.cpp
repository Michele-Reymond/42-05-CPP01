#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    std::cout << COLOR << "Weapon with type \"" << type << "\" created" << COLOR_RESET << std::endl;
    this->_type = type;
}

Weapon::~Weapon() {
    std::cout << COLOR << "Weapon with type \"" << this->_type << "\" destructed" << COLOR_RESET << std::endl;
}

const std::string &Weapon::getType() const
{
    return _type;
}

void Weapon::setType(std::string newType) {
    this->_type = newType;
}
