#include "Span.hpp"

Span::Span() {};

Span::~Span() {};

Span::Span(unsigned int num) : v(std::vector<int>()), n(num) {};

Span& Span::operator=(const Span &s) {
    this->v = std::vector<int>(s.v);
    this->n = s.n;
    return (*this);
};

Span::Span(const Span &s) {
    this->v = std::vector<int>(s.v);
    this->n = s.n;
}

void    Span::addNumber(int n) {
    if (this->v.size() > this->n)
        throw SpaceExhausted();
    this->v.push_back(n);
}

void    Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
    std::vector<int>::iterator it = begin;
    while (it != end) {
        addNumber(*it);
        it++;
    }
}

int     Span::longestSpan() {
    if (this->v.size() <= 1)
        throw SpaceExhausted();
    int max = *this->v.begin();
    int min = *this->v.begin();
    std::vector<int>::iterator it = this->v.begin();
    while (it != this->v.end()) {
        if (min > *it) {
            min = *it;
        } 
        if (max < *it) {
            max = *it;
        }
        it++;
    }
    return (max - min);
}

int Span::shortestSpan() {
    if (this->v.size() <= 1)
        throw SpaceExhausted();
    std::sort(this->v.begin(), this->v.end());
    int j, diff = this->v.end() - this->v.begin();
    for (unsigned int i = 0; i < this->v.size() - 1; i++) {
        j = this->v[i + 1];
        if (j - this->v[i] < diff)
            diff = j - this->v[i];
    }
    return (diff);
}
