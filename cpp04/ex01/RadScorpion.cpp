/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:55:49 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 11:26:46 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) 
:
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::RadScorpion(RadScorpion const &src) 
:
    Enemy(src)
{
    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
    return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const & src) {
    this->_hp = src.getHP();
    this->_type = src.getType();
    return (*this);
}

void    RadScorpion::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}