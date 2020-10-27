/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:18 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/27 08:57:49 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {}

Zombie::~Zombie(void) {}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}

std::string	Zombie::getName(void) const {
	return (this->_name);
}

std::string	Zombie::getType(void) const {
	return (this->_type);
}

void	Zombie::advert(void) const {
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::announce(void) const {
	this->advert();
}