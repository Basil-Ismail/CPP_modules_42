#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <utils.hpp>
#include <vector>

class Span
{
  protected:
  private:
    std::vector<int> vec;
    size_t _size;

  public:
    Span();
    Span(const Span &);
    Span(unsigned int);
    Span &operator=(const Span &);
    ~Span();

    void addNumber(int);
    size_t shortestSpan();
    size_t longestSpan();
};

#endif