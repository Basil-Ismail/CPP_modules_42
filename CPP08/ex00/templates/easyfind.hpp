#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>

template <class T> typename T::iterator easyfind(T &list, int target)
{
    typename T::iterator it = std::find(list.begin(), list.end(), target);

    if (it == list.end())
        throw std::runtime_error("Value not found in container");

    return it;
}

#endif