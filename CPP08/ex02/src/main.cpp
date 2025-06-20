#include <MutantStack.hpp>
#include <iostream>

int main()
{
    std::cout << "==== MutantStack ====" << std::endl;

    MutantStack<int> mstack;

    mstack.push(10);
    mstack.push(5);
    mstack.push(20);
    mstack.push(3);
    mstack.push(1000);
    std::cout << "Before Sorting: ";
    for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::sort(mstack.begin(), mstack.end());
    std::cout << std::endl;
    std::cout << "After Sorting: ";
    for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    std::cout << "Reverse order: ";
    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it)
    {
        std::cout << *it << " ";
    }
}