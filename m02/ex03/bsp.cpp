#include <iostream>
#include "Point.hpp"

Fixed crossProduct(const Point& p1, const Point& p2)
{
    return (p1.getX() * p2.getY()) - (p1.getY() * p2.getX());
}

bool hasSameSign(const Fixed& a, const Fixed& b)
{
    return ((a.getRawBits() ^ b.getRawBits()) >= 0);
}

bool bsp( Point const a, Point const b, Point const c, Point const p )
{
    Point ab(b.getX() - a.getX(), b.getY() - a.getY());
    Point ap(p.getX() - a.getX(), p.getY() - a.getY());
    Point bc(c.getX() - b.getX(), c.getY() - b.getY());
    Point bp(p.getX() - b.getX(), p.getY() - b.getY());
    Point ca(a.getX() - c.getX(), a.getY() - c.getY());
    Point cp(p.getX() - c.getX(), p.getY() - c.getY());
    Fixed abxap = crossProduct(ab, ap);
    Fixed bcxbp = crossProduct(bc, bp);
    Fixed caxcp = crossProduct(ca, cp);
    return hasSameSign(abxap, bcxbp) && hasSameSign(abxap, caxcp);
}