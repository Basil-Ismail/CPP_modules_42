#include <Fixed.hpp>
#include <cmath>

Fixed::Fixed()
    : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float input)
{
    std::cout << "Float Constructor Called" << std::endl;
    this->fixedPointValue = roundf(input * 256.0f);
}

Fixed::Fixed(const int input)
{
    std::cout << "Int Constructor Called" << std::endl;
    this->fixedPointValue = input << fractionalBits;
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

float Fixed::toFloat() const
{
    return (static_cast<float>(this->fixedPointValue) / (1 << this->fractionalBits));
}

int Fixed::toInt() const
{
    return fixedPointValue >> fractionalBits;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    return fixedPointValue;
}
void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
