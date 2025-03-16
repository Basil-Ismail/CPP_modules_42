#include <Cat.hpp>

Cat::Cat()
    : AAnimal()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat Default Constructor is called" << std::endl;
}
Cat::Cat(const Cat& object)
    : AAnimal(object)
{
    std::cout << "Cat Copy Constructor  is called" << std::endl;
    *this = object;
}

Cat& Cat::operator=(const Cat& object)
{
    std::cout << "Cat Assigenment is called " << std::endl;
    delete this->brain;
    this->brain = new Brain(*object.getBrain());
    this->type = object.type;
    return *this;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Destructor " << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "MEAOWWWWWW  ^•_•^" << std::endl;
}
const Brain* Cat::getBrain() const
{
    return this->brain;
}
