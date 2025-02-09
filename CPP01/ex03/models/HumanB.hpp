#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <Weapon.hpp>
class HumanB
{
private:
        Weapon *weap;
        std::string name;

public:
        HumanB(std::string);
        void attack();
        void setWeapon(Weapon &);
};

#endif