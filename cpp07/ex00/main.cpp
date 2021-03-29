#include "whatever.hpp"
#include <iostream>

class Awesome
{
public:
    Awesome( int n ) : _n( n ) {}
    bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
    int get() const { return _n; }

private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; };
int main()
{

    std::cout << "_____INT" <<std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << std::endl;

    std::cout << "_____STRING" <<std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << std::endl;

    std::cout << "_____FLOAT" <<std::endl;
    float e = 24.3f;
    float f = 3.56f;
    ::swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    std::cout << std::endl;

    std::cout << "_____DOUBLE" <<std::endl;
    float ee = 11.11;
    float ff = 44.2;
    ::swap( ee, ff );
    std::cout << "ee = " << ee << ", ff = " << ff << std::endl;
    std::cout << "min( ee, ff ) = " << ::min( ee, ff ) << std::endl;
    std::cout << "max( ee, ff ) = " << ::max( ee, ff) << std::endl;
    std::cout << std::endl;

    std::cout << "_____COMPLICATED" <<std::endl;
    Awesome lol(5);
    Awesome kek(500);
    ::swap( lol, kek );
    std::cout << "lol = " << lol << ", kek = " << kek << std::endl;
    std::cout << "min( lol, kek ) = " << ::min( lol, kek ) << std::endl;
    std::cout << "max( lol, kek ) = " << ::max( lol, kek) << std::endl;
    std::cout << std::endl;
    return 0;
}
