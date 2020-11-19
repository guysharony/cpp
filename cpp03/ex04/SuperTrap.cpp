/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:15:17 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/19 14:01:22 by gsharony         ###   ########.fr       */
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
	this->_hitPoints = FragTrap::getHitPoints();
	this->_maxHitPoints = FragTrap::getMaxHitPoints();
	this->_energyPoints = NinjaTrap::getEnergyPoints();
	this->_maxEnergyPoints = NinjaTrap::getMaxEnergyPoints();
	this->_meleeAttackDamage = NinjaTrap::getMeleeAttackDamage();
	this->_rangedAttackDamage = FragTrap::getRangedAttackDamage();
	this->_armorDamageReduction = FragTrap::getArmorDamageReduction();
	return;
}

SuperTrap::SuperTrap(std::string const name)
:
	ClapTrap(name),
	FragTrap(name),
	NinjaTrap(name)
{
	srand(time(NULL));
	this->_hitPoints = FragTrap::getHitPoints();
	this->_maxHitPoints = FragTrap::getMaxHitPoints();
	this->_energyPoints = NinjaTrap::getEnergyPoints();
	this->_maxEnergyPoints = NinjaTrap::getMaxEnergyPoints();
	this->_meleeAttackDamage = NinjaTrap::getMeleeAttackDamage();
	this->_rangedAttackDamage = FragTrap::getRangedAttackDamage();
	this->_armorDamageReduction = FragTrap::getArmorDamageReduction();
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
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = src.getMaxHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = src.getMaxEnergyPoints();
	this->_level = src.getLevel();
	this->_name = src.getName();
	this->_meleeAttackDamage = src.getMeleeAttackDamage();
	this->_rangedAttackDamage = src.getRangedAttackDamage();
	this->_armorDamageReduction = src.getArmorDamageReduction();
	return (*this);
}

void SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}