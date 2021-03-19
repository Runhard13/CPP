/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrennan <cdrennan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:07:06 by cdrennan          #+#    #+#             */
/*   Updated: 2021/03/17 20:07:06 by cdrennan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class Contact
{
public:
	void setFirstName(const std::string& str);
	void setLastName(const std::string& str);
	void setNickname(const std::string& str);
	void setLogin(const std::string& str);
	void setPostalAddress(const std::string& str);
	void setEmailAddress(const std::string& str);
	void setPhoneNumber(const std::string& str);
	void setBirthdayDate(const std::string& str);
	void setFavouriteMeal(const std::string& str);
	void setUnderwearColor(const std::string& str);
	void setDarkestSecret(const std::string& str);

	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getLogin();
	std::string getPostalAddress();
	std::string getEmailAddress();
	std::string getPhoneNumber();
	std::string getBirthdayDate();
	std::string getFavouriteMeal();
	std::string getUnderwearColor();
	std::string getDarkestSecret();

private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _postal;
	std::string _email;
	std::string _phone;
	std::string _birthday;
	std::string _meal;
	std::string _color;
	std::string _secret;
};

#endif //PHONEBOOK_H
