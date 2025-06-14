#include <iostream>
#include <iter.hpp>
#include <string>

void sum(int &a)
{
    a++;
}

void Constsum(const int &a)
{
    static_cast<void>(a);
    std::cout << "I'm const now!" << std::endl;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    iter(arr, 10, sum);

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}