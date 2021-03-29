#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

class Convert
{
private:
    Convert();

    std::string     _inputString;
    const char*     _inputChar;

public:
    Convert(const char *av);
    Convert(Convert const &other);
    ~Convert();
    Convert &operator=(Convert const &other);


    operator char() const;
    operator int() const;
    operator double() const;
    operator float() const;

    class ConversionError: public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
	class OverflowError: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};
