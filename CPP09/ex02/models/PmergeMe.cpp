#include <PmergeMe.hpp>

PmergeMe::PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &)
{
    return (*this);
}
PmergeMe::PmergeMe(const PmergeMe &obj) : _seq(obj._seq), _seq2(obj._seq2)
{
}

PmergeMe::PmergeMe(std::string _seq)
{
    if (_seq.empty())
        throw std::runtime_error("Error: Empty string");
    validateValues(_seq);
    state(this->_seq, "before");
    std::pair<double, double> times = sort();
    state(this->_seq2, "after");
    std::cout << "Time to sort a " << "Vector" << " with a size of " << this->_seq.size() << " :  " << times.first
              << "us" << std::endl;
    std::cout << "Time to sort a " << "Deque" << " with a size of " << this->_seq.size() << " :  " << times.second
              << "us" << std::endl;
}

void PmergeMe::validateValues(std::string &expr)
{
    size_t index;

    index = expr.find_first_not_of(" 0123456789");
    if (index != std::string::npos)
        throw std::runtime_error("Error: Unexpected character");
    std::stringstream ss(expr);
    std::string token;
    while (ss >> token)
    {
        processToken(token);
    }
    if (this->_seq2.empty() || this->_seq.empty())
        throw std::runtime_error("Error: empty sequance");
}

void PmergeMe::processToken(std::string &token)
{
    char *endptr;
    long value;

    value = strtol(token.c_str(), &endptr, 10);
    if (errno == ERANGE || *endptr != '\0')
        throw std::runtime_error("Error: Overflow!");
    if (value > INT_MAX || value < INT_MIN)
        throw std::runtime_error("Error: Exceeded IntegerOverFlow");
    this->_seq.push_back(value);
    this->_seq2.push_back(value);
}

std::pair<double, double> PmergeMe::sort()
{
    if (this->_seq.size() == 1)
        throw std::runtime_error("One item! is already sorted!");
    clock_t startVector = clock();
    mergeInsertSort(this->_seq);
    clock_t endVector = clock();

    clock_t startDeque = clock();
    mergeInsertSort(this->_seq2);
    clock_t endDeque = clock();

    double vecTime = ((double)(endVector - startVector) / CLOCKS_PER_SEC) * 1000000;
    double deqTime = ((double)(endDeque - startDeque) / CLOCKS_PER_SEC) * 1000000;
    return std::make_pair(vecTime, deqTime);
}

PmergeMe::~PmergeMe()
{
}
