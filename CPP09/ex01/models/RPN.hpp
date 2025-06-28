#ifndef RPN_HPP
#define RPN_HPP
#include <algorithm>
#include <stack>

class RPN
{

  private:
    std::stack<int> _operationsStack;

  public:
    RPN();
    RPN(const RPN &);
    RPN &operator=(const RPN &);
    ~RPN();
};

#endif