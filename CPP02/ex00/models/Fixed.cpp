#include <Fixed.hpp>

Fixed::Fixed()
    : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old;
}
Fixed& Fixed::operator=(const Fixed& old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue = old.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}
void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}