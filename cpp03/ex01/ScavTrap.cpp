/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:59:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 11:20:21 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = "Default";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SC4V-TP " << this->_name << " est en préparation..." << std::endl;
	std::cout << "SC4V-TP " << this->_name << " va être déployé !" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const name)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SC4V-TP " << this->_name << " va être déployé !" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	srand(time(NULL));
	*this = src;
	std::cout << "Lancement de SC4V-TP " << this->_name << " !" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	if (this->_hitPoints)
		std::cout << "Félicitation SC4V-TP " << this->_name << ", vous avez survécu !" << std::endl;
	else
		std::cout << "SC4V-TP " << this->_name << ", je vous croyez meilleur ..." << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
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

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << this->_name << " vient d'attaquer " << target << " à distance, provoquant " << this->_rangedAttackDamage << " points de dégâts !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP " << this->_name << " vient d'attaquer " << target << " en mêlée, provoquant " << this->_meleeAttackDamage << " points de dégâts !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	unsigned int tmp;

	tmp = amount - this->_armorDamageReduction;
	if (tmp >= this->_hitPoints) {
		this->_hitPoints = 0;
		std::cout << "SC4V-TP " << this->_name << " est décédé à cause d'une attaque !" << std::endl;
	} else {
		this->_hitPoints -= tmp;
		std::cout << "SC4V-TP " << this->_name << " vient d'être attaqué, perdant " << amount << " points de dégâts !" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	unsigned int tmp;

	tmp = amount + this->_hitPoints;
	if (tmp > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	} else {
		this->_hitPoints = tmp;
	}
	std::cout << "SC4V-TP " << this->_name << " vient d'être réparé, récupérant " << this->_hitPoints << " points de vie !" << std::endl;
}

void ScavTrap::challengeNewcomer(void) {
	if (this->_energyPoints < 25) {
		std::cout << "SC4V-TP " << this->_name << ", vous n'avez pas assez d'énérgie pour un challenge !" << std::endl;
	} else {
		std::string challenge[5] = {
			"je te défie de vincre ton ennemi en utilisant qu'une seule attaque",
			"je te défie de rester vivant jusqu'à la fin de ta mission te faire réparé",
			"je te défie d'arriver à notre point de rendez-vous sans avoir à attaquer tes ennemis",
			"je te défie de n'utiliser que l'attaque que tu aimes le moins durant toute la mission",
			"je te défie d'utiliser chaque attaque au moins une seule fois"};
		std::cout << "SC4V-TP " << this->_name << ", " << challenge[rand() % 5] << " !" << std::endl;
		this->_energyPoints -= 25;
	}
	return;
}