#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
class Zombie {
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string);
    ~Zombie();
    void setName(std::string str);
    void announce();
};

#endif