/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:39:47 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:37:10 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
:
	AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
:
	AWeapon(src)
{
	return;
}

PlasmaRifle::~PlasmaRifle()
{
	return;
}

PlasmaRifle 	&PlasmaRifle::operator=(PlasmaRifle const & src)
{
	AWeapon::operator=(src);
	return (*this);
}

void 			PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}