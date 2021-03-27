#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm & other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm & operator=(const RobotomyRequestForm & src);

    void action() const;
private:
    RobotomyRequestForm();
};
