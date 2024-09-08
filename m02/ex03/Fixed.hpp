#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
        Fixed operator+(const Fixed& rhs) const;
        Fixed operator-(const Fixed& rhs) const;
        Fixed operator*(const Fixed& rhs) const;
        Fixed operator/(const Fixed& rhs) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        bool operator>(const Fixed& rhs) const;
        bool operator<(const Fixed& rhs) const;
        bool operator>=(const Fixed& rhs) const;
        bool operator<=(const Fixed& rhs) const;
        bool operator==(const Fixed& rhs) const;
        bool operator!=(const Fixed& rhs) const;
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);


    private:
        int _raw;
        static const int _frac_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif