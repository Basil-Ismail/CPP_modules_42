#include <Cat.hpp>

Cat::Cat()
    : Animal()
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor is called" << std::endl;
}
Cat::Cat(const Cat& object)
    : Animal(object)
{
    std::cout << "Cat Copy Constructor  is called" << std::endl;
    *this = object;
}

Cat& Cat::operator=(const Cat& object)
{
    std::cout << "Cat Assigenment is called " << std::endl;
    this->type = object.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat Destructor " << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "MEAOWWWWWW  ^•_•^" << std::endl;
}