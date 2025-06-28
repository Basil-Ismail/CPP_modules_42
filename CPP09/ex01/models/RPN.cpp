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

RPN::RPN(std::string expression)
{
    validateExpression(expression);
}

void RPN::validateExpression(std::string &expression)
{
    size_t index = expression.find_first_not_of(" +-/*0123456789");
    if (index != std::string::npos)
        throw std::runtime_error("Error: Unexpected Character ");
}

RPN &RPN::operator=(const RPN &obj)
{
    this->_operationsStack = obj._operationsStack;
    return *this;
}