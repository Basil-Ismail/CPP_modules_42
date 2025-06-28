#include <RPN.hpp>

RPN::RPN()
{
}

RPN::RPN(const RPN &obj) : _operationsStack(obj._operationsStack)
{
}

RPN::~RPN()
{
}

RPN &RPN::operator=(const RPN &obj)
{
    this->_operationsStack = obj._operationsStack;
    return *this;
}