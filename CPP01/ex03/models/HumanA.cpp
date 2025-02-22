#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& weap)
    : weap(weap)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weap.getType() << std::endl;
}