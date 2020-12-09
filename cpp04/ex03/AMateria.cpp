/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:34 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 08:35:03 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return;
}

AMateria::AMateria(std::string const & type)
:
	_type(type),
	_xp(0)
{
	return;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return;
}

AMateria::~AMateria()
{
	return;
}

AMateria 			&AMateria::operator=(AMateria const & src)
{
	this->_xp = src.getXP();
	return (*this);
}

const std::string 	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int 		AMateria::getXP() const
{
	return (this->_xp);
}

void 				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
	return;
}