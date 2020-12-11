/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:37:10 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 11:11:55 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::string strings[3] = {"This iS a tEst", "I d0n't LiKe TeA", "S0Me th1ng Is Wr0ng..."};
	
	std::cout << "<=== Decrement By Five ===>" << std::endl;
	iter(numbers, 10, &decrByFive);
	std::cout << "[";
	for (int i = 0; i < 10; i++)
	{
		std::cout << numbers[i];
		if (i < 9)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Change Caps ===>" << std::endl;
	iter(strings, 3, &change);
	std::cout << "[";
	for (int i = 0; i < 3; i++)
	{
		std::cout << strings[i];
		if (i < 2)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
	return (0);
}