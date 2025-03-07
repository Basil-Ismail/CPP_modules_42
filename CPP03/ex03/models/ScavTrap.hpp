#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
protected:
    static const unsigned int DFL_EP = 50;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap&);
    ScavTrap& operator=(const ScavTrap&);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};
#endif