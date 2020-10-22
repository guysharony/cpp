/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:13 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 14:47:46 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): _IQ(126), _neurons(1456725) {}

Brain::~Brain(void) {}

int	Brain::getIQ(void) const {
	return (this->_IQ);
}

int	Brain::getNeurons(void) const {
	return (this->_neurons);
}

std::string	Brain::identify(void) const {
	std::stringstream tmp;
	tmp << "0x" << std::uppercase << std::hex << (long)this;
	return (tmp.str());
}