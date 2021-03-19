#include "Human.hpp"

const Brain& Human::getBrain()
{
	return brain;
}

std::string Human::identify()
{
	return brain.identify();
}

Human::Human(): brain(1, 100)
{
}
