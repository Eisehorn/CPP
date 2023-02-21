#include "iter.hpp"

int main() {
    int arrOne[] = {41, 56, 32, 98, 54, 34};
    float arrTwo[] = {34.2, 5.3, 63.2, 57.5, 6.8, 10.3, 0.5};

    std::cout<<"TEST ONE"<<std::endl;
    iter(arrOne, 6, print);
    std::cout<<std::endl;
    iter(arrOne, 6, increment);
    iter(arrOne, 6, print);
    std::cout<<std::endl;

    std::cout<<"TEST TWO"<<std::endl;
    iter(arrTwo, 7, print);
    std::cout<<std::endl;
    iter(arrTwo, 7, increment);
    iter(arrTwo, 7, print);
    std::cout<<std::endl;

    return (0);
}