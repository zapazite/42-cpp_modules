#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed& src);
        Fixed& operator=(const Fixed& src);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(int const raw);
    private:
        int _raw;
        static const int _frac_bits = 8;
};

#endif