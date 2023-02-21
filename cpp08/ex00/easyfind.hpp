#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

class	Iteratornotfound : public std::exception {
	public:
		virtual const char *what() const throw() {
            return ("Iterator not found");
        };
};

template<typename T> typename T::iterator easyfind(T &vec, int i) {
    typename T::iterator thing = std::find(vec.begin(), vec.end(), i);
    if (thing == vec.end())
        throw Iteratornotfound();
    return thing;
};

#endif