/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:02:42 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/19 09:45:04 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

Annuaire::Annuaire(void) : _total(0) {}

Annuaire::~Annuaire(void) {}

bool	Annuaire::add(void) {
	if (this->_total >= 8) {
		std::cout << "Phonebook is full!" << std::endl;
		return (false);
	}
	this->_insert();
	this->_total++;
	return (true);
}

bool	Annuaire::search(void) const {
	std::string cmd;
	int			index;
	
	this->_tHeader();
	this->_tBody();
	this->_tFooter();
	std::cout << "Index: ";
	std::getline(std::cin, cmd);
	index = atoi(cmd.c_str());
	if (index > 0 && index <= this->_total && cmd.length() == 1) {
		this->_c[index - 1].getAll();
	} else {
		std::cout << "Index not valid." << std::endl;
	}
	return (true);
}

void	Annuaire::_insert(void) {
	this->_c[this->_total].setFirstName();
	this->_c[this->_total].setLastName();
	this->_c[this->_total].setNickname();
	this->_c[this->_total].setLogin();
	this->_c[this->_total].setPostalAddress();
	this->_c[this->_total].setEmailAddress();
	this->_c[this->_total].setPhoneNumber();
	this->_c[this->_total].setBirthdayDate();
	this->_c[this->_total].setFavoriteMeal();
	this->_c[this->_total].setUnderwearColor();
	this->_c[this->_total].setDarkestSecret();
}

void	Annuaire::_print(std::string str) const {
	if (str.length() > 10) {
		str = str.insert(9, ".");
		str = str.substr(0, 10);
	} else {
		for(size_t i = str.length(); i < 10; i++) {
			str = str.insert(i, " ");
		}
	}
	std::cout << str;
}

void	Annuaire::_tHeader(void) const {
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	Annuaire::_tBody(void) const {
	size_t	n;

	n = 0;
	while (n < this->_total) {
		std::cout << "|" << n + 1 << "         |";
		this->_print(this->_c[n].getFirstName());
		std::cout << "|";
		this->_print(this->_c[n].getLastName());
		std::cout << "|";
		this->_print(this->_c[n].getNickname());
		std::cout << "|" << std::endl;
		n++;
	}
}

void	Annuaire::_tFooter(void) const {
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}