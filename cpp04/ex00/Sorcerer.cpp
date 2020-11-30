/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:43:36 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/30 09:13:28 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
:
	_name(),
	_title()
{}

Sorcerer::Sorcerer(std::string const & name, std::string const & title)
:
	_name(name),
	_title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src)
{
	this->_name = src._name;
	this->_title = src._title;
	return (*this);
}

std::string Sorcerer::getName(void) const {
	return (this->_name);
}

std::string Sorcerer::getTitle(void) const {
	return (this->_title);
}

void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
	return;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", " << "and i like ponies!" << std::endl;
	return (o);
}