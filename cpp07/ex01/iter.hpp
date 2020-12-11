/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:37:32 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 11:11:36 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *array, int length, void (*fct)(T &prms))
{
	for (int i = 0; i < length; i++)
		fct(array[i]);
}

template <typename T>
void	decrByFive(T &a)
{
	a -= 5;
}

template <typename T>
void	change(T &a)
{
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		else if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
}

#endif