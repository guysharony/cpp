/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:09:09 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/05 16:04:41 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
:
	ClapTrap(60, 60, 120, 120, 1, "Default", 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " est en préparation..." << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string const name)
:
	ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	std::cout << "Lancement de FR4G-TP " << this->getName() << " !" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	if (this->getHitPoints())
		std::cout << "Félicitation FR4G-TP " << this->getName() << ", vous avez survécu !" << std::endl;
	else
		std::cout << "FR4G-TP " << this->getName() << ", je vous croyez meilleur ..." << std::endl;
	return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src) {
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

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attaque " << target.getName() << " avec une chaussure !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attaque " << target.getName() << " avec une claquette !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attaque " << target.getName() << " avec une baguette !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attaque " << target.getName() << " avec une attaque inconnue !" << std::endl;
}