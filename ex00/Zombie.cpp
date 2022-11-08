#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << "Destructor" << this->_name << "called" << std::endl;
    return;
}
