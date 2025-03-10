#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Animal";
    std::cout << "Wrong Animal Constructor is Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object)
{
    std::cout << "Wrong Animal copy is called " << std::endl;
    *this = object;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& object)
{
    std::cout << "Wrong Animal Assigenment is called " << std::endl;
    this->type = object.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal Destructor is called" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "AAAAAAHhhhhh" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}