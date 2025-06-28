#include <PmergeMe.hpp>

PmergeMe::PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &)
{
    return *this;
}

PmergeMe::PmergeMe(std::string _seq)
{
    validateValues(_seq);
    // sort();
}

void PmergeMe::validateValues(std::string &expr)
{
    size_t index = expr.find_first_not_of(" 0123456789");
    if (index != std::string::npos)
        throw std::runtime_error("Error: Unexpected character");
    std::stringstream ss(expr);
    std::string token;
    while (ss >> token)
    {
        processToken(token);
    }
    for (size_t i = 0; i < this->_seq.size(); i++)
    {
        std::cout << _seq[i] << " ";
    }
}

void PmergeMe::processToken(std::string &token)
{
    char *endptr;
    long value = strtol(token.c_str(), &endptr, 10);
    if (errno == ERANGE || *endptr != '\0')
        throw std::runtime_error("Error: Overflow!");
    if (value > INT_MAX || value < INT_MIN)
        throw std::runtime_error("Error: Exceeded IntegerOverFlow");

    this->_seq.push_back(value);
}
PmergeMe::~PmergeMe()
{
}
