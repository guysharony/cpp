/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:23:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/15 11:41:31 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::Query(std::string name) {
	std::string cmd;

	std::getline(std::cin, cmd);
	if (!(name.compare("first_name")))
		this->_first_name = cmd;
	else if (!(name.compare("last_name")))
		this->_last_name = cmd;
	else if (!(name.compare("nickname")))
		this->_nickname = cmd;
	else if (!(name.compare("login")))
		this->_login = cmd;
	else if (!(name.compare("postal_address")))
		this->_postal_address = cmd;
	else if (!(name.compare("email_address")))
		this->_email_address = cmd;
	else if (!(name.compare("phone_number")))
		this->_phone_number = cmd;
	else if (!(name.compare("birthday_date")))
		this->_birthday_date = cmd;
	else if (!(name.compare("favorite_meal")))
		this->_favorite_meal = cmd;
	else if (!(name.compare("underwear_color")))
		this->_underwear_color = cmd;
	else if (!(name.compare("darkest_secret")))
		this->_darkest_secret = cmd;
}

void Contact::Insert(std::string name) {
	if (!(name.compare("first_name")))
		std::cout << "First Name: ";
	else if (!(name.compare("last_name")))
		std::cout << "Last Name: ";
	else if (!(name.compare("nickname")))
		std::cout << "Nickname: ";
	else if (!(name.compare("login")))
		std::cout << "Login: ";
	else if (!(name.compare("postal_address")))
		std::cout << "Postal Address: ";
	else if (!(name.compare("email_address")))
		std::cout << "Email Address: ";
	else if (!(name.compare("phone_number")))
		std::cout << "Phone Number: ";
	else if (!(name.compare("birthday_date")))
		std::cout << "Birthday Date: ";
	else if (!(name.compare("favorite_meal")))
		std::cout << "Favorite Meal: ";
	else if (!(name.compare("underwear_color")))
		std::cout << "Underwear Color: ";
	else if (!(name.compare("darkest_secret")))
		std::cout << "Darkest Secret: ";
	Query(name);
}

void Contact::Print(std::string str) {
	size_t i;

	i = 0;
	while (i < 9) {
		if (i < str.length())
			std::cout << str[i];
		else
			std::cout << " ";
		i++;
	}
	if (str.length() == 10)
		std::cout << str[i];
	else if (str.length() > 10)
		std::cout << ".";
	else
		std::cout << " ";
}

void Contact::Show(int i) {
	std::cout << "|";
	std::cout << i + 1 << "         ";
	std::cout << "|";
	Print(this->_first_name);
	std::cout << "|";
	Print(this->_last_name);
	std::cout << "|";
	Print(this->_nickname);
	std::cout << "|" << std::endl;
}

void Contact::getInfo() {
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal Address: " << this->_postal_address << std::endl;
	std::cout << "Email Address: " << this->_email_address << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Birthday Date: " << this->_birthday_date << std::endl;
	std::cout << "Favorite Meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear Color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}