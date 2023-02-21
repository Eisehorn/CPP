#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template<typename T> class MutantStack : public std::stack<T> {
    public:
        typedef std::stack<T> stack;
        typedef typename stack::container_type container;
        typedef typename container::iterator iterator;
        MutantStack() {};
        ~MutantStack() {};
        MutantStack(const MutantStack &src) : stack(src) {};
        MutantStack& operator=(const MutantStack &src) {
            if (*this != src)
                *this = src;
            return (*this);
	    }
        iterator begin() {
            return (stack::c.begin());
        }
        iterator end() {
		    return (stack::c.end());
	    }
};

#endif