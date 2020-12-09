/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:01:36 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 15:11:36 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
:
	_input(NULL)
{
	return;
}

Convert::Convert(std::string const & input)
:
	_input(input)
{
	return;
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return;
}

Convert::~Convert()
{
	return;
}

/*Convert				&Convert::operator=(Convert const & src)
{
	this->_input = src.getInput();
	return (*this);
}*/

/*std::string	const	Convert::getInput(void) const
{
	return (this->_input);
}

void				Convert::setInput(std::string const & input)
{
	this->_input = input;
}*/