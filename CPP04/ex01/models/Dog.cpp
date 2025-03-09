#include <Dog.hpp>

Dog::Dog()
    : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Constructor is called" << std::endl;
}

Dog::Dog(const Dog& object)
    : Animal(object)
{
    std::cout << "Dog Copy Constructor is called " << std::endl;
    *this = object;
}
Dog ::~Dog()
{
    std::cout << "Dog Constructor is called " << std::endl;
}
Dog& Dog::operator=(const Dog& object)
{
    std::cout << "Dog Assigenment is called " << std::endl;
    this->type = object.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << " RAAPH RAAAPH >:3" << std::endl;
}