/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:15:17 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/13 08:48:15 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
:
	ClapTrap(),
	FragTrap(),
	NinjaTrap()
{
	srand(time(NULL));
	this->setHitPoints(FragTrap::getHitPoints());
	this->setMaxHitPoints(NinjaTrap::getMaxHitPoints());
	this->setEnergyPoints(NinjaTrap::getEnergyPoints());
	this->setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
	this->setLevel(1);
	this->setName("");
	this->setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
	this->setRangedAttackDamage(FragTrap::getRangedAttackDamage());
	this->setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	return;
}

SuperTrap::SuperTrap(std::string const name)
:
	ClapTrap(0, 0, 0, 0, 0, name, 0, 0, 0),
	FragTrap(name),
	NinjaTrap(name)
{
	srand(time(NULL));
	this->setHitPoints(FragTrap::getHitPoints());
	this->setMaxHitPoints(NinjaTrap::getMaxHitPoints());
	this->setEnergyPoints(NinjaTrap::getEnergyPoints());
	this->setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
	this->setLevel(1);
	this->setName(name);
	this->setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
	this->setRangedAttackDamage(FragTrap::getRangedAttackDamage());
	this->setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	return;
}

SuperTrap::~SuperTrap(void) {}

SuperTrap & SuperTrap::operator=(SuperTrap const & src) {
	this->setHitPoints(src.getHitPoints());
	this->setMaxHitPoints(src.getMaxHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setMaxEnergyPoints(src.getMaxEnergyPoints());
	this->setLevel(src.getLevel());
	this->setName(src.getName());
	this->setMeleeAttackDamage(src.getMeleeAttackDamage());
	this->setRangedAttackDamage(src.getRangedAttackDamage());
	this->setArmorDamageReduction(src.getArmorDamageReduction());
	return (*this);
}