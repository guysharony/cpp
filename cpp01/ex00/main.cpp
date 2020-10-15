/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:51:41 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/13 13:31:53 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*ponyHeap;

	ponyHeap = new Pony("Snow", "5");
	ponyHeap->nameIs();
	ponyHeap->ageIs();
	delete ponyHeap;
}

void	ponyOnTheStack(void)
{
	Pony onStack("Michel", "6");

	onStack.nameIs();
	onStack.ageIs();
}

int		main(void)
{
	std::cout << "[On The Heap]" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "[On The Stack]" << std::endl;
	ponyOnTheStack();
	return (0);
}