/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:08 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 11:53:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void): _brain(new Brain()) {}

Human::~Human(void) {
	delete this->_brain;
}

Brain	Human::getBrain(void) const {
	return (*this->_brain);
}

std::string	Human::identify(void) {
	return (getBrain().identify());
}