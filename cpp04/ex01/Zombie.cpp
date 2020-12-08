/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:37:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:39:50 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
:
    Enemy(70, "Zombie")
{
    std::cout << "* brains brains brains *" << std::endl;
    return;
}

Zombie::Zombie(Zombie const &src) 
:
    Enemy(src)
{
    std::cout << "* brains brains brains *" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "* Heuuuu... *" << std::endl;
    return;
}

Zombie 	&Zombie::operator=(Zombie const & src)
{
    Enemy::operator=(src);
    return (*this);
}