#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <utils.hpp>

class PmergeMe
{
  private:
  public:
    PmergeMe();
    PmergeMe(const PmergeMe &);
    PmergeMe(std::string);
    PmergeMe &operator=(const PmergeMe &);
    ~PmergeMe();
};

#endif