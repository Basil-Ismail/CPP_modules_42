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
    T &operator=(const Array &);
    T &operator[](unsigned int);
    const T &operator[](unsigned int) const;

    unsigned int size() const;
};

template <class T> Array<T>::Array() : _arr(NULL), _size(0)
{
}

template <class T> Array<T>::Array(unsigned int len)
{
    this->_arr = new T[len];
    this->_size = len;
}

template <class T> Array<T>::Array(const Array<T> &obj)
{
    this->_arr = new T[obj.size()];
    this->_size = obj.size();

    for (size_t i = 0; i < obj.size(); i++)
    {
        this->_arr[i] = obj[i];
    }
}

template <class T> const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size)
        throw std::out_of_range("Index is out of bound");
    return this->_arr[index];
}

template <class T> T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->_size)
        throw std::out_of_range("Index is out of bound");
    return this->_arr[index];
}

template <class T> unsigned int Array<T>::size() const
{
    return this->_size;
}

template <class T> void Array<T>::free_array()
{
    delete[] this->_arr;
}

#endif