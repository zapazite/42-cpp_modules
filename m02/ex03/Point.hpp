#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    public :
        Point();
        Point(Fixed const x, Fixed const y);
        Point(float const x, float const y);
        Point(Point const& src);
        Point& operator=(Point const& src);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
    private :
        Fixed const _x;
        Fixed const _y;
};
std::ostream& operator<<(std::ostream& os, Point const& rhs);
#endif