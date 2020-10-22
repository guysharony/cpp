/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:06:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 10:12:52 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void) {
	ZombieHorde 	*zombie;
	int				size;

	size = 10;
	zombie = new ZombieHorde(size);
	zombie->announce();
	return (0);
}