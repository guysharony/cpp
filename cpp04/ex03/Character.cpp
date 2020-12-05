/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:41 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:57:20 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return;
}

Character::Character(std::string name)
:
	_name(name),
	_indx(0)
{
	this->_initAMateria();
	return;
}

Character::Character(Character const & src)
{
	*this = src;
	return;
}

Character::~Character()
{
	if (this->_inv[0])
		this->_clearAMateria();
	return;
}

Character 				&Character::operator=(Character const & src)
{
	if (this->_inv[0])
		this->_clearAMateria();
	if (src._inv[0])
		this->_cloneAMateria(src);
	this->_name = src._name;
	this->_indx = src._indx;
	return (*this);
}

std::string 			const &Character::getName() const
{
	return (this->_name);
}

void 					Character::equip(AMateria* m)
{
	if (this->_indx < 4)
		this->_addAMateria(m);
	return;
}

void 					Character::unequip(int idx)
{
	if (this->_isAMateria(idx))
		this->_delAMateria(idx);
	return;
}

void 					Character::use(int idx, ICharacter& target)
{
	if (this->_isAMateria(idx))
		this->_inv[idx]->use(target);
	return;
}

void					Character::_initAMateria(void)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	return;
}

void					Character::_addAMateria(AMateria* m)
{
	if (m) {
		this->_inv[this->_indx] = m;
		this->_indx++;
	}
	return;
}

void					Character::_delAMateria(int n)
{
	this->_indx--;
	for (int i = n; i < 3; i++)
		this->_inv[i] = this->_inv[i + 1];
	this->_inv[3] = NULL;
	return;
}

void					Character::_clearAMateria(void)
{
	for (int i = 0; i < this->_indx; i++)
		delete this->_inv[i];
	return;
}

int						Character::_isAMateria(int n)
{
	if (n >= 0 && n < this->_indx && this->_inv[n])
		return (1);
	return (0);
}

void					Character::_cloneAMateria(Character const & src)
{
	for (int i = 0; i < src._indx; i++)
		this->_inv[i] = src._inv[i]->clone();
	return;
}