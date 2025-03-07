#include <ClapTrap.hpp>

ClapTrap::ClapTrap()
    : _name("John Cena")
    , _hitPoints(100)
    , _energyPoints(50)
    , _attackDamage(20)
{
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name)
    , _hitPoints(100)
    , _energyPoints(50)
    , _attackDamage(20)
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
    return *this;
}

unsigned int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}
unsigned int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}
std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setHitPoints(unsigned int HP)
{
    this->_hitPoints = HP;
}
void ClapTrap::setEnergyPoints(unsigned int EP)
{
    this->_energyPoints = EP;
}
void ClapTrap::setAttackDamage(unsigned int AD)
{
    this->_attackDamage = AD;
}
void ClapTrap::setName(std::string name)
{
    this->_name = name;
}
// EXERCIES

void ClapTrap::attack(const std::string& target)
{
    if (!this->_energyPoints || !this->_hitPoints) {
        std::cout << "I'm done..so dead.." << std::endl;
    } else {
        std::cout << "Clap Trap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " Points of damage!!" << std::endl;
        this->_energyPoints--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0) {
        std::cout << "Bud..I'm already dead" << std::endl;
    } else if (amount >= this->_hitPoints) {
        std::cout << "YOU KILLED MEE...</3...Good...byeee..I'm....yo..ur..Fath....---------------------------" << std::endl;
    } else {
        std::cout << "Only " << amount << "!!, lol this is a joke for sure " << std::endl;
        this->_hitPoints -= amount;
    }
}
void ClapTrap::beRepaird(unsigned int amount)
{
    if (this->_hitPoints == 0) {
        std::cout << "Sorry can't revive dead people I guess." << std::endl;
    } else if (this->_hitPoints == 10) {
        std::cout << "I'm BIG BOY YOUNG AND HEALTHY " << std::endl;
    } else if (this->_energyPoints == 0) {
        std::cout << "I'm too tired to get repaired..leave me to death.." << std::endl;
    } else {
        std::cout << "I'm not dead I guess..Not health either.. sad enough" << std::endl;
        this->_energyPoints--;
        this->_hitPoints = (this->_hitPoints + amount) > 10 ? 10 : this->_hitPoints + amount;
    }
}