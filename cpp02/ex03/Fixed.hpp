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
        bool operator > (Fixed const &f) const;
        bool operator < (Fixed const &f) const;
        bool operator >= (Fixed const &f) const;
        bool operator <= (Fixed const &f) const;
        bool operator == (Fixed const &f) const;
        bool operator != (Fixed const &f) const;
        Fixed operator+(Fixed const &f);
        Fixed operator-(Fixed const &f);
        Fixed operator*(Fixed const &f);
        Fixed operator/(Fixed const &f);
        Fixed operator++(int);
	    Fixed operator++();
	    Fixed operator--(int);
	    Fixed operator--();
        static Fixed const &min(Fixed const &a, Fixed const &b);
	    static Fixed const &max(Fixed const &a, Fixed const &b);
	    static Fixed &min(Fixed &a, Fixed &b);
	    static Fixed &max(Fixed &a, Fixed &b);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBit(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
