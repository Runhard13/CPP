#include "Pony.hpp"

Pony::Pony(const std::string& a, const std::string& b, const std::string& c)
{
    this->_name = a;
    this->_color = b;
    this->_mood = c;
    std::cout << this->_name << ", a little " << this->_color << " pony in " << this->_mood << " mood" << std::endl;
}

Pony::~Pony()
{
    std::cout << this->_name << " leaving us alone" << std::endl;
}

void Pony::pet()
{
    if (this->_mood == "angry")
        std::cout << "It's better do not pet this angry pony!" << std::endl;
    else
        std::cout << "You pet the pony :)" << std::endl;
}


