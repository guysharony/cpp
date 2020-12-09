/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:25:06 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 14:48:32 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
:
	_indx(0)
{
	this->_initAMateria();
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return;
}

MateriaSource::~MateriaSource()
{
	if (this->_inv[0])
		this->_clearAMateria();
	return;
}

MateriaSource 		&MateriaSource::operator=(MateriaSource const & src)
{
	if (this->_inv[0])
		this->_clearAMateria();
	if (src._inv[0]) { 
		this->_cloneAMateria(src);
		this->_indx = src._indx;
	}
	return (*this);
}

void 				MateriaSource::learnMateria(AMateria* m)
{
	if (this->_indx < 4)
		this->_addAMateria(m);
	return;
}

AMateria* 			MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_indx; i++)
		if (this->_inv[i]->getType() == type)
			return (this->_inv[i]->clone());
	return (0);
}

void				MateriaSource::_initAMateria(void)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	return;
}

void				MateriaSource::_addAMateria(AMateria* m)
{
	if (m) {
		this->_inv[this->_indx] = m;
		this->_indx++;
	}
	return;
}

void				MateriaSource::_clearAMateria(void)
{
	for (int i = 0; i < this->_indx; i++)
		delete this->_inv[i];
	return;
}

void				MateriaSource::_cloneAMateria(MateriaSource const & src)
{
	for (int i = 0; i < src._indx; i++)
		this->_inv[i] = src._inv[i]->clone();
}

int					MateriaSource::_isAMateria(int n)
{
	if (n >= 0 && n < this->_indx && this->_inv[n])
		return (1);
	return (0);
}