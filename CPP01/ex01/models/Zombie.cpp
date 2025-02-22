#include <Zombie.hpp>

Zombie::Zombie()
{
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::setName(std::string str)
{
    this->name = str;
}
void Zombie::announce()
{
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
    this->announce();
}