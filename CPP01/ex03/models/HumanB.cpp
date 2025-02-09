#include <HumanB.hpp>

HumanB::HumanB(std::string name)
{
        this->name = name;
}

void HumanB::attack()
{
        if (this->weap->getType() != "")
                std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weap)
{
        this->weap = &weap;
}