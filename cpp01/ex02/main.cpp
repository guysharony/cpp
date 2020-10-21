/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/21 10:54:43 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void) {
	Zombie	*zombie;
	ZombieEvent	*zombieEvent;

	zombie = new Zombie("Michael", "Hacker");
	zombie->announce();
	delete zombie;
	
	zombieEvent = new ZombieEvent();
	zombieEvent->setZombieType("Chump");
	zombieEvent->randomChump();
	delete zombieEvent;

	zombieEvent->setZombieType("Developer");
	
	zombie = zombieEvent->newZombie("Alex");
	zombie->announce();
	delete zombie;
	return (0);
}