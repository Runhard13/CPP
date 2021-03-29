#include "Classes.hpp"

Base	*generate()
{
	int		r = rand() % 3;
	Base	*ptr;

	if (r == 0)
		ptr = new A;
	else if (r == 1)
		ptr = new B;
	else
		ptr = new C;
	return (ptr);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast <A *> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B *> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C *> (p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast <A *> (&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B *> (&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C *> (&p))
		std::cout << "C" << std::endl;
}
