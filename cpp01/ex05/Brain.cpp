/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:13 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 11:35:05 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): _IQ(126), _neurons(1456725) {}

Brain::~Brain(void) {};

int	Brain::getIQ(void) {
	return (this->_IQ);
}

int	Brain::getNeurons(void) {
	return (this->_neurons);
}

std::string Brain::identifier(void) {
	std::stringstream stream;
	stream << "0x" << std::uppercase << std::hex << (long)this;
	return (stream.str());
}