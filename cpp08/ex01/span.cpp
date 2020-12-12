/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 14:10:59 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 15:03:37 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	return;
}

Span::Span(unsigned int n)
:
	_n(n)
{
	return;
}

Span::Span(Span const & src)
{
	*this = src;
	return;
}

Span::~Span()
{
	return;
}

Span const 	&Span::operator=(Span const & src)
{
	this->_n = src._n;
	this->_array = src._array;
	return (*this);
}

void			Span::addNumber(int n)
{
	if (this->_array.size() >= this->_n)
		throw Span::ArrayIsFull();
	this->_array.push_back(n);
}

int				Span::shortestSpan(void)
{
	if (this->_array.size() <= 1)
		throw Span::ArrayIsTooShort();
	int		r;
	int		t;
	for (int i = 0; i < this->_array.size(); i++)
	{
		t = this->_array[i + 1] - this->_array[i];
		t = (t < 0) ? -t : t;
		if (!i || (i && t < r))
			r = t;
	}
	return (r);
}

int				Span::longestSpan(void)
{
	if (this->_array.size() <= 1)
		throw Span::ArrayIsTooShort();
	std::vector<int>::iterator min = std::min_element(this->_array.begin(), this->_array.end());
	std::vector<int>::iterator max = std::max_element(this->_array.begin(), this->_array.end());
	return (*max - *min);
}

const char		*Span::ArrayIsFull::what() const throw()
{
	return ("Error: The list is full.");
}

const char		*Span::ArrayIsTooShort::what() const throw()
{
	return ("Error: The list doesn't contain enough elements.");
}