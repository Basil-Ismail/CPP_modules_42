#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap {
private:
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap&);
    FragTrap& operator=(const FragTrap&);
    ~FragTrap();

    void attack(const std::string& target);
    void highFivesGuys();
};
#endif