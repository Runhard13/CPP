#include "Classes.hpp"

int	main()
{
	Base	*ptr;

	srand(time(0));

	ptr = generate();
	identify_from_pointer(ptr);
	delete ptr;

	ptr = generate();
	identify_from_pointer(ptr);
	delete ptr;

	ptr = generate();
	identify_from_pointer(ptr);
	delete ptr;

	ptr = generate();
	identify_from_reference(*ptr);
	delete ptr;

	ptr = generate();
	identify_from_reference(*ptr);
	delete ptr;

	ptr = generate();
	identify_from_reference(*ptr);
	delete ptr;

	return (0);
}