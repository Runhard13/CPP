#include "Span.hpp"


Temp::Temp(unsigned int n)
{
    _size = n;
    _vector->reserve(_size);
}

Temp::Temp() {}

unsigned int Temp::getSize() const
{
    return _size;
}

std::vector<int> Temp::getVector() const
{
    return *_vector;
}
