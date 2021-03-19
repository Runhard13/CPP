#include "Pony.hpp"

Pony::Pony(const std::string& a, const std::string& b, const std::string& c)
{
    _name = a;
    _color = b;
    _mood = c;
    std::cout << _name << ", a little " << _color << " pony in " << _mood << " mood" << std::endl;
}

Pony::~Pony()
{
    std::cout << _name << " leaving us alone" << std::endl;
}

void Pony::pet()
{
    if (_mood == "angry")
        std::cout << "It's better do not pet this angry pony!" << std::endl;
    else
        std::cout << "You pet the pony :)" << std::endl;
}


