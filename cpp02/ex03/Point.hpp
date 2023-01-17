#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(float const a, float const b);
        Point(Point const &p);
        Point& operator=(Fixed const &p);
        ~Point();
};