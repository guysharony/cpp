/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:53 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 11:22:03 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
:
	AMateria("ice")
{
	return;
}

Ice::Ice(Ice const & src)
:
	AMateria(src)
{
	return;
}

Ice & Ice::operator=(Ice const & src)
{
	this->setXP(src.getXP());
	this->setType(src.getType());
	return (*this);
}

Ice::~Ice()
{
	return;
}

AMateria* 		Ice::clone() const
{
	return (new Ice(*this));
}

void 			Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}