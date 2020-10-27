/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/27 09:04:24 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void) {
	Zombie		*zombie;
	ZombieEvent zombieEvent;

	zombie = new Zombie("Michael", "Hacker");
	zombie->announce();
	delete zombie;

	zombie = zombieEvent.newZombie("Alex");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("Programmer");

	zombie = zombieEvent.newZombie("Guy");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("Random");

	zombie = zombieEvent.randomChump();
	delete zombie;
	return (0);
}