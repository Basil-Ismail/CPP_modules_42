#include <ScavTrap.hpp>

ScavTrap::ScavTrap()
    : ClapTrap("Sereeena", 100, 50, 20)
{
    std::cout << "ScavTrap Default Constructor is called " << std::endl;
}
ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name, 100, 50, 20)
{
    std::cout << "Overloaded Serena Constructor is Called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& object)
    : ClapTrap(object)
{
    std::cout << "Sereena Copy is called " << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& object)
{
    this->setName(object.getName());
    return (*this);
}
ScavTrap::~ScavTrap()
{
    std::cout << "Seereena destructor is called " << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << "This attack is for SERENAA" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is in Gate Keeper MODE GET OUT!!" << std::endl;
}