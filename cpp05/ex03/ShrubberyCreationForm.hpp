#pragma once

/*
**==========================
**		Includes
**==========================
*/


# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm & other);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);

    void	action() const;
private:
    ShrubberyCreationForm();
};

