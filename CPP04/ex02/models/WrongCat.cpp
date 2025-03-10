#include <WrongCat.hpp>

WrongCat::WrongCat()
    : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "Wrong Cat Constructor is called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& object)
    : WrongAnimal(object)
{
    std::cout << "Wrong Cat Copy is called " << std::endl;
    *this = object;
}

WrongCat& WrongCat::operator=(const WrongCat& object)
{
    std::cout << "Wrong Cat Assigenment is Called" << std::endl;
    this->type = object.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "Wrong cat destructor is called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat meaaawos" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}