/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:47:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/15 11:26:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

Annuaire::Annuaire() {
	total = 0;
	return;
}

Annuaire::~Annuaire() {}

void	Annuaire::newContact() {
	if (total < 8) {
		c[total].Insert("first_name");
		c[total].Insert("last_name");
		c[total].Insert("nickname");
		c[total].Insert("login");
		c[total].Insert("postal_address");
		c[total].Insert("email_address");
		c[total].Insert("phone_number");
		c[total].Insert("birthday_date");
		c[total].Insert("favorite_meal");
		c[total].Insert("underwear_color");
		c[total].Insert("darkest_secret");
		total++;
	} else {
		std::cout << "Your phonebook is full!" << std::endl;
	}
}

void	Annuaire::showContact() {
	std::string cmd;
	int			index;

	std::cout << "Index: ";
	std::getline(std::cin, cmd);
	index = atoi(cmd.c_str());
	if (index > 0 && index <= total && cmd.length() == 1) {
		c[index - 1].getInfo();
	} else {
		std::cout << "Index not valid." << std::endl;
	}
}

void	Annuaire::search() {
	int i;

	i = _sHeader();
	while (i < total) {
		c[i].Show(i);
		i++;
	}
	_sFooter();
	showContact();
}

int		Annuaire::_sHeader() {
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	return (0);
}

void	Annuaire::_sFooter() {
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}