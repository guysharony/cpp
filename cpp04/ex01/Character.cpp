/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 07:21:34 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/10 08:17:44 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return;
}

Character::Character(std::string const & name) 
:
	_name(name),
	_apcost(40),
	_aweapon()
{
	return;
}

Character::Character(Character const & src)
{
	*this = src;
	return;
}

Character::~Character()
{
    return;
}

Character 		&Character::operator=(Character const & src)
{
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_aweapon = src._aweapon;
	return (*this);
}

void 			Character::recoverAP()
{
	this->_apcost = (this->_apcost + 10 > 40) ? 40 : this->_apcost + 10;
}

void 			Character::equip(AWeapon *aweapon)
{
	this->_aweapon = aweapon;
}

void 			Character::attack(Enemy *enemy)
{
	if (this->_aweapon && enemy)
	{
		if (this->_apcost < this->_aweapon->getAPCost())
			std::cout << "[At least " << _aweapon->getAPCost() << " action points is required to attack]" << std::endl;
		else {
			this->_apcost -= this->_aweapon->getAPCost();
			std::cout << this->_name << " attaque " << enemy->getType() << " with a " << this->_aweapon->getName() << std::endl;
			this->_aweapon->attack();
			enemy->takeDamage(this->_aweapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
	return;
}

std::string const	Character::getName() const
{
	return (this->_name);
}

int					Character::getAPCost() const
{
	return (this->_apcost);
}

AWeapon				*Character::getAWeapon() const
{
	return (this->_aweapon);
}

std::ostream 		&operator<<(std::ostream &a, Character const &b)
{
	a << b.getName() << " has " << b.getAPCost() << " AP and ";
	(b.getAWeapon()) ? a << "carries a " << b.getAWeapon()->getName() : a << "is unarmed";
	a << std::endl;
	return (a);
}
