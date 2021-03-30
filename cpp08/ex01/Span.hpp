#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include <vector>
#include <algorithm>

class Temp
{
private:
    unsigned int		_size;
    std::vector<int>	*_vector;
    Temp();

public:
    Temp(unsigned int n);
    Temp(const Temp & src);
    ~Temp(void);

    Temp & operator=(const Temp & src);

    unsigned int		getSize() const;
    std::vector<int>	getVector() const;
    void				addNumber(int n);
    void				addNumbers(int n, int o);
    int					shortestSpan();
    int					longestSpan();

};
std::ostream & operator<<(std::ostream & os, const Temp & src);
