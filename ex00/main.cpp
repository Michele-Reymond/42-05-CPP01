#include <iostream>
#include "Zombie.hpp"

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

int main() {
    Zombie   *mike = newZombie("Mike");
    Zombie   *rachel = newZombie("Rachel");
    mike->announce();
    delete mike;

    randomChump("Joe");

    rachel->announce();
    delete rachel;
    return (0);
}
