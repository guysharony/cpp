/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:47 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 11:24:35 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
:
	AMateria("cure")
{
	return;
}

Cure::Cure(Cure const & src)
:
	AMateria(src)
{
	return;
}

Cure & Cure::operator=(Cure const & src)
{
	this->setXP(src.getXP());
	this->setType(src.getType());
	return (*this);
}

Cure::~Cure()
{
	return;
}

AMateria* 		Cure::clone() const
{
	return (new Cure(*this));
}

void 			Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}