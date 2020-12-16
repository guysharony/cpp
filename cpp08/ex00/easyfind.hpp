/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:22:09 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/16 13:05:16 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
int		easyfind(T &src, int i)
{
	typename T::iterator it = std::find(src.begin(), src.end(), i);
	if (it == src.end())
		throw std::exception();
	return *it;
}

#endif