/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:02:46 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/16 11:06:31 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		min(T const & a, T const & b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T		max(T const & a, T const & b)
{
	return ((a > b) ? a : b);
}

#endif