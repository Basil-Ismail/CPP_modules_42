#include <Dog.hpp>

Dog::Dog()
    : AAnimal()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog Constructor is called" << std::endl;
}

Dog::Dog(const Dog& object)
    : AAnimal(object)
{
    std::cout << "Dog Copy Constructor is called " << std::endl;
    *this = object;
}
Dog ::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor is called " << std::endl;
}
Dog& Dog::operator=(const Dog& object)
{
    std::cout << "Dog Assigenment is called " << std::endl;
    delete this->brain;
    this->brain = new Brain(*object.getBrain());
    this->type = object.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << " RAAPH RAAAPH >:3" << std::endl;
}

const Brain* Dog::getBrain() const
{
    return this->brain;
}
