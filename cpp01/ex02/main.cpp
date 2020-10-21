/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/21 10:21:16 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void) {
	ZombieEvent *znormal;
	ZombieEvent *zrandom;

	znormal = new ZombieEvent();
	znormal->setZombieType("Magicien");
	znormal->newZombie("Guy")->advert();

	zrandom = new ZombieEvent();
	zrandom->setZombieType("Randomizer");
	zrandom->randomChump()->advert(); 
	return (0);
}