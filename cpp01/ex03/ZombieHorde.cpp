/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:06:52 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 10:24:56 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	std::string	str;
	std::string	tmp;
	
	this->_total = n;
	this->_zombie = new Zombie[n];
	tmp = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	for (int i = 0; i < n; i++) {
		for(int len = 0; len < 5; len++) {
			str += tmp[rand() % 52];
		}
		this->_zombie[i].setName(str);
		this->_zombie[i].setType("Random");
		str = "";
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_zombie;
}

void	ZombieHorde::announce(void) const {
	for(int i = 0; i < this->_total; i++) {
		this->_zombie[i].announce();
	}
}