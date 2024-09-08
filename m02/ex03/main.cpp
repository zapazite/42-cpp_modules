#include "Point.hpp"

extern bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point p(2, 2); // Inside the triangle
    Point q(0, 0); // On vertex a
    Point r(5, 0); // On vertex b
    Point s(0, 5); // On vertex c
    Point t(2.5f, 0); // On edge ab
    Point u(-1, -1); // Outside the triangle

    std::cout << "the point " << p << " is " << (bsp(a, b, c, p) ? "INSIDE" : "OUTSIDE") << " the triangle : " << a << b << c << std::endl;
    std::cout << "the point " << q << " is " << (bsp(a, b, c, q) ? "INSIDE" : "OUTSIDE") << " the triangle : " << a << b << c << std::endl;
    std::cout << "the point " << r << " is " << (bsp(a, b, c, r) ? "INSIDE" : "OUTSIDE") << " the triangle : " << a << b << c << std::endl;
    std::cout << "the point " << s << " is " << (bsp(a, b, c, s) ? "INSIDE" : "OUTSIDE") << " the triangle : " << a << b << c << std::endl;
    std::cout << "the point " << t << " is " << (bsp(a, b, c, t) ? "INSIDE" : "OUTSIDE") << " the triangle : " << a << b << c << std::endl;
    std::cout << "the point " << u << " is " << (bsp(a, b, c, u) ? "INSIDE" : "OUTSIDE") << " the triangle : " << a << b << c << std::endl;

    return 0;
}