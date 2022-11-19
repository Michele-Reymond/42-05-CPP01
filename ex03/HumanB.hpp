#ifndef HUMANB
# define HUMANB

#include <iostream>
#include "Weapon.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR      "\x1b[2m"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB();

        void attack();
        void setWeapon(Weapon &weapon);

    private:
        std::string _name;
        Weapon      *_weapon;

};

#endif