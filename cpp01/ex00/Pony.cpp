/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:40:04 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 13:02:33 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string activity, int age) : _name(name), _favorite_activity(activity), _age(age) {
	std::cout << " [" << this->_name << " is here]" << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << " [" << this->_name << " went back home]" << std::endl;
	return;
}

void	Pony::age(void) const {
	std::cout << " [" << this->_name << "]: I'm " << this->_age << " years old." << std::endl;
	return;
}

void	Pony::activity(void) const {
	std::cout << " [" << this->_name << "]: My favorite activity is " << this->_favorite_activity << "." << std::endl;
	return;
}