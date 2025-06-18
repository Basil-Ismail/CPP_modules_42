#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <limits>
#include <utils.hpp>
#include <vector>

class Span
{
  protected:
  private:
    std::vector<int> _vec;
    size_t _maxSize;
    Span();

  public:
    Span(const Span &);
    Span(size_t);
    Span &operator=(const Span &);
    ~Span();

    void addNumber(int);
    size_t shortestSpan();
    size_t longestSpan();

    class MAXIMUMSIZEEXCEPTION : public std::exception
    {
        const char *what() const throw();
    };
};

#endif