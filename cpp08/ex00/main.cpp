/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:22:12 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 14:07:50 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::list<int>		listInt;

	for (int i = 0; i < 10; i++)
		listInt.push_back(i);

	std::cout << "<=== List Int ===>" << std::endl;
	try {
		int a = easyfind(listInt, 6);
		std::cout << "[Element  " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element  6: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(listInt, 10);
		std::cout << "[Element " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element 10: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(listInt, 9);
		std::cout << "[Element  " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element 9: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(listInt, 1);
		std::cout << "[Element  " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element 1: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(listInt, -5);
		std::cout << "[Element " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element -5: Doesn't exist in list]" << std::endl;
	}
	return (0);
}