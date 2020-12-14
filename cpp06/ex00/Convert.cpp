/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:01:36 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/14 14:38:12 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
:
	_input(0)
{
	return;
}

Convert::Convert(char *input)
{
	std::string	tmp;

	tmp = input;
	if (tmp.length() == 1 && !isdigit(input[0]))
		this->_input = static_cast<double>(input[0]);
	else {
		this->_input = atof(input);
	}
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
	this->_input = src.getDouble();
	return (*this);
}

void					Convert::setInput(char *input)
{
	std::string	tmp;

	tmp = input;
	if (tmp.length() == 1 && !isdigit(input[0]))
		this->_input = static_cast<double>(input[0]);
	else {
		this->_input = atof(input);
	}
}

char					Convert::getChar(void)
{
	char 				c = static_cast<char>(this->_input);
	
	if ((this->_input != this->_input) || (this->_input < -2147483648) || (this->_input > 2147483647))
		throw Convert::ImpossibleException();
	if (c < 32 || c > 126)
		throw Convert::NonDisplayableException();
	return (c);
}

int						Convert::getInt(void)
{
	int 				c = static_cast<int>(this->_input);
	
	if ((this->_input != this->_input) || (this->_input < -2147483648) || (this->_input > 2147483647))
		throw Convert::ImpossibleException();
	return (c);
}

float					Convert::getFloat(void) const
{
	return (static_cast<float>(this->_input));
}

double					Convert::getDouble(void) const
{
	return (this->_input);
}

const char				*Convert::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char				*Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}