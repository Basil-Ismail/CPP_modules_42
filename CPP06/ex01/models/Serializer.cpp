#include <Serializer.hpp>

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& obj)
{
    (void)obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
    (void)obj;
    return *this;
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t uptr = reinterpret_cast<uintptr_t>(ptr);
    return uptr;
}
Data* Serializer::deserialize(uintptr_t raw)
{
    Data* dptr = reinterpret_cast<Data*>(raw);
    return dptr;
}