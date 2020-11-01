/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:50:17 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/01 11:10:46 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _val(0) {}

Fixed::Fixed(const int cint): _val(cint << this->_nbits) {}

Fixed::Fixed(const float cfloat): _val((float)roundf(cfloat * (1 << this->_nbits))) {}

Fixed::Fixed(Fixed const & src) { *this = src; }

Fixed::~Fixed(void) {}

Fixed & Fixed::operator=(Fixed const &rhs) {
	this->_val = rhs.getRawBits();
	return (*this);
}

void Fixed::setRawBits(const int raw) {
	this->_val = raw;
}

int Fixed::getRawBits(void) const {
	return (this->_val);
}

float Fixed::toFloat(void) const {
	return ((float)this->_val / (float)(1 << this->_nbits));
}

int Fixed::toInt(void) const {
	return (this->_val >> this->_nbits);
}

Fixed Fixed::operator>(Fixed const & rhs) {
	return (this->_val > rhs.getRawBits());
}

Fixed Fixed::operator<(Fixed const & rhs) {
	return (this->_val < rhs.getRawBits());
}

Fixed Fixed::operator>=(Fixed const & rhs) {
	return (this->_val >= rhs.getRawBits());
}

Fixed Fixed::operator<=(Fixed const & rhs) {
	return (this->_val <= rhs.getRawBits());
}

Fixed Fixed::operator==(Fixed const & rhs) {
	return (this->_val == rhs.getRawBits());
}

Fixed Fixed::operator!=(Fixed const & rhs) {
	return (this->_val != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) {
	return (Fixed(this->_val + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rhs) {
	return (Fixed(this->_val - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const & rhs) {
	return (Fixed((this->_val * rhs.getRawBits()) >> this->_nbits));
}

Fixed Fixed::operator/(Fixed const & rhs) {
	return (Fixed((this->_val << rhs.getRawBits()) / this->_nbits));
}

Fixed & Fixed::operator++(void) {
	this->_val++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}