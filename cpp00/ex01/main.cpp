/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:47:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/13 10:47:39 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

int		command(void) {
	std::string cmd;

	std::cout << "phonebook> ";
	std::getline(std::cin, cmd);
	if (!cmd.compare("EXIT"))
		exit(0);
	else {
		if (!cmd.compare("ADD"))
			return (1);
		if (!cmd.compare("SEARCH"))
			return (2);
	}
	std::cout << "Command not valid." << std::endl;
	return (0);
}

int		main(int argc, char **argv) {
	Annuaire 	a;
	int			i;

	while (true) {
		if ((i = command())) {
			if (i == 1)
				a.newContact();
			if (i == 2)
				a.search();
		}
	}
	return (0);
}