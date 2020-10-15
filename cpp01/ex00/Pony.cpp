/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:51:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/13 13:29:19 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string age) {
	this->_name = name;
	this->_age = age;
}

Pony::~Pony(void) {}

void 	Pony::nameIs(void) {
	std::cout << "My name is " << this->_name << "!" << std::endl;
}

void 	Pony::ageIs(void) {
	std::cout << "I'm " << this->_age << " years old!" << std::endl;
}