#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int	easyfind(T & container, int n)
{
    typename T::iterator	pos;

    pos = std::find(container.begin(), container.end(), n);

    if (pos == container.end())
        throw std::runtime_error("Element not found");

    return (*pos);
}

#endif //CPP_EASYFIND_HPP
