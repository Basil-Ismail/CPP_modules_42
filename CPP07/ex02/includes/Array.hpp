#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T> class Array
{
  private:
    T *arr;
    unsigned int size;

  public:
    Array();
    Array(unsigned int);
    Array(const Array &);
    Array &operator=(const Array &);
    T &operator[](unsigned int);

    unsigned int size();
}

#include "Array.tpp"

#endif