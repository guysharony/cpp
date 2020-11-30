/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:26:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/30 11:39:20 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:
	_name(name),
	_damage(damage),
	_apcost(apcost)
{
	return;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
	return;
}

AWeapon::~AWeapon(void) {
	return;
}

AWeapon & AWeapon::operator=(AWeapon const & src)
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apcost = src._apcost;
	return (*this);
}

std::string const AWeapon::getName(void) const {
	return (this->_name);
}

int AWeapon::getAPCost(void) const {
	return (this->_apcost);
}

int AWeapon::getDamage(void) const {
	return (this->_damage);
}