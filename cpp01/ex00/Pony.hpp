#ifndef CPP_PONY_HPP
#define CPP_PONY_HPP

#include <iostream>

class Pony
{
public:
    Pony(const std::string& a, const std::string& b, const std::string& c);
    ~Pony();
    void pet();

private:
    std::string _name;
    std::string _color;
    std::string _mood;
};

#endif //CPP_PONY_HPP
