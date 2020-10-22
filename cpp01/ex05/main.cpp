/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:03 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 11:29:55 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int		main(void) {
	Brain *brain;

	brain = new Brain();
	std::cout << brain->identifier() << std::endl;
	delete brain;
	return (0);
}