#ifndef HUMANA
# define HUMANA

#include <iostream>
#include "Weapon.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR      "\x1b[2m"

class HumanA {
    public:
        HumanA(std::string name, Weapon  &weapon);
        ~HumanA();

        void attack();

    private:
        std::string _name;
        Weapon      &_weapon;

};

#endif