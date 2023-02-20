#include <limits>
#include <iomanip>
#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main() {
    Data *data = new Data();
    std::cout<<"Starting pointer value: "<<data<<std::endl;
    uintptr_t ptr = serialize(data);
    data = deserialize(ptr);
    std::cout<<"Ending pointer value: "<<data<<std::endl;
    delete data;
}