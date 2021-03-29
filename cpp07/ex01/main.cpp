#include <iostream>
#include "iter.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int	main(void)
{
	std::cout << "_________Checklist main_________" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	std::cout << "_________Array of chars_________" << std::endl;

	char str[] = {'H','e','l','l','o'};
	iter(str, 5, print);

	std::cout << "_________Array of doubles_________" << std::endl;

	double dot[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	iter(dot, 6, print);
	return (0);
}