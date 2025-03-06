#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap(const ClapTrap&);
    ClapTrap& operator=(const ClapTrap&);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaird(unsigned int amount);
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
    std::string getName() const;

    void setHitPoints(int);
    void setEnergyPoints(int);
    void setAttackDamage(int);
    void setName(std::string);
};

#endif