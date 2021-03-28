#include "Convert.hpp"

Convert::Convert(){}
Convert::~Convert(){}

Convert::Convert(Convert const &other)
{
    (void)other;
}

Convert &Convert::operator=(Convert const &other)
{
    (void)other;
    return(*this);
}

std::string Convert::getChar() const
{
    return _cString;
}

std::string Convert::getInt() const
{
    return _iString;
}

std::string Convert::getFloat() const
{
    return _fString;
}

std::string Convert::getDouble() const
{
    return _dString;
}

Convert::Convert(char *av)
{
    _inputString = std::string(av);
    _inputChar = av;
    _f = 0;
    _d = 0;
    _i = 0;
    _c = 0;
}

std::ostream &operator<<(std::ostream &o, Convert const &base)
{
   o << "char: " << base.getChar() << std::endl;
   o << "int: " << base.getInt() << std::endl;
   o << "float: " << base.getFloat() << std::endl;
   o << "double: " << base.getDouble();
    return (o);
}

Convert::operator char() const
{
    if ((_inputString == "-inf") || (_inputString == "-inff") || (_inputString ==  "inf") || (_inputString == "inff"))
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
    return static_cast<int>(x);
}

Convert::operator int() const
{
    if ((_inputString == "-inf") || (_inputString == "-inff") || (_inputString ==  "inf") || (_inputString == "inff"))
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
    return static_cast<int>(x);
}

Convert::operator double() const
{
    double x = 0.0;
    char *end;
    try
    {
        if((x = std::strtod(this->_data, &end)) == 0)
        {
            int x = 0;
            int others = 0;
            while(this->_data[x])
            {
                if (this->_data[x] >= '1' && this->_data[x] <= '9')
                    others++;
                x++;
            }

            if (x == 1 || others == 0)
            {
                if (this->_data[0] == '0')
                    return static_cast<double>(0);
                return static_cast<double>(this->_data[0]);
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
    double x = 0.0;
    char *end;
    try
    {
        if((x = std::strtod(this->_data, &end)) == 0)
        {
            int x = 0;
            int others = 0;
            while(this->_data[x])
            {
                if (this->_data[x] >= '1' && this->_data[x] <= '9')
                    others++;
                x++;
            }

            if (x == 1 || others == 0)
            {
                if (this->_data[0] == '0')
                    return static_cast<float>(0);
                return static_cast<float>(this->_data[0]);
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
    return ("Impossible");
}

