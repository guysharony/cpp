/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:16:03 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:42:43 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
:
	_count(0),
	_unit(NULL)
{
	return;
}

Squad::Squad(Squad const & src)
{
	*this = src;
	return;
}

Squad::~Squad()
{
	this->_delUnits();
	return;
}

Squad				&Squad::operator=(Squad const & src)
{
	this->_delUnits();
	this->_setUnits(src);
	return (*this);
}

void				Squad::_delUnits(void) {
	if (this->_unit) {
		for (int i = 0; i < this->_count; i++) {
			delete _unit[i];
		}
		delete this->_unit;
		this->_unit = NULL;
	}
	return;
}

void				Squad::_setUnits(Squad const & src) {
	this->_count = src.getCount();
	if (src._unit) {
		this->_unit = new ISpaceMarine*[src._count];
		for (int i = 0; i < src._count; i++)
			this->_unit[i] = src.getUnit(i);
	}
	return;
}

int					Squad::_includes(ISpaceMarine *unit) {
	for (int i = 0; i < this->_count; i++) {
		if (this->getUnit(i) == unit)
			return (i);
	}
	return (-1);
}

int					Squad::getCount(void) const {
	return (this->_count);
}

ISpaceMarine*		Squad::getUnit(int unit) const {
	return ((unit < 0 || unit >= this->_count) ? NULL : this->_unit[unit]);
}

int					Squad::push(ISpaceMarine *unit) {
	if (unit == NULL)
		return (0);
	else if (this->_count == 0)
	{
		this->_unit = new ISpaceMarine*[1];
		this->_unit[0] = unit;
		this->_count = 1;
	}
	else
	{
		if (int a = this->_includes(unit) > -1)
			return (a);
		ISpaceMarine	**tmp = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			tmp[i] = this->_unit[i];
		delete this->_unit;
		tmp[this->_count] = unit;
		this->_unit = tmp;
		this->_count++;
	}
	return (this->_count);
}