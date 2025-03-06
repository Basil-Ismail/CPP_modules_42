#include <ClapTrap.hpp>

ClapTrap::ClapTrap()
    : _name("John Cena")
    , _hitPoints(10)
    , _energyPoints(10)
    , _attackDamage(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name)
    , _hitPoints(10)
    , _energyPoints(10)
    , _attackDamage(0)
{
    std::cout << "Overloaded Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& item)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = item;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is Called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& Object)
{
    std::cout << "Copy Assigenment is Called" << std::endl;
    this->_name = Object.getName();
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}
int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}
int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}
std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setHitPoints(int HP)
{
    this->_hitPoints = HP;
}
void ClapTrap::setEnergyPoints(int EP)
{
    this->_energyPoints = EP;
}
void ClapTrap::setAttackDamage(int AD)
{
    this->_attackDamage = AD;
}
void ClapTrap::setName(std::string name)
{
    this->_name = name;
}
