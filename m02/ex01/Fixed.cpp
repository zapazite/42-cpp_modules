#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value) : _raw(int_value << _frac_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_value) : _raw(roundf(float_value * (1 << _frac_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(src.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        setRawBits(src.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _raw = raw;
}

int Fixed::toInt() const
{
    return _raw >> _frac_bits;
}

float Fixed::toFloat() const
{
    return static_cast<float>(_raw) / (1 << _frac_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}