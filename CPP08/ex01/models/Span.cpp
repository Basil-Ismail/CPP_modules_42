#include <Span.hpp>

Span::Span() : _size(0)
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span::Span(size_t len)
{
    this->_size = len;
}
Span &Span::operator=(const Span &obj)
{
    this->_size = obj._size;
    for (size_t i = 0; i < obj._size; i++)
        this->_vec.push_back(obj._vec[i]);

    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int item)
{
}