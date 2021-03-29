#include "Convert.hpp"

Convert::Convert(){}
Convert::~Convert(){}

Convert::Convert(Convert const &other)
{
	_inputChar = other._inputChar;
	_inputString = other._inputString;
}

Convert &Convert::operator=(Convert const &other)
{
   if (this != &other)
   {
	   _inputChar = other._inputChar;
	   _inputString = other._inputString;
   }
    return(*this);
}

Convert::Convert(const char *av)
{
    _inputString = std::string(av);
    _inputChar = av;
}

Convert::operator char() const
{
    if ((_inputString == "-inf") || (_inputString == "-inff") || (_inputString ==  "inf") ||
    (_inputString == "nan") || (_inputString == "nanf"))
        throw ConversionError();

    char *end;
    double x;

    try
    {
        if((x = std::strtod(_inputChar, &end)) == 0)
        {
            int i = _inputString.length();
            if (i == 1)
                return static_cast<char>(_inputChar[0]);
            else
                throw ConversionError();
        }
    }
    catch(const std::exception& e)
    {
        throw ConversionError();
    }
	try
	{
		if (x > std::numeric_limits<char>::max() || x < std::numeric_limits<char>::min())
			throw OverflowError();
	}
	catch(const std::exception& e)
	{
		throw OverflowError();
	}
    return static_cast<char>(x);
}

Convert::operator int() const
{
	if ((_inputString == "-inf") || (_inputString == "-inff") || (_inputString ==  "inf") ||
		(_inputString == "nan") || (_inputString == "nanf"))
        throw ConversionError();

    char *end;
    double x;
    bool fail = false;

    try
    {
    	if((x = std::strtod(_inputChar, &end)) == 0)
        {
    		int i = 0;
            while(_inputChar[i] && !fail)
            {
                if (isdigit(_inputChar[i]))
                    i++;
                else
                    fail = true;
            }

            if (i == 1 || !fail)
            {
                if (_inputChar[0] == '0')
                    return static_cast<int>(0);
                return static_cast<int>(_inputChar[0]);
            }
            else
                throw ConversionError();
        }
    }
    catch(const std::exception& e)
    {
        throw ConversionError();
    }
    try
	{
		if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
			throw OverflowError();
	}
	catch(const std::exception& e)
	{
		throw OverflowError();
	}
    return static_cast<int>(x);
}

Convert::operator double() const
{
    double x;
    char *end;
    bool fail = false;

    try
    {
        if((x = std::strtod(_inputChar, &end)) == 0)
        {
            int i = 0;
			while(_inputChar[i] && !fail)
			{
				if (isdigit(_inputChar[i]))
					i++;
				else
					fail = true;
			}

			if (i == 1 || !fail)
			{
				if (_inputChar[0] == '0')
					return static_cast<double>(0);
				return static_cast<double>(_inputChar[0]);
			}
			else
				throw ConversionError();
        }
    }
    catch(const std::exception& e)
    {
        throw ConversionError();
    }
    return static_cast<double>(x);
}

Convert::operator float() const
{
    double x;
    char *end;
    bool fail = false;

    try
    {
		if((x = std::strtod(_inputChar, &end)) == 0)
		{
			int i = 0;
			while(_inputChar[i] && !fail)
			{
				if (isdigit(_inputChar[i]))
					i++;
				else
					fail = true;
			}

			if (i == 1 || !fail)
			{
				if (_inputChar[0] == '0')
					return static_cast<float>(0);
				return static_cast<float>(_inputChar[0]);
			}
			else
				throw ConversionError();
		}
	}
	catch(const std::exception& e)
	{
		throw ConversionError();
	}
	return static_cast<float>(x);
}

const char *Convert::ConversionError::what() const throw()
{
    return ("impossible");
}

const char *Convert::OverflowError::what() const throw()
{
	return ("overflow");
}

