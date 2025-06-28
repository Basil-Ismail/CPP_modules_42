#ifndef RPN_HPP
#define RPN_HPP

#include <utils.hpp>

class RPN
{

  private:
    std::stack<int> _operationsStack;
    RPN();
    RPN(const RPN &);
    void validateExpression(std::string &);

  public:
    RPN(std::string);
    RPN &operator=(const RPN &);
    ~RPN();
};

#endif