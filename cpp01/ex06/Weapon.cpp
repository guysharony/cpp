/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:48 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 15:06:19 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}

const std::string &Weapon::getType(void) const {
	return (this->type);
}

void Weapon::setType(std::string const &type) {
	this->type = type;
}