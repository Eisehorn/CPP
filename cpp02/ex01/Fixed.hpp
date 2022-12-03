#include <iostream>
#include <cmath>

class Fixed {
    private:
        int fixed_number;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(int const n);
        Fixed(float const n);
        Fixed(const Fixed &f);
        Fixed& operator = (const Fixed &f);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBit(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);