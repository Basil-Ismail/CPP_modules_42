#include <easyfind.hpp>
#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::vector<int> vec;
    std::list<char> lst;

    for (size_t i = 0; i < 3; i++)
    {
        lst.push_back('a' + i);
    }

    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    std::vector<int>::iterator it = easyfind(vec, 3);
    std::list<char>::iterator lit = easyfind(lst, 'b');
    std::cout << *it << *lit << std::endl;
}