/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:05:27 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:23:31 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
:
	_name()
{
	return;
}

Victim::Victim(std::string const & name)
:
	_name(name)
{
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
	return;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	return;
}

Victim::~Victim(void)
{
	std::cout << "The victim " << this->_name << " died for no apparent reasons!" << std::endl;
	return;
}

Victim & 		Victim::operator=(Victim const & src)
{
	this->_name = src._name;
	return (*this);
}

std::string 	Victim::getName(void) const {
	return (this->_name);
}

void 			Victim::getPolymorphed(void) const {
	std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &o, Victim const &rhs) {
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}