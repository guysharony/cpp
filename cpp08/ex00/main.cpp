/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:22:12 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/16 13:15:22 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::list<int>		listInt;
	std::vector<int>	vectorInt;

	for (int i = 0; i < 10; i++)
		listInt.push_back(i);

	for (int i = -5; i < 5; i++)
		vectorInt.push_back(i);

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

	std::cout << std::endl;
	std::cout << "<=== Vector Int ===>" << std::endl;
	try {
		int a = easyfind(vectorInt, -6);
		std::cout << "[Element " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element -6: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(vectorInt, -5);
		std::cout << "[Element " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element -5: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(vectorInt, 0);
		std::cout << "[Element  " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element  0: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(vectorInt, 3);
		std::cout << "[Element  " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element  3: Doesn't exist in list]" << std::endl;
	}

	try {
		int a = easyfind(vectorInt, 5);
		std::cout << "[Element  " << a << ": Exists in list]" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "[Element  5: Doesn't exist in list]" << std::endl;
	}
	return (0);
}