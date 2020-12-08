/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:55:49 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:40:09 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) 
:
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const &src) 
:
    Enemy(src)
{
    std::cout << "Gaaah. Break everything !" << std::endl;
    return;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

SuperMutant 	&SuperMutant::operator=(SuperMutant const & src)
{
    Enemy::operator=(src);
    return (*this);
}

void    		SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
	return;
}