/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:45:03 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	*this = src;
	return;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
	return;
}

AssaultTerminator 	&AssaultTerminator::operator=(AssaultTerminator const & src)
{
	(void)src;
	return (*this);
}

ISpaceMarine		*AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void 				AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
	return;
}

void 				AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return;
}

void 				AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
	return;
}