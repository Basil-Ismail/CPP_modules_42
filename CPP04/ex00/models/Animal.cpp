#include <Animal.hpp>

Animal::Animal()
{
    this->type = "Random Animal";
    std::cout << "Default Animal Constructor" << std::endl;
}

Animal::Animal(const Animal& object)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = object;
}
Animal& Animal::operator=(const Animal& object)
{
    std::cout << "Animal Copy assigenment is Called" << std::endl;
    this->type = object.type;
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "ANIMAL SOUND" << std::endl;
}
std::string Animal::getType() const
{
    return this->type;
}
Animal::~Animal()
{
    std::cout << "Animal Destructor is Called" << std::endl;
}