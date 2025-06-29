#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <utils.hpp>

class PmergeMe
{
  private:
    std::vector<int> _seq;
    std::deque<int> _seq2;

    void validateValues(std::string &);
    void processToken(std::string &);
    std::pair<double, double> sort();

  public:
    PmergeMe();
    PmergeMe(const PmergeMe &);
    PmergeMe(std::string);
    PmergeMe &operator=(const PmergeMe &);
    ~PmergeMe();
};

template <class T> void state(T &arr, std::string state)
{
    std::cout << state << " Sorting: ";
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <class T> void binaryInsert(T &arr, int value)
{
    int left = 0;
    int right = arr.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }

    arr.insert(arr.begin() + left, value);
}

template <class T> std::vector<size_t> generateJacobsthal(T container)
{
    std::vector<size_t> sequance;
    size_t n = container.size();

    if (n == 0)
        return sequance;
    std::vector<size_t> jacboNumbers;

    jacboNumbers.push_back(1);
    if (n > 1)
        jacboNumbers.push_back(1);

    while (jacboNumbers.back() < n)
    {
        size_t next = jacboNumbers[jacboNumbers.size() - 1] + 2 * jacboNumbers[jacboNumbers.size() - 2];
        if (next >= n)
            break;
        jacboNumbers.push_back(next);
    }

    std::vector<bool> used(n, false);

    for (size_t i = 1; i < jacboNumbers.size(); i++)
    {
        size_t curr = jacboNumbers[i];
        size_t prev = jacboNumbers[i - 1];
        for (size_t j = std::min(curr - 1, n - 1); j > prev && j < n; j--)
        {

            if (!used[j])
            {
                sequance.push_back(j);
                used[j] = true;
            }
            if (j == 0)
                break;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if (!used[i])
            sequance.push_back(i);
    }

    return sequance;
}

template <class T> void mergeInsertSort(T &arr)
{
    size_t size = arr.size();

    if (size <= 1)
        return;
    T larger;
    T smaller;

    bool hasOdd = false;
    int oddElement = 0;

    for (size_t i = 0; i < size - 1; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            larger.push_back(arr[i]);
            smaller.push_back(arr[i + 1]);
        }
        else
        {
            larger.push_back(arr[i + 1]);
            smaller.push_back(arr[i]);
        }
    }

    if (size % 2 == 1)
    {
        hasOdd = true;
        oddElement = arr[size - 1];
    }

    mergeInsertSort(larger);
    std::vector<size_t> order = generateJacobsthal(smaller);
    for (size_t i = 0; i < order.size(); i++)
    {
        if (order[i] < smaller.size())
            binaryInsert(larger, smaller[order[i]]);
    }
    if (hasOdd)
        binaryInsert(larger, oddElement);

    arr = larger;
}

#endif