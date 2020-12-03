/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:41 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 11:41:17 by gsharony         ###   ########.fr       */
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
	return;
}

std::string 			const & Character::getName() const
{
	return (this->_name);
}

void					Character::_initAMateria(void)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}