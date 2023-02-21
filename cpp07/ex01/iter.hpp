#include <iostream>

template<typename T> void increment(T val) {
    val++;
};

template<typename T> void print(T val) {
    std::cout<<val<<" ";
};

template<typename T>void    iter(T *array, int size, void f(T &t)) {
    for (int i = 0; i < size; i++) {
        f(array[i]);
    }
}