#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("gun");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("knife");
    bob.attack();
    }
    {
    Weapon club = Weapon("sword");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("arrow");
    jim.attack();
    }
    return 0;
}
