#include <Span.hpp>
#include <iostream>

void testCaseOne()
{
    Span obj(3);

    obj.addnumber(0, 3);

    std::cout << obj.longestSpan() << std::endl;
    std::cout << obj.shortestSpan() << std::endl;
}

int main()
{
    testCaseOne();
}