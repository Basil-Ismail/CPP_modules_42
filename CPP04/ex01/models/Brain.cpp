#include <Brain.hpp>

Brain::Brain()
{
    std::cout << "Brain Default Constructor is called" << std::endl;
}
Brain::Brain(const Brain& object)
{
    std::cout << "Brain Copy Constructor  is called" << std::endl;
    *this = object;
}

Brain& Brain::operator=(const Brain& object)
{
    std::cout << "Brain Assigenment is called " << std::endl;
    for (size_t i = 0; i < 100; i++) {
        this->ideas[i] = object.ideas[i];
    }
    return *this;
}
Brain::~Brain()
{
    std::cout << "Brain Destructor " << std::endl;
}

const std::string* Brain::getIdeas() const
{
    return this->ideas;
}