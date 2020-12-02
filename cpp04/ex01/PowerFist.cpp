/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:46:42 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 11:24:49 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
:
	AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(PowerFist const & src)
:
	AWeapon(src)
{
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

PowerFist & PowerFist::operator=(PowerFist const & src)
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apcost = src._apcost;
	return (*this);
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
	return;
}