#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _raw(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value) : _raw(int_value << _frac_bits)
{
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_value) : _raw(roundf(float_value * (1 << _frac_bits)))
{
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    //std::cout << "Copy constructor called" << std::endl;
    setRawBits(src.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& src)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        setRawBits(src.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
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

Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed result;
    result.setRawBits(getRawBits() + rhs.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed result;
    result.setRawBits(getRawBits() - rhs.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    Fixed result;
    result.setRawBits((static_cast<int64_t>(getRawBits()) * rhs.getRawBits()) >> _frac_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    Fixed result;
    result.setRawBits((static_cast<int64_t>(getRawBits()) << _frac_bits) / rhs.getRawBits());
    return result;
}

Fixed& Fixed::operator++()
{
    setRawBits(getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--()
{
    setRawBits(getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

bool Fixed::operator>(const Fixed& rhs) const
{
    return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return getRawBits() != rhs.getRawBits();
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return a > b ? a : b;
}