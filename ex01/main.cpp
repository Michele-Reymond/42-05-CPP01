#include <iostream>
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main() {
    Zombie   *joeHorde = zombieHorde(5, "Joe");
    for (int i = 0; i < 5; i++) {
        joeHorde[i].announce();
    }
    delete [] joeHorde; 
    return (0);
}

