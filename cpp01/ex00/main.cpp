/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:39:51 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 13:03:13 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony onStack("Tornado", "jumping", 7);

	onStack.age();
	onStack.activity();
}

void	ponyOnTheHeap(void)
{
	Pony	*ponyHeap;

	ponyHeap = new Pony("Snow", "running", 10);
	ponyHeap->age();
	ponyHeap->activity();
	delete ponyHeap;
}

int		main(void)
{
	std::cout << "[On The Stack]" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "[On The Heap]" << std::endl;
	ponyOnTheHeap();
	return (0);
}