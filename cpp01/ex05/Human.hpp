

#ifndef CPP_HUMAN_HPP
#define CPP_HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain brain;
public:
	Human();
	std::string identify();
	const Brain &getBrain();
};

#endif //CPP_HUMAN_HPP
