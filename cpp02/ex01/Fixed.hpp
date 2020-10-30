/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:50:19 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/30 09:22:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int cint);
		Fixed(const float cfloat);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);

		float toFloat(void) const;
		int toInt(void) const;
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
	private:
		int					_val;
		const static int 	_nbits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif