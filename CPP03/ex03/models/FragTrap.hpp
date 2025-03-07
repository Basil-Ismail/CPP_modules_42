#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
protected:
    static const unsigned int DFL_HP = 100;
    static const unsigned int DFL_AD = 30;

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