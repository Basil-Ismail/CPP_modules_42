#include <ScavTrap.hpp>

ScavTrap::ScavTrap()
    : ClapTrap()
{
    std::cout << "ScavTrap Default Constructor is called " << std::endl;
}
ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    std::cout << "Overloaded Serena Constructor is Called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& object)
    : ClapTrap(object)
{
    std::cout << "Sereena Copy is called " << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Seereena destructor is called " << std::endl;
}