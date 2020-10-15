/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:47:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/15 08:25:53 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

Annuaire::Annuaire() {
	total = 0;
}

Annuaire::~Annuaire() {}

void	Annuaire::newContact() {
	if (total < 8) {
		db[total].Insert("first_name");
		db[total].Insert("last_name");
		db[total].Insert("nickname");
		db[total].Insert("login");
		db[total].Insert("postal_address");
		db[total].Insert("email_address");
		db[total].Insert("phone_number");
		db[total].Insert("birthday_date");
		db[total].Insert("favorite_meal");
		db[total].Insert("underwear_color");
		db[total].Insert("darkest_secret");
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
		db[index - 1].getInfo();
	} else {
		std::cout << "Index not valid." << std::endl;
	}
}

void	Annuaire::search() {
	int i;

	i = _sHeader();
	while (i < total) {
		db[i].Show(i);
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