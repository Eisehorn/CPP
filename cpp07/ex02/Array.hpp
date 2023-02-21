#include <iostream>

template<typename T> class Array{
    private:
        T   *array;
        int amount;
    public:
        Array() {
            this->array = new T[0];
            this->amount = 0;
        };
        Array(unsigned int n) {
            this->array = new T[n];
            this->amount = n;
        };
        Array(const Array &ar) {
            this->array = ar.array;
            this->amount = ar.amount;
        };
        Array& operator=(const Array &ar) {
            delete array;
            this->amount = ar.amount;
            this->array = new T[ar.amount];
            for (int i = 0; i < ar.amount; i++) {
                this->array[i] = ar.array[i];
            }
            return (this);
        };
        class	IndexOutOfBounds : public std::exception {
			public:
				virtual const char *what() const throw() {
                    return ("Index out of bounds");
                };
		};
        T& operator[](int i) {
            if (i < this->amount && i >= 0)
                return (this->array[i]);
            else
                throw IndexOutOfBounds();
        }
        int size() {
            return this->amount;
        }
};