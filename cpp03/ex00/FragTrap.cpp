/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 08:16:42 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = "Default";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FR4G-TP " << this->_name << " est en cours de préparation..." << std::endl;
	std::cout << "FR4G-TP " << this->_name << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const name)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FR4G-TP " << this->_name << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	srand(time(NULL));
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

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " à distance, causant " << this->_rangedAttackDamage << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " en mêlée, causant " << this->_meleeAttackDamage << " points de dégâts !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	unsigned int tmp;

	tmp = amount - this->_armorDamageReduction;
	if (tmp >= this->_hitPoints) {
		this->_hitPoints = 0;
		std::cout << "FR4G-TP " << this->_name << " a était attaqué, il est à present mort !" << std::endl;
	} else {
		this->_hitPoints -= tmp;
		std::cout << "FR4G-TP " << this->_name << " a était attaqué, prennant " << amount << " points de dégâts !" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	unsigned int tmp;

	tmp = amount + this->_hitPoints;
	if (tmp > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	} else {
		this->_hitPoints = tmp;
	}
	std::cout << "FR4G-TP " << this->_name << " vient d'être sauvé et a " << this->_hitPoints << " points de vie !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25) {
		std::cout << "FR4G-TP " << this->_name << ", vous n'avez pas assez d'énérgie pour cette attaque !" << std::endl;
	} else {
		std::string attack[5] = {
			"un épée saucisse",
			"le moonwalk à l'envers",
			"l'hypnodance",
			"la rondade de la mort",
			"un falafel des enfers"};
		std::cout << "FR4G-TP " << this->_name << " attaque " << target << " avec " << attack[rand() % 5] << ", causant " << 25 << " points de dégâts !" << std::endl;
		this->_energyPoints = this->_energyPoints - 25;
	}
	return;
}