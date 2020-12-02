/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:05:27 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 10:40:51 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {}

Peon::Peon(std::string const & name)
:
	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const & src)
:
	Victim(src)
{
	*this = src;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon & Peon::operator=(Peon const & src)
{
	this->_name = src._name;
	return (*this);
}

std::string Peon::getName(void) const {
	return (this->_name);
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " was just polymorphed into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Peon const &rhs) {
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}