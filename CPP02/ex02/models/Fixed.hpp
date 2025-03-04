#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    static const int fractionalBits = 8;
    int fixedPointValue;

public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed& old);
    Fixed& operator=(const Fixed& old);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
    bool operator<(const Fixed&) const;
    bool operator>(const Fixed&) const;
    bool operator==(const Fixed&) const;
    bool operator<=(const Fixed&) const;
    bool operator>=(const Fixed&) const;
    bool operator!=(const Fixed&) const;
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    static Fixed& min(const Fixed&, const Fixed&);
    static Fixed& max(const Fixed&, const Fixed&);
    static Fixed& min(Fixed&, Fixed&);
    static Fixed& max(Fixed&, Fixed&);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif