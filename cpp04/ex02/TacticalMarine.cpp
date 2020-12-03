/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:51 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 10:01:25 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	*this = src;
	return;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & src)
{
	(void)src;
	return (*this);
}

ISpaceMarine* 	TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void 			TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
	return;
}

void 			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return;
}