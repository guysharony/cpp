/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/21 10:19:15 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	this->_type = "";
}

ZombieEvent::~ZombieEvent(void) {}

void 	ZombieEvent::setZombieType(std::string const &type) {
	this->_type = type;
	return;
}

Zombie 	*ZombieEvent::newZombie(std::string const &name) {
	return (new Zombie(name, this->_type));
}

Zombie 	*ZombieEvent::randomChump(void) {
	std::string	str;
	std::string	tmp;
	Zombie		*z;
	
	tmp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int len = 0; len < 10; len++) {
		str += tmp[rand() % 52];
	}
	z = this->newZombie(str);
	return (z);
}