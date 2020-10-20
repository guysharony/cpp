/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 15:21:03 by gsharony         ###   ########.fr       */
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

Zombie 	*ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, this->_type));
}

