#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap()
    : ClapTrap("DIAMOND_clap_name")
    , ScavTrap()
    , FragTrap()
    , _name("DIAMOND")
{
    std::cout << "Default Diamond Constructor is called" << std::endl;
    this->setHitPoints(FragTrap::DFL_HP);
    this->setEnergyPoints(ScavTrap::DFL_EP);
    this->setAttackDamage(FragTrap::DFL_AD);
}

DiamondTrap::DiamondTrap(const std::string name)
    : ClapTrap(name + "_clap_name")
    , ScavTrap()
    , FragTrap()
    , _name(name)
{
    std::cout << "Overloaded Diamond Constructor is called" << std::endl;
    this->setHitPoints(FragTrap::DFL_HP);
    this->setEnergyPoints(ScavTrap::DFL_EP);
    this->setAttackDamage(FragTrap::DFL_AD);
}
DiamondTrap::DiamondTrap(const DiamondTrap& object)
    : ClapTrap(object.getName() + "_clap_name")
    , ScavTrap(object)
    , FragTrap(object)
    , _name(object._name)
{
    std::cout << "Copy Diamond Constructor is called " << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& object)
{
    std::cout << "Copy assigment Diaomond is called " << std::endl;
    this->_name = object.getName();
    this->setHitPoints(object.getHitPoints());
    this->setEnergyPoints(object.getEnergyPoints());
    this->setAttackDamage(object.getAttackDamage());
    return *this;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Trap destructor is called" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "My name " << this->_name << std::endl;
    std::cout << "My Clap name " << ClapTrap::getName() << std::endl;
}
void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}
