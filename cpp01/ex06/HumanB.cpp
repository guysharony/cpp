/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:41 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 17:19:08 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack(void) const {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}