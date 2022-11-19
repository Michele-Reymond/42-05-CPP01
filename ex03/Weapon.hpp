#ifndef WEAPON
# define WEAPON

#include <iostream>

#define COLOR_RESET     "\x1b[0m"
#define COLOR      "\x1b[2m"

class Weapon {
    public:
        Weapon(std::string type);
        ~Weapon();

        const std::string & getType() const;
        void setType(std::string newType);

    private:
        std::string _type;
};

#endif