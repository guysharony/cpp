/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:14:06 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/19 10:04:30 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::getAll(void) const {
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Postal Address: " << this->getPostalAddress() << std::endl;
	std::cout << "Email Address: " << this->getEmailAddress() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Birthday Date: " << this->getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal: " << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}

void	Contact::setFirstName(void) {
	this->_first_name = this->_input("First Name");
	while (this->_first_name.length() < 1) {
		std::cout << "First Name is too short!" << std::endl;
		this->_first_name = this->_input("First Name");
	}
	return;
}

void	Contact::setLastName(void) {
	this->_last_name = this->_input("Last Name");
	while (this->_last_name.length() < 1) {
		std::cout << "Last Name is too short!" << std::endl;
		this->_last_name = this->_input("Last Name");
	}
	return;
}

void	Contact::setNickname(void) {
	this->_nickname = this->_input("Nickname");
	while (this->_nickname.length() < 1) {
		std::cout << "Nickname is too short!" << std::endl;
		this->_nickname = this->_input("Nickname");
	}
	return;
}

void	Contact::setLogin(void) {
	this->_login = this->_input("Login");
	while (this->_login.length() < 1) {
		std::cout << "Login is too short!" << std::endl;
		this->_login = this->_input("Login");
	}
	return;
}

void	Contact::setPostalAddress(void) {
	this->_postal_address = this->_input("Postal Address");
	while (this->_postal_address.length() < 1) {
		std::cout << "Postal address is too short!" << std::endl;
		this->_postal_address = this->_input("Postal Address");
	}
	return;
}

void	Contact::setEmailAddress(void) {
	this->_email_address = this->_input("Email Address");
	while (this->_email_address.length() < 1) {
		std::cout << "Email address is too short!" << std::endl;
		this->_email_address = this->_input("Email Address");
	}
	return;
}

void	Contact::setPhoneNumber(void) {
	this->_phone_number = this->_input("Phone Number");
	while (this->_phone_number.length() < 1) {
		std::cout << "Phone number is too short!" << std::endl;
		this->_phone_number = this->_input("Phone Number");
	}
	return;
}

void	Contact::setBirthdayDate(void) {
	this->_birthday_date = this->_input("Birthday Date");
	while (this->_birthday_date.length() < 1) {
		std::cout << "Birthday date is too short!" << std::endl;
		this->_birthday_date = this->_input("Birthday Date");
	}
	return;
}

void	Contact::setFavoriteMeal(void) {
	this->_favorite_meal = this->_input("Favorite Meal");
	while (this->_favorite_meal.length() < 1) {
		std::cout << "Favorite meal is too short!" << std::endl;
		this->_favorite_meal = this->_input("Favorite Meal");
	}
	return;
}

void	Contact::setUnderwearColor(void) {
	this->_underwear_color = this->_input("Underwear Color");
	while (this->_underwear_color.length() < 1) {
		std::cout << "Underwear color is too short!" << std::endl;
		this->_underwear_color = this->_input("Underwear Color");
	}
	return;
}

void	Contact::setDarkestSecret(void) {
	this->_darkest_secret = this->_input("Darkest Secret");
	while (this->_darkest_secret.length() < 1) {
		std::cout << "Darkest secret is too short!" << std::endl;
		this->_darkest_secret = this->_input("Darkest Secret");
	}
	return;
}

std::string	Contact::getFirstName(void) const {
	return this->_first_name;
}

std::string	Contact::getLastName(void) const {
	return this->_last_name;
}

std::string	Contact::getNickname(void) const {
	return this->_nickname;
}

std::string	Contact::getLogin(void) const {
	return this->_login;
}

std::string	Contact::getPostalAddress(void) const {
	return this->_postal_address;
}

std::string	Contact::getEmailAddress(void) const {
	return this->_email_address;
}

std::string	Contact::getPhoneNumber(void) const {
	return this->_phone_number;
}

std::string	Contact::getBirthdayDate(void) const {
	return this->_birthday_date;
}

std::string	Contact::getFavoriteMeal(void) const {
	return this->_favorite_meal;
}

std::string	Contact::getUnderwearColor(void) const {
	return this->_underwear_color;
}

std::string	Contact::getDarkestSecret(void) const {
	return this->_darkest_secret;
}

std::string	Contact::_input(std::string str) const {
	std::string tmp;

	std::cout << str << ": ";
	std::getline(std::cin, tmp);
	return (tmp);
}