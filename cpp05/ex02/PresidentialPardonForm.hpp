#pragma once

/*
**==========================
**		Includes
**==========================
*/


# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm & src);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm & operator=(const PresidentialPardonForm & src);

    void	action() const;
private:
    PresidentialPardonForm();
};