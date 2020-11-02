/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:50:17 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/02 10:11:37 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const cint): _val(cint << this->_nbits) {
	std::cout << "Integer to fixed value constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const cfloat): _val((float)roundf(cfloat * (1 << this->_nbits))) {
	std::cout << "Float to fixed value constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
}

float Fixed::toFloat(void) const {
	return ((float)this->_val / (float)(1 << this->_nbits));
}

int Fixed::toInt(void) const {
	return (this->_val >> this->_nbits);
}

void Fixed::setRawBits(int const raw) {
	this->_val = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}