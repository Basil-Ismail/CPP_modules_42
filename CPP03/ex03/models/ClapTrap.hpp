#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name, int hp, int ep, int ad);
    ClapTrap(std::string);
    ClapTrap(const ClapTrap&);
    ClapTrap& operator=(const ClapTrap&);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaird(unsigned int amount);
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
    std::string getName() const;

    void setHitPoints(unsigned int);
    void setEnergyPoints(unsigned int);
    void setAttackDamage(unsigned int);
    void setName(std::string);
};

#endif