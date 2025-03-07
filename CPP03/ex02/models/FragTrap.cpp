#include <FragTrap.hpp>

FragTrap::FragTrap()
    : ClapTrap()
{
    std::cout << "FragTrap Default Constructor is called " << std::endl;
}
FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    std::cout << "Overloaded FRAAAG Constructor is Called" << std::endl;
}
FragTrap::FragTrap(const FragTrap& object)
    : ClapTrap(object)
{
    std::cout << "Frag Copy is called " << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& object)
{
    this->setName(object.getName());
    return (*this);
}
FragTrap::~FragTrap()
{
    std::cout << "Fraaag destructor is called " << std::endl;
}
void FragTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << "This attack is for FRAAAAAGG" << std::endl;
}
void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << " is Rising his Hands for A highFIVE" << std::endl;
}