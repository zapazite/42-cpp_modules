#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(Point const& src) : _x(src.getX()), _y(src.getY()) {}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point& Point::operator=(Point const& src)
{
    (void)src;
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const
{
    return _x;
}

Fixed Point::getY() const
{
    return _y;
}

std::ostream& operator<<(std::ostream& os, Point const& rhs)
{
    os << "(" << rhs.getX() << ", " << rhs.getY() << ")";
    return os;
}

