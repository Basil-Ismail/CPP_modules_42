#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <FragTrap.hpp>
#include <ScavTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap&);
    DiamondTrap(const std::string);
    DiamondTrap& operator=(const DiamondTrap&);
    ~DiamondTrap();

    void whoAmI();
    void attack(std::string);
};
#endif
