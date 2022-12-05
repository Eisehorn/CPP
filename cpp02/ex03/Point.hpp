#include "Fixed.hpp"

class Point {
    public:
        Fixed const x;
        Fixed const y;
    private:
        Point();
        Point(float const a, float const b);
        Point(Point const &p);
        Point& operator=(Fixed const &p);
        ~Point();    
};