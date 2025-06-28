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
    void sort();

  public:
    PmergeMe();
    PmergeMe(const PmergeMe &);
    PmergeMe(std::string);
    PmergeMe &operator=(const PmergeMe &);
    ~PmergeMe();
};

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

    for (size_t i = 0; i < smaller.size(); i++)
    {
        binaryInsert(larger, smaller[i]);
    }
    if (hasOdd)
        binaryInsert(larger, oddElement);

    arr = larger;
}

#endif