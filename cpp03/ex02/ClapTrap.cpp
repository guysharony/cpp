/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 09:29:48 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 10:44:49 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
:
	_hitPoints(0),
	_maxHitPoints(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(1),
	_name("Default"),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0)
{
	srand(time(NULL));
	std::cout << "[Creation d'un ClapTrap est en cours]" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string const name)
:
	_hitPoints(0),
	_maxHitPoints(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(1),
	_name(name),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0)
{
	srand(time(NULL));
	std::cout << "[Creation d'un ClapTrap de nom <" << this->_name << "> est en cours]" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	srand(time(NULL));
	*this = src;
	std::cout << "[Lancement du ClapTrap <" << this->_name << "> est en cours]" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void) {
	if (this->_hitPoints)
		std::cout << "[Le ClapTrap <" << this->_name << "> à réussi sa mission]" << std::endl;
	else
		std::cout << "[Le ClapTrap <" << this->_name << "> à échoué sa mission]" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	this->_hitPoints = src._hitPoints;
	this->_maxHitPoints = src._maxHitPoints;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	return (*this);
}

unsigned int ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

unsigned int ClapTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

unsigned int ClapTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}

unsigned int ClapTrap::getLevel(void) const {
	return (this->_level);
}

std::string ClapTrap::getName(void) const {
	return (this->_name);
}

unsigned int ClapTrap::getMeleeAttackDamage(void) const {
	return (this->_meleeAttackDamage);
}

unsigned int ClapTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}

unsigned int ClapTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attaque " << target << " à distance, causant " << this->getRangedAttackDamage() << " points de dégâts !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attaque " << target << " en mêlée, causant " << this->getMeleeAttackDamage() << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int tmp;

	tmp = amount - this->getArmorDamageReduction();
	if (tmp >= this->getHitPoints()) {
		this->_hitPoints = 0;
		std::cout << "FR4G-TP " << this->getName() << " a était attaqué, il est à present mort !" << std::endl;
	} else {
		this->_hitPoints = this->getHitPoints() - tmp;
		std::cout << "FR4G-TP " << this->getName() << " a était attaqué, prennant " << amount << " points de dégâts !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	unsigned int tmp;

	tmp = amount + this->getHitPoints();
	if (tmp > this->getMaxHitPoints()) {
		this->_hitPoints = this->getMaxHitPoints();
	} else {
		this->_hitPoints = tmp;
	}
	std::cout << "FR4G-TP " << this->getName() << " vient d'être sauvé et a " << this->getHitPoints() << " points de vie !" << std::endl;
}