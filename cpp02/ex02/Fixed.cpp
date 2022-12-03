#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout<<"Default constructor called"<<std::endl;
    this->fixed_number = 0;
}

Fixed::Fixed(int const n) {
    std::cout<<"Int constructor called"<<std::endl;
    this->fixed_number = (n << Fixed::fract_bits);
}

Fixed::Fixed(float const n) {
    std::cout<<"Float constructor called"<<std::endl;
    this->fixed_number = (n  * (1 << Fixed::fract_bits));
}

Fixed::Fixed(const Fixed &f) {
    std::cout<<"Copy constructor called"<<std::endl;
    this->fixed_number = f.getRawBits();
}

int Fixed::getRawBits() const {
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->fixed_number;
}

void    Fixed::setRawBit(int const raw) {
    this->fixed_number = raw;
}

Fixed::~Fixed() {
    std::cout<<"Destructor called"<<std::endl;
}

Fixed &Fixed::operator= (const Fixed &f){
    this->fixed_number = f.getRawBits();
    return *this;
};

bool Fixed::operator> (Fixed const &f) const{
    return (this->fixed_number > f.fixed_number);
}

bool Fixed::operator< (Fixed const &f) const{
    return (this->fixed_number < f.fixed_number);
}

bool Fixed::operator>= (Fixed const &f) const{
    return (this->fixed_number >= f.fixed_number);
}

bool Fixed::operator<= (Fixed const &f) const{
    return (this->fixed_number <= f.fixed_number);
}

bool Fixed::operator== (Fixed const &f) const{
    return (this->fixed_number == f.fixed_number);
}

bool Fixed::operator!= (Fixed const &f) const{
    return (this->fixed_number != f.fixed_number);
}

Fixed Fixed::operator+(Fixed const &f) {
    Fixed temp(*this);
    temp.setRawBit(this->getRawBits() + f.getRawBits());
    return temp;
}

Fixed Fixed::operator-(Fixed const &f) {
    Fixed temp(*this);
    temp.setRawBit(this->getRawBits() - f.getRawBits());
    return temp;
}

Fixed Fixed::operator*(Fixed const &f) {
    Fixed temp(*this);
    long tmp1, tmp2;

    tmp1 = (long)this->getRawBits();
    tmp2 = (long)f.getRawBits();
    temp.setRawBit((tmp1 * tmp2) / (1 << Fixed::fract_bits));
    return temp;
}

Fixed Fixed::operator/(Fixed const &f) {
    Fixed temp(*this);
    long tmp1, tmp2;

    tmp1 = (long)this->getRawBits();
    tmp2 = (long)f.getRawBits();
    temp.setRawBit((tmp1 * (1 << Fixed::fract_bits)) / tmp2);
    return temp;
}

int Fixed::toInt(void) const {
    return (this->fixed_number >> Fixed::fract_bits);
}

float Fixed::toFloat(void) const {
    return ((float)this->fixed_number / (float)(1 << Fixed::fract_bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &f) {
    out << f.toFloat();
    return out;
}