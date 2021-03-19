/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrennan <cdrennan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:28:15 by cdrennan          #+#    #+#             */
/*   Updated: 2021/03/17 19:28:15 by cdrennan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


void add_contact(Contact *book, int& index)
{
	std::string str;

	std::cout << "Enter First Name: " << std::endl;
	getline(std::cin, str);
	book[index].setFirstName(str);

	std::cout << "Enter Last Name: " << std::endl;
	getline(std::cin, str);
	book[index].setLastName(str);

	std::cout << "Enter Nickname: " << std::endl;
	getline(std::cin, str);
	book[index].setNickname(str);

	std::cout << "Enter Login: " << std::endl;
	getline(std::cin, str);
	book[index].setLogin(str);

	std::cout << "Enter Postal Address: " << std::endl;
	getline(std::cin, str);
	book[index].setPostalAddress(str);

	std::cout << "Enter Email Address: " << std::endl;
	getline(std::cin, str);
	book[index].setEmailAddress(str);

	std::cout << "Enter Phone Number: " << std::endl;
	getline(std::cin, str);
	book[index].setPhoneNumber(str);

	std::cout << "Enter Birthday Date: " << std::endl;
	getline(std::cin, str);
	book[index].setBirthdayDate(str);

	std::cout << "Enter Favourite Meal: " << std::endl;
	getline(std::cin, str);
	book[index].setFavouriteMeal(str);

	std::cout << "Enter Underwear Color: " << std::endl;
	getline(std::cin, str);
	book[index].setUnderwearColor(str);

	std::cout << "Enter Darkest Secret: " << std::endl;
	getline(std::cin, str);
	book[index].setDarkestSecret(str);

	std::cout << "Person added" << std::endl;
}

void search_contact (Contact *book, int& index)
{
	int i = 1;
	if (index == 0)
		std::cout << "Phonebook is empty" << std::endl;
	else
	{
		show_all(book, index);
		while(i)
			i = contact_search(book, index);
	}

}
int main()
{
	Contact book[8];
	std::string command;
	int index = 0;

	std::cout << "\n**Hello! You are using My Awesome Phone Book! Please enter one of commands: ADD, SEARCH or EXIT**" << std::endl << std::endl;
	while (true)
	{
		print_invite();
		getline(std::cin, command);
		if (command == "SEARCH")
		{
			search_contact(book, index);
		}
		else if (command == "ADD")
		{
			if (index < 8)
			{
				add_contact(book, index);
				index++;
			}
			else
				std::cout << "Phonebook is full" << std::endl;
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
