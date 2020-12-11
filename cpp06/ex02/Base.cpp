/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:01:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 09:11:49 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() { return; }

void 	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	else if (dynamic_cast<B *>(p))
		std::cout << "B";
	else if (dynamic_cast<C *>(p))
		std::cout << "C";
}

void 	identify_from_reference(Base & p)
{
	try {
		A	a = dynamic_cast<A &>(p);
		std::cout << "A";
	} catch (std::bad_cast & bc) {}
	try {
		B	b = dynamic_cast<B &>(p);
		std::cout << "B";
	} catch (std::bad_cast & bc) {}
	try {
		C	c = dynamic_cast<C &>(p);
		std::cout << "C";
	} catch (std::bad_cast & bc) {}
}