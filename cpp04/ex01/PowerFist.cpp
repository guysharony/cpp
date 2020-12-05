/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:46:42 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:37:37 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
:
	AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(PowerFist const & src)
:
	AWeapon(src)
{
	return;
}

PowerFist::~PowerFist()
{
	return;
}

PowerFist 	&PowerFist::operator=(PowerFist const & src)
{
	AWeapon::operator=(src);
	return (*this);
}

void 		PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
	return;
}