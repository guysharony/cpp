/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 10:44:07 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
:
	ClapTrap()
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FR4G-TP " << this->getName() << " est en cours de préparation..." << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const name)
:
	ClapTrap(name)
{
	srand(time(NULL));
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FR4G-TP " << this->getName() << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
:
	ClapTrap(src)
{
	srand(time(NULL));
	std::cout << "Déploiement de FR4G-TP " << this->getName() << " !" << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	if (this->getHitPoints())
		std::cout << "Félicitation FR4G-TP " << this->getName() << ", vous restez vivant jusqu'à la fin de votre mission !" << std::endl;
	else
		std::cout << "FR4G-TP " << this->getName() << ", vous avez échoué votre mission..." << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->getEnergyPoints() < 25) {
		std::cout << "FR4G-TP " << this->getName() << ", vous n'avez pas assez d'énérgie pour cette attaque !" << std::endl;
	} else {
		std::string attack[5] = {
			"un épée saucisse",
			"le moonwalk à l'envers",
			"l'hypnodance",
			"la rondade de la mort",
			"un falafel des enfers"};
		std::cout << "FR4G-TP " << this->getName() << " attaque " << target << " avec " << attack[rand() % 5] << ", causant " << 25 << " points de dégâts !" << std::endl;
		this->_energyPoints = this->getEnergyPoints() - 25;
	}
	return;
}