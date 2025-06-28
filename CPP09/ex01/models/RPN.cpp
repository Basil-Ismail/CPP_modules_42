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

    std::stringstream ss(expression);
    std::string token;
    while (ss >> token)
    {
        if (token.length() == 1 && token[0] >= '0' && token[0] <= '9')
        {
            this->_operationsStack.push(atoi(token.c_str()));
            continue;
        }
        if (token.length() == 1)
        {
            switch (token[0])
            {
            case '-':
                sub();
                break;
            case '+':
                add();
                break;
            case '*':
                mult();
                break;
            case '/':
                div();
                break;
            default:
                throw std::runtime_error("Error: Invalid character");
            }
        }
        else
            throw std::runtime_error("Error: Invalid token");
    }
    if (this->_operationsStack.size() != 1)
        throw std::runtime_error("Error: Invalid Expression");
    std::cout << this->_operationsStack.top() << std::endl;
}

void RPN::add()
{
    if (this->_operationsStack.size() < 2)
        throw std::runtime_error("Error: Invalid Expression");
    long a;
    long b;

    b = this->_operationsStack.top();
    this->_operationsStack.pop();

    a = this->_operationsStack.top();
    this->_operationsStack.pop();
    long long result = a + b;
    if (result > INT_MAX || result < INT_MIN)
        throw std::runtime_error("Error: Overflow on addition");
    this->_operationsStack.push(result);
}
void RPN::sub()
{
    if (this->_operationsStack.size() < 2)
        throw std::runtime_error("Error: Invalid Expression");
    long a;
    long b;

    b = this->_operationsStack.top();
    this->_operationsStack.pop();

    a = this->_operationsStack.top();
    this->_operationsStack.pop();
    long long result = a - b;
    if (result < INT_MIN)
        throw std::runtime_error("Error: Overflow on subtraction");
    this->_operationsStack.push(result);
}

void RPN::mult()
{
    if (this->_operationsStack.size() < 2)
        throw std::runtime_error("Error: Invalid Expression");
    long a;
    long b;

    b = this->_operationsStack.top();
    this->_operationsStack.pop();

    a = this->_operationsStack.top();
    this->_operationsStack.pop();
    long long result = (a * b);
    if (result > INT_MAX || result < INT_MIN)
        throw std::runtime_error("Error: Overflow on multiplication");
    this->_operationsStack.push(result);
}

void RPN::div()
{
    if (this->_operationsStack.size() < 2)
        throw std::runtime_error("Error: Invalid Expression");
    long a;
    long b;

    b = this->_operationsStack.top();
    this->_operationsStack.pop();
    if (b == 0)
        throw std::runtime_error("Error: Divide by Zero!");
    a = this->_operationsStack.top();
    this->_operationsStack.pop();
    this->_operationsStack.push(a / b);
}
RPN &RPN::operator=(const RPN &obj)
{
    this->_operationsStack = obj._operationsStack;
    return *this;
}