/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:37 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/23 10:07:14 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon): name(name), weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}