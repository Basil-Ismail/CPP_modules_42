#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T> class Array
{
  private:
    T *_arr;
    unsigned int _size;
    void free_array();

  public:
    Array();
    Array(unsigned int);
    Array(const Array &);
    Array &operator=(const Array &);
    T &operator[](unsigned int);
    const T &operator[](unsigned int) const;

    unsigned int size() const;
};

#include "Array.tpp"

#endif