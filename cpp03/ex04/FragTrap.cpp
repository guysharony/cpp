/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/11 08:56:13 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
:
	ClapTrap(100, 100, 100, 100, 1, "", 30, 20, 5)
{
	srand(time(NULL));
	std::cout << "FR4G-TP " << this->getName() << " est en cours de préparation..." << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " est prêt à être déployé !" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const name)
:
	ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	srand(time(NULL));
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
		this->setEnergyPoints(this->getEnergyPoints() - 25);
	}
	return;
}