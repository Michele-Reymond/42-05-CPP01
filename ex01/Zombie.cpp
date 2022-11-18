#include "Zombie.hpp"

Zombie::Zombie(void) {
    std::cout << "New zombie ready to eat brains" << std::endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " will never eat brains again" << std::endl;
    return;
}

void Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}
