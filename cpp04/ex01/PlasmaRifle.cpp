/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:39:47 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 10:59:33 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
:
	AWeapon("Plasma Rifle", 21, 5)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
:
	AWeapon(src)
{
	return;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

PlasmaRifle & 	PlasmaRifle::operator=(PlasmaRifle const & src)
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apcost = src._apcost;
	return (*this);
}

void 			PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}