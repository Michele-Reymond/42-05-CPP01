#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_name = name;
    std::cout << this->_name << " is ready to eat brains" << std::endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " will never eat brains again" << std::endl;
    return;
}

void Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
