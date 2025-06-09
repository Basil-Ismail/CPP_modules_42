#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "../includes/utils.hpp"

class Serializer {
protected:
private:
    Serializer();
    Serializer(const Serializer&);
    Serializer& operator=(const Serializer&);
    ~Serializer();

public:
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif