/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:53 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:49:21 by gsharony         ###   ########.fr       */
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
	AMateria::operator=(src);
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