#include <Serializer.hpp>

int main()
{
    Data* lol = new Data();

    uintptr_t dummy = Serializer::serialize(lol);
    if (lol == Serializer::deserialize(dummy))
        std::cout << "Same Address" << std::endl;
    else
        std::cout << "Wrong address" << std::endl;

    delete lol;
}