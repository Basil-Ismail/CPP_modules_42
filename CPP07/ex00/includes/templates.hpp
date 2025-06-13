#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template <class T> void swap(T &first, T &sec)
{
    T temp = first;
    first = sec;
    sec = temp;
}

template <class T> T min(T &first, T &sec)
{
    return (first > sec ? sec : first);
}

template <class T> T max(T &first, T &sec)
{
    return (first < sec ? sec : first);
}

#endif