/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:59:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 11:23:01 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
:
	ClapTrap()
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SC4V-TP " << this->getName() << " est en préparation..." << std::endl;
	std::cout << "SC4V-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const name)
:
	ClapTrap(name)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SC4V-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	std::cout << "Lancement de SC4V-TP " << this->getName() << " !" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	if (this->getHitPoints())
		std::cout << "Félicitation SC4V-TP " << this->getName() << ", vous avez survécu !" << std::endl;
	else
		std::cout << "SC4V-TP " << this->getName() << ", je vous croyez meilleur ..." << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
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

void ScavTrap::challengeNewcomer(void) {
	if (this->getEnergyPoints() < 25) {
		std::cout << "SC4V-TP " << this->getName() << ", vous n'avez pas assez d'énérgie pour un challenge !" << std::endl;
	} else {
		std::string challenge[5] = {
			"je te défie de vincre ton ennemi en utilisant qu'une seule attaque",
			"je te défie de rester vivant jusqu'à la fin de ta mission te faire réparé",
			"je te défie d'arriver à notre point de rendez-vous sans avoir à attaquer tes ennemis",
			"je te défie de n'utiliser que l'attaque que tu aimes le moins durant toute la mission",
			"je te défie d'utiliser chaque attaque au moins une seule fois"};
		std::cout << "SC4V-TP " << this->getName() << ", " << challenge[rand() % 5] << " !" << std::endl;
		this->_energyPoints = this->getEnergyPoints() - 25;
	}
	return;
}