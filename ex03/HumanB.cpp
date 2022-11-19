#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << COLOR << name << " is ready" << COLOR_RESET << std::endl;
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB() {
    std::cout << COLOR << this->_name << " is dead" << COLOR_RESET << std::endl;
}

void HumanB::attack() {
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << "Oh no! " << this->_name << " does not have any weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
} 