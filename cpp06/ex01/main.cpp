/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 07:42:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 08:25:43 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int		main(void)
{
	void	*tmp1 = serialize();
	Data	*tmp2 = deserialize(tmp1);

	std::cout << "s1  [" << tmp2->s1 << "]" << std::endl;
	std::cout << "n   [" << tmp2->n << "]" << std::endl;
	std::cout << "s2  [" << tmp2->s2 << "]" << std::endl;
	return (0);
}