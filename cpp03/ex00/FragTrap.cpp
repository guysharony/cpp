/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/03 09:51:44 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
:
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_level(1),
	_name("Hyperion"),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "FR4G-TP " << this->_name << " est en cours d'initialization..." << std::endl;
	std::cout << "FR4G-TP " << this->_name << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
:
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_level(1),
	_name(name),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "FR4G-TP " << this->_name << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "Déploiement de FR4G-TP " << this->_name << " !" << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	if (this->_hitPoints)
		std::cout << "Félicitation FR4G-TP " << this->_name << ", vous restez vivant jusqu'à la fin de votre mission !" << std::endl;
	else
		std::cout << "FR4G-TP " << this->_name << ", vous avez échoué votre mission..." << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " à distance, causant " << this->_rangedAttackDamage << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " en mêlée, causant " << this->_meleeAttackDamage << " points de dégâts !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	unsigned int tmp;

	tmp = amount - this->_armorDamageReduction;
	if (tmp < 0) {
		std::cout << "FR4G-TP " << this->_name << " a était attaqué, il est à present mort !" << std::endl;
		this->_hitPoints = 0;
	} else {
		std::cout << "FR4G-TP " << this->_name << " a était attaqué, prennant " << amount << " points de dégâts !" << std::endl;
		this->_hitPoints = tmp;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	unsigned int tmp;

	tmp = amount;
	if (tmp > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "FR4G-TP " << this->_name << " vient d'être sauvé et a " << this->_hitPoints << " !" << std::endl;
}