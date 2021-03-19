/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrennan <cdrennan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:07:17 by cdrennan          #+#    #+#             */
/*   Updated: 2021/03/17 20:07:17 by cdrennan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string Contact::getBirthdayDate()
{
	return(_birthday);
}

std::string Contact::getDarkestSecret()
{
	return(_secret);
}

std::string Contact::getEmailAddress()
{
	return(_email);
}

std::string Contact::getFavouriteMeal()
{
	return(_meal);
}

std::string Contact::getFirstName()
{
	return(_firstname);
}

std::string Contact::getLastName()
{
	return(_lastname);
}

std::string Contact::getLogin()
{
	return(_login);
}

std::string Contact::getNickname()
{
	return(_nickname);
}

std::string Contact::getPhoneNumber()
{
	return(_phone);
}

std::string Contact::getPostalAddress()
{
	return(_postal);
}

std::string Contact::getUnderwearColor()
{
	return(_color);
}

void Contact::setFirstName(const std::string& str)
{
	_firstname = str;
}

void Contact::setLastName(const std::string& str)
{
	_lastname = str;
}

void Contact::setNickname(const std::string& str)
{
	_nickname = str;
}

void Contact::setLogin(const std::string& str)
{
	_login = str;
}

void Contact::setPostalAddress(const std::string& str)
{
	_postal = str;
}

void Contact::setEmailAddress(const std::string& str)
{
	_email = str;
}

void Contact::setPhoneNumber(const std::string& str)
{
	_phone = str;
}

void Contact::setBirthdayDate(const std::string& str)
{
	_birthday = str;
}

void Contact::setFavouriteMeal(const std::string& str)
{
	_meal = str;
}

void Contact::setUnderwearColor(const std::string& str)
{
	_color = str;
}

void Contact::setDarkestSecret(const std::string& str)
{
	_secret = str;
}