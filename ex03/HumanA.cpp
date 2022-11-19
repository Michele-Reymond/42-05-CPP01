#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
    _weapon(weapon)    
{
    std::cout << COLOR << name << " is ready and hold a " << weapon.getType() << COLOR_RESET << std::endl;
    _name = name;
}

HumanA::~HumanA() {
    std::cout << COLOR << this->_name << " is dead" << COLOR_RESET << std::endl;
}

void HumanA::attack() {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
