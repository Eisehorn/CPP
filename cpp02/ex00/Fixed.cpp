#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout<<"Default constructor called"<<std::endl;
    this->fixed_number = 0;
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