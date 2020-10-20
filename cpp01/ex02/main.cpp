/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 15:21:01 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void) {
	ZombieEvent *z;

	z = new ZombieEvent();
	z->setZombieType("Magicien");
	z->newZombie("Guy")->advert();
	return (0);
}