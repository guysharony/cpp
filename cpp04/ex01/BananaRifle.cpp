/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BananaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:34:26 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:36:57 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BananaRifle.hpp"

BananaRifle::BananaRifle(void)
:
	AWeapon("Banana Rifle", 8, 19)
{
	return;
}

BananaRifle::BananaRifle(BananaRifle const & src)
:
	AWeapon(src)
{
	return;
}

BananaRifle::~BananaRifle()
{
	return;
}

BananaRifle 	&BananaRifle::operator=(BananaRifle const & src)
{
	AWeapon::operator=(src);
	return (*this);
}

void 			BananaRifle::attack(void) const {
	std::cout << "* Floup Floup Floup *" << std::endl;
	return;
}