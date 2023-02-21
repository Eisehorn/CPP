#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    std::vector<int> something;
    something.push_back(6);
    something.push_back(3);
    something.push_back(17);
    something.push_back(9);
    something.push_back(11);

    sp.addNumber(something.begin(), something.end());

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}