#include <AAnimal.hpp>

AAnimal::AAnimal()
{
    this->type = "Random Animal";
    std::cout << "Default Animal Constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& object)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = object;
}
AAnimal& AAnimal::operator=(const AAnimal& object)
{
    std::cout << "Animal Copy assigenment is Called" << std::endl;
    this->type = object.type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}
AAnimal::~AAnimal()
{
    std::cout << "Animal Destructor is Called" << std::endl;
}