
#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
public:
	Brain(int a, int b);
	std::string identify() const;
private:
	int _weight;
	int _iq;
};

#endif //CPP_BRAIN_HPP
