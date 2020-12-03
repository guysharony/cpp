/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:11:25 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 09:42:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
    return;
}

Enemy::Enemy(int hp, std::string const & type)
:
    _hp(hp),
    _type(type)
{
    return;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return;
}

Enemy::~Enemy(void)
{
    return;
}

Enemy & Enemy::operator=(Enemy const & src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return (*this);
}

std::string const   Enemy::getType(void) const {
    return (_type);
}

int                 Enemy::getHP(void) const {
    return (_hp);
}

void                Enemy::takeDamage(int damage) {
    if (damage < 0)
        this->_hp = (this->_hp - damage < 0) ? 0 : this->_hp - damage;
}