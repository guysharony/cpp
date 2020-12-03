/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:34 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 11:15:07 by gsharony         ###   ########.fr       */
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

AMateria & AMateria::operator=(AMateria const & src)
{
	this->_xp = src.getXP();
	this->_type = src.getType();
	return (*this);
}

AMateria::~AMateria()
{
	return;
}

std::string 		const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int 		AMateria::getXP() const
{
	return (this->_xp);
}

void				AMateria::setType(std::string type)
{
	this->_type = type;
	return;
}

void				AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
	return;
}

void 				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
	return;
}