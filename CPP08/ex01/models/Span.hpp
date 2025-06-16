#ifndef SPAN_HPP
#define SPAN_HPP

#include <utils.hpp>

class Span
{
  protected:
  private:
    int *arr;
    unsigned int _size;

  public:
    void addNumber();
    void shortestSpan();
    void longestSpan();
};

#endif