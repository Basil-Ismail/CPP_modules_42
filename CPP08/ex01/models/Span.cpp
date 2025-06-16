#include <Span.hpp>

Span::Span() : _size(0)
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}
Span &Span::operator=(const Span &obj)
{
    vec.assign(obj._size, 0);
    for (size_t i = 0; i < obj._size; i++)
        this->vec[i] = obj.vec[i];

    return *this;
}

Span::Span(unsigned int N) : _size(N)
{
}

void Span::addNumber(int item)
{
}