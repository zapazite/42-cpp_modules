#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(int const int_value);
        Fixed(float const float_value);
        Fixed(const Fixed& src);
        Fixed& operator=(const Fixed& src);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(int const raw);
        int toInt() const;
        float toFloat() const;

    private:
        int _raw;
        static const int _frac_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif