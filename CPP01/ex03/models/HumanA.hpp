#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <Weapon.hpp>

class HumanA
{
private:
        Weapon &weap;
        std::string name;

public:
        HumanA(std::string, Weapon &);
        void attack();
};
#endif