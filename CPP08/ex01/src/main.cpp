#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a;

    for (size_t i = 0; i < 10; i++)
    {
        a.push_back(i);
    }

    std::vector<int>::iterator it = easyfind(a, 3);
    std::cout << *it << std::endl;
}