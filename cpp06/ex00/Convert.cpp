/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:01:36 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/10 10:07:07 by gsharony         ###   ########.fr       */
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
	this->_init(input);
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

std::string				Convert::getInput(void) const
{
	return (this->_input);
}

void					Convert::setInput(std::string const & input)
{
	this->_input = input;
}

void					Convert::_init(std::string const & input)
{
	float				tmp;

	if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		tmp = static_cast<float>(input[1]);
	else
		tmp = std::stof(input);

	char 				c = static_cast<char>(tmp);
	
	std::cout << "char: ";
	if (tmp != tmp)
		std::cout << "impossible" << std::endl;
	else if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << c << '\'' << std::endl;
}