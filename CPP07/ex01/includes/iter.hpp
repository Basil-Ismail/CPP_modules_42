#ifndef ITER_HPP
#define ITER_HPP

template <class T, class F> void iter(T *arr, size_t length, F func)
{
    for (size_t i = 0; i < length; i++)
        func(arr[i]);
}

template <class T, class F> void iter(const T *arr, size_t length, F func)
{
    for (size_t i = 0; i < length; i++)
        func(arr[i]);
}

#endif