#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <utils.hpp>

class PmergeMe
{
  private:
    std::vector<int> _seq;
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

#endif