#include "easyfind.hpp"
#include <vector>

int main() {
    std::vector<int> lol;

    lol.push_back(42);
    lol.push_back(4);
    lol.push_back(45);
    lol.push_back(2);
    lol.push_back(45);
    lol.push_back(53);
    lol.push_back(0);

    try {
        std::vector<int>::iterator it = easyfind(lol, 2);
        std::cout<<it - lol.begin()<<std::endl;
    } catch (std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
    try {
        std::vector<int>::iterator it = easyfind(lol, 66464);
        std::cout<<it - lol.begin()<<std::endl;
    } catch (std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
}