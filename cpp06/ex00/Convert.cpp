/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:01:36 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/10 12:09:14 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
:
	_input(0)
{
	return;
}

Convert::Convert(std::string const & input)
{
	if (input.length() == 1 && !isdigit(input[0]))
		this->_input = static_cast<float>(input[0]);
	else
		this->_input = std::stof(input);
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

Convert					&Convert::operator=(Convert const & src)
{
	this->_input = src.getInput();
	return (*this);
}

float					Convert::getInput(void) const
{
	return (this->_input);
}

void					Convert::setInput(std::string const & input)
{
	if (input.length() == 1 && !isdigit(input[0]))
		this->_input = static_cast<float>(input[0]);
	else
		this->_input = std::stof(input);
}

std::string				Convert::getChar(void)
{
	std::ostringstream	tmp;
	char 				c = static_cast<char>(this->_input);
	
	if (this->_input != this->_input)
		tmp << "impossible";
	else if (c < 32 || c > 126)
		tmp << "Non displayable";
	else
		tmp << "'" << c << "'";
	return (tmp.str());
}