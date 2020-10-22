/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:06:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 10:18:24 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string const &name, std::string const &type): _name(name), _type(type) {}

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