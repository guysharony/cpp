/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:59:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/11 08:56:20 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
:
	ClapTrap(100, 100, 50, 50, 1, "", 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " est en préparation..." << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const name)
:
	ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	std::cout << "Lancement de FR4G-TP " << this->getName() << " !" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	if (this->getHitPoints())
		std::cout << "Félicitation FR4G-TP " << this->getName() << ", vous avez survécu !" << std::endl;
	else
		std::cout << "FR4G-TP " << this->getName() << ", je vous croyez meilleur ..." << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
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

void ScavTrap::challengeNewcomer(void) {
	if (this->getEnergyPoints() < 25) {
		std::cout << "FR4G-TP " << this->getName() << ", vous n'avez pas assez d'énérgie pour un challenge !" << std::endl;
	} else {
		std::string challenge[5] = {
			"je te défie de vincre ton ennemi en utilisant qu'une seule attaque",
			"je te défie de rester vivant jusqu'à la fin de ta mission te faire réparé",
			"je te défie d'arriver à notre point de rendez-vous sans avoir à attaquer tes ennemis",
			"je te défie de n'utiliser que l'attaque que tu aimes le moins durant toute la mission",
			"je te défie d'utiliser chaque attaque au moins une seule fois"};
		std::cout << "FR4G-TP " << this->getName() << ", " << challenge[rand() % 5] << " !" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 25);
	}
	return;
}