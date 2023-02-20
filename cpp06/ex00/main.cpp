#include <iostream>
#include <limits>
#include <iomanip>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout<<"Wrong number of arguments!"<<std::endl;
        return (0);
    }
    double x = std::atof(argv[1]);
    int y = static_cast<int>(x);
    if (x >= INT_MIN && x <= INT_MAX) {
        std::cout<<"Int: "<<y<<std::endl;
    }
    else
        std::cout<<"Number greater than MAXINT or lower than MININT"<<std::endl;
    float z = static_cast<float>(x);
    std::cout<<"Float: "<<std::fixed<<std::setprecision(1)<<z<<"f"<<std::endl;
    if (x >= CHAR_MIN && x <= CHAR_MAX) {
        if (isprint(y)) {
            char c = static_cast<char>(x);
            std::cout<<"Char: "<<c<<std::endl;
        }
        else
            std::cout<<"Char: non displayable"<<std::endl;
    }
    else
        std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Double: "<<std::fixed<<std::setprecision(1)<<x<<std::endl;
}