#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <utils.hpp>
#include <vector>

class Span
{
  protected:
  private:
    std::vector<int> _vec;
    size_t _size;
    Span();

  public:
    Span(const Span &);
    Span(size_t);
    Span &operator=(const Span &);
    ~Span();

    void addNumber(int);
    size_t shortestSpan();
    size_t longestSpan();
};

#endif