#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include <cstdlib>

class Convert
{
private:
    Convert();
    char            _c;
    float           _f;
    double          _d;
    int             _i;

    std::string     _cString;
    std::string     _fString;
    std::string     _dString;
    std::string     _iString;
    std::string     _inputString;
    const char*     _inputChar;

public:
    Convert(char *av);
    Convert(Convert const &other);
    ~Convert();
    Convert &operator=(Convert const &other);

    std::string getChar() const;
    std::string getInt() const;
    std::string getFloat() const;
    std::string getDouble() const;

    operator char() const;
    operator int() const;
    operator double() const;
    operator float() const;

    class ConversionError: public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Convert const &base);
