/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:48 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 17:17:20 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {}

Weapon::~Weapon(void) {}

const std::string &Weapon::getType(void) const {
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}