/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:00:46 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:04:50 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return;
}

Human::Human(std::string const & name)
:
	Victim(name)
{
	std::cout << "Haaa Haaa." << std::endl;
	return;
}

Human::Human(Human const & src)
:
	Victim(src)
{
	*this = src;
	return;
}

Human::~Human()
{
	std::cout << "Oh nooo!!" << std::endl;
	return;
}

Human & 			Human::operator=(Human const & src)
{
	this->_name = src._name;
	return (*this);
}

std::string 		Human::getName(void) const {
	return (this->_name);
}

void 				Human::getPolymorphed(void) const {
	std::cout << this->_name << " was just polymorphed into a mosquito!" << std::endl;
	return;
}

std::ostream 		&operator<<(std::ostream &o, Human const &rhs) {
	o << "I'm " << rhs.getName() << " and I eating!" << std::endl;
	return (o);
}