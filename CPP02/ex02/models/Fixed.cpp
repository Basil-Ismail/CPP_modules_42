#include <Fixed.hpp>
#include <cmath>
#include <limits>
Fixed::Fixed()
    : fixedPointValue(0)
{
}

Fixed::Fixed(const float input)
{
    const float intMax = std::numeric_limits<int>::max() / static_cast<float>(1 << fractionalBits);
    const float intMin = std::numeric_limits<int>::min() / static_cast<float>(1 << fractionalBits);

    if (input > intMax / (1 << fractionalBits) || input < intMin / (1 << fractionalBits)) {
        throw std::overflow_error("Float value out of range");
    }
    this->fixedPointValue = roundf(input * 256.0f);
}

Fixed::Fixed(const int input)
{
    this->fixedPointValue = input << fractionalBits;
}

Fixed::Fixed(const Fixed& old)
{
    *this = old;
}
Fixed& Fixed::operator=(const Fixed& old)
{
    this->fixedPointValue = old.getRawBits();
    return *this;
}

float Fixed::toFloat() const
{
    static const float scale = 1.0f / (1 << fractionalBits);
    return this->fixedPointValue * scale;
}

int Fixed::toInt() const
{
    return fixedPointValue >> fractionalBits;
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits() const
{
    return fixedPointValue;
}
void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

bool Fixed::operator==(const Fixed& obj) const
{
    return (this->fixedPointValue == obj.getRawBits());
}

bool Fixed::operator>(const Fixed& obj) const
{
    return (this->fixedPointValue > obj.getRawBits());
}

bool Fixed::operator<(const Fixed& obj) const
{
    return (this->fixedPointValue < obj.getRawBits());
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return !(*this == obj);
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return (*this < obj || *this == obj);
}

bool Fixed::operator>=(const Fixed& obj) const
{
    return (*this > obj || *this == obj);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
Fixed& Fixed::operator++()
{
    this->fixedPointValue += 1;
    return (*this);
}
Fixed& Fixed::operator--()
{
    this->fixedPointValue -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed obj = *this;
    ++(*this);
    return (obj);
}

Fixed Fixed::operator--(int)
{
    Fixed obj = *this;
    --(*this);
    return (obj);
}

Fixed& Fixed::min(const Fixed& first, const Fixed& sec)
{
    return ((Fixed&)(first > sec ? sec : first));
}
Fixed& Fixed::max(const Fixed& first, const Fixed& sec)
{
    return ((Fixed&)(first < sec ? sec : first));
}
Fixed& Fixed::min(Fixed& first, Fixed& sec)
{
    return ((Fixed&)(first > sec ? sec : first));
}
Fixed& Fixed::max(Fixed& first, Fixed& sec)
{
    return ((Fixed&)(first < sec ? sec : first));
}
Fixed Fixed::operator+(const Fixed& obj)
{
    return Fixed(this->toFloat() + obj.toFloat());
}
Fixed Fixed::operator-(const Fixed& obj)
{
    return Fixed(static_cast<float>(this->toFloat() - obj.toFloat()));
}
Fixed Fixed::operator/(const Fixed& obj)
{
    return Fixed(this->toFloat() / obj.toFloat());
}
Fixed Fixed::operator*(const Fixed& obj)
{
    return Fixed(this->toFloat() * obj.toFloat());
}