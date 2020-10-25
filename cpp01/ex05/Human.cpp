/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:08 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 15:43:33 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

const Brain &Human::getBrain(void) const {
	return (this->_brain);
}

std::string Human::identify(void) const {
	return (this->_brain.identify());
}