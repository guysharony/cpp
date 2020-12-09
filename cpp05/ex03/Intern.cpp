/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:16:24 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 13:54:20 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return;
}

Intern::~Intern()
{
	return;
}

Intern		&Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}