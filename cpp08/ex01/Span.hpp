#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
#include <algorithm>

class Span {
    private:
        std::vector<int> v;
        unsigned int n;
    public:
        Span();
        Span(unsigned int n);
        Span& operator=(Span const &s);
        Span (const Span &s);
        ~Span();
        class	SpaceExhausted : public std::exception {
	        public:
		        virtual const char *what() const throw() {
                    return ("Space exhausted");
                };
            };
        void    addNumber(int i);
        void    addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
        int shortestSpan();
        int longestSpan();
};

#endif