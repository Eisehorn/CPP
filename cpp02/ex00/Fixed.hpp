#include <iostream>

class Fixed {
    private:
        int fixed_number;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed& operator = (const Fixed &f);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBit(int const raw);
};