#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T 				*_array;
	unsigned int 	_len;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	unsigned int size() const;
	~Array();

	Array &operator=(Array const &other);
	T& operator[](unsigned int i) const;

	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};

template <class T>
Array<T>::Array()
{
	_len = 0;
	_array = NULL;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	T *ptr = new T();

	_len = n;
	_array = new T[_len];
	for (unsigned int i = 0 ; i < _len ; i++)
		_array[i] = *ptr;
}

template<typename T>
Array<T>::Array(const Array &other)
{
	_array = new T[other._len];
	_len = other._len;
	for(unsigned int i = 0; i < other._len; i++)
		_array[i] = *new T(other._array[i]);
	*this = other;
}

template<typename T>
Array<T>::~Array()
{
	if (_len)
		delete [] _array;
}

template<typename T>
 Array<T> &Array<T>::operator=(const Array &other)
{
	unsigned int i = 0;

	if (this != &other)
	{
		while (i < _len && i < other._len)
		{
			_array[i] = other._array[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int i) const
{
	if (i >= _len)
		throw OutOfBoundsException();
	return _array[i];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _len;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("this element is out of the limits");
}

#endif //CPP_ARRAY_HPP



