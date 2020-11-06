/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:15:17 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/06 11:34:38 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
:
	ClapTrap(100, 100, 120, 120, 1, "Default", 60, 20, 0),
	NinjaTrap("Default"),
	FragTrap("Default")
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " est en préparation..." << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string const name)
:
	ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 0),
	NinjaTrap(name),
	FragTrap(name)
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	std::cout << "Lancement de FR4G-TP " << this->getName() << " !" << std::endl;
	return;
}

SuperTrap::~SuperTrap(void) {
	if (this->getHitPoints())
		std::cout << "Félicitation FR4G-TP " << this->getName() << ", vous avez survécu !" << std::endl;
	else
		std::cout << "FR4G-TP " << this->getName() << ", je vous croyez meilleur ..." << std::endl;
	return;
}

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