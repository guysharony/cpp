/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:50:19 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/02 10:13:10 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const cint);
		Fixed(float const cfloat);
		Fixed(Fixed const & src);
		~Fixed(void);

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		Fixed & operator=(Fixed const & rhs);

		Fixed & operator++(void);
		Fixed operator++(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &min(const Fixed &a, const Fixed &b);
		const static Fixed &max(const Fixed &a, const Fixed &b);

		float toFloat(void) const;
		int toInt(void) const;
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
	private:
		int					_val;
		const static int 	_nbits = 8;

};

Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif