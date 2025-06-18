#include <Span.hpp>

Span::Span() : _maxSize(0)
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span::Span(size_t len)
{
    this->_maxSize = len;
}
Span &Span::operator=(const Span &obj)
{
    this->_maxSize = obj._maxSize;
    for (size_t i = 0; i < obj._maxSize; i++)
        this->_vec.push_back(obj._vec[i]);

    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int item)
{
    if (this->_vec.size() + 1 > this->_maxSize)
        throw Span::MAXIMUMSIZEEXCEPTION();
    this->_vec.push_back(item);
}

// example {1,3,4,6,10}
// Best Solution could be to get the item sorted, then simply find each pair.diff

size_t Span::shortestSpan()
{
    size_t min = std::numeric_limits<size_t>::max();

    std::sort(this->_vec.begin(), this->_vec.end());
    for (size_t i = 0; i < this->_vec.size() - 1; i++)
        min = min > static_cast<size_t>(this->_vec[i + 1] - this->_vec[i]) ? this->_vec[i + 1] - this->_vec[i] : min;
    return min;
}

// The ideas is simple: longest span means the highest difference,
//  so if it's sorted, that last and first item are max - min.
size_t Span::longestSpan()
{
    if (this->_vec.size() < 2)
        return 0;
    std::sort(this->_vec.begin(), this->_vec.end());
    return this->_vec.back() - this->_vec.front();
}

void Span::addnumber(size_t begin, size_t end)
{
    if ((end - begin) > this->_maxSize - this->_vec.size())
        throw Span::MAXIMUMSIZEEXCEPTION();
    std::vector<int> range;
    for (size_t i = begin; i < end; i++)
        range.push_back(i);
    this->_vec.insert(this->_vec.end(), range.begin(), range.end());
}

const char *Span::MAXIMUMSIZEEXCEPTION::what() const throw()
{
    return "Exceeded the maximum size of the Span";
}