#include <iostream>

template< typename T >

class Array {
private:
    T *_array;
    unsigned int _size;

public:
    Array() : _array(NULL), _size(0) {};
    
    Array(unsigned int n) : _size(n) {
        _array = new T[n]();
    };

    Array(Array const &src) {
        *this = src;
    };

    Array &operator=(Array const &src) {
        if (this != &src) {
            _size = src._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = src._array[i];
            }
        }
        return *this;
    };

    ~Array() {
        delete[] _array;
    };

    T &operator[](unsigned int i) {
        if (i >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return _array[i];
    };

    T const &operator[](unsigned int i) const {
        if (i >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return _array[i];
    };

    unsigned int size() const {
        return _size;
    };

};
