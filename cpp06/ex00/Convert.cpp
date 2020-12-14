/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:01:36 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/14 15:52:43 by gsharony         ###   ########.fr       */
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
	this->_error = false;
	if (tmp.length() == 1 && !isdigit(input[0]))
		this->_input = static_cast<float>(input[0]);
	else {
		try {
			this->_input = std::stof(tmp);
			int	n = tmp.find(".");
			if (n != std::string::npos && tmp.find(".", n + 1) != std::string::npos)
				this->_error = true;
		} catch (const std::exception& e) {
			this->_input = 0;
			this->_error = true;
		}
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
	this->_error = false;
	if (tmp.length() == 1 && !isdigit(input[0]))
		this->_input = static_cast<float>(input[0]);
	else {
		try {
			this->_input = std::stof(tmp);
			int	n = tmp.find(".");
			if (n != std::string::npos && tmp.find(".", n + 1) != std::string::npos)
				this->_error = true;
		} catch (const std::exception& e) {
			this->_input = 0;
			this->_error = true;
		}
	}
	return;
}

char					Convert::getChar(void)
{
	char 				c = static_cast<char>(this->_input);

	if (this->_error || (this->_input != this->_input) || (this->_input < -2147483648) || (this->_input > 2147483647))
		throw Convert::ImpossibleException();
	if (c < 32 || c > 126)
		throw Convert::NonDisplayableException();
	return (c);
}

int						Convert::getInt(void)
{
	int 				c = static_cast<int>(this->_input);
	
	if (this->_error || (this->_input != this->_input) || (this->_input < -2147483648) || (this->_input > 2147483647))
		throw Convert::ImpossibleException();
	return (c);
}

float					Convert::getFloat(void) const
{
	if (this->_error)
		throw Convert::ImpossibleException();
	return (this->_input);
}

double					Convert::getDouble(void) const
{
	if (this->_error)
		throw Convert::ImpossibleException();
	return (static_cast<double>(this->_input));
}

const char				*Convert::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char				*Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}