/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:09:09 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 11:23:40 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
:
	ClapTrap()
{
	srand(time(NULL));
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NI4J-TP " << this->getName() << " est en préparation..." << std::endl;
	std::cout << "NI4J-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string const name)
:
	ClapTrap(name)
{
	srand(time(NULL));
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NI4J-TP " << this->getName() << " va être déployé !" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	std::cout << "Lancement de NI4J-TP " << this->getName() << " !" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	if (this->getHitPoints())
		std::cout << "Félicitation NI4J-TP " << this->getName() << ", vous avez survécu !" << std::endl;
	else
		std::cout << "NI4J-TP " << this->getName() << ", je vous croyez meilleur ..." << std::endl;
	return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src) {
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

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	std::cout << "NI4J-TP " << this->getName() << " attaque " << target.getName() << " avec une chaussure !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target) {
	std::cout << "NI4J-TP " << this->getName() << " attaque " << target.getName() << " avec une claquette !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {
	std::cout << "NI4J-TP " << this->getName() << " attaque " << target.getName() << " avec une baguette !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	std::cout << "NI4J-TP " << this->getName() << " attaque " << target.getName() << " avec une attaque inconnue !" << std::endl;
}

unsigned int NinjaTrap::getEnergyPoints(void) const {
	return (120);
}

unsigned int NinjaTrap::getMaxEnergyPoints(void) const {
	return (120);
}

unsigned int NinjaTrap::getMeleeAttackDamage(void) const {
	return (60);
}