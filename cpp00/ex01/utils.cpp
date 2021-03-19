/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrennan <cdrennan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:56:43 by cdrennan          #+#    #+#             */
/*   Updated: 2021/03/17 22:56:43 by cdrennan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void print_invite()
{
	std::cout << "Your command: ";
}

std::string cut_str (const std::string& str)
{
	if (str.length() > 10)
		return(str.substr(0 , 9) + ".");
	else
		return (str);
}

void show_one (Contact *book, int i)
{
	std::cout << "First name      : " << book[i].getFirstName() << std::endl;
	std::cout << "Last name       : " << book[i].getLastName() << std::endl;
	std::cout << "Nickname        : " << book[i].getNickname() << std::endl;
	std::cout << "Login           : " << book[i].getLogin() << std::endl;
	std::cout << "Postal address  : " << book[i].getPostalAddress() << std::endl;
	std::cout << "Email           : " << book[i].getEmailAddress() << std::endl;
	std::cout << "Phone number    : " << book[i].getPhoneNumber() << std::endl;
	std::cout << "Birthday        : " << book[i].getBirthdayDate() << std::endl;
	std::cout << "Favorite meal   : " << book[i].getFavouriteMeal() << std::endl;
	std::cout << "Underwear color : " << book[i].getUnderwearColor() << std::endl;
	std::cout << "Darkest secret  : " << book[i].getDarkestSecret() << std::endl;
}

int  contact_search(Contact *book, int &index)
{
	int i = 0;
	std::string count;

	std::cout << "Enter contact's index to show full info: " << std::endl;
	getline(std::cin, count);
	if (count[0] > '0' && count[0] < '9' && count[1] == '\0')
	{
		i = std::stoi(count) - 1;
		if (i > index)
			std::cout << "No such contact" << std::endl;
		else
		{
			show_one(book, i);
			return(0);
		}
	}
	else
		std::cout << "Bad contact's index" << std::endl;
	return(1);
}

void show_all( Contact *book, int &index)
{
	int i = 0;

	while (i < index)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << cut_str(book[i].getFirstName());
		std::cout << "|" << std::setw(10) << cut_str(book[i].getLastName());
		std::cout << "|" << std::setw(10) << cut_str(book[i].getNickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}


