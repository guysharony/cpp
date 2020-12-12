/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:22:04 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 11:48:33 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int>				arrayInt(5);
	Array<float>			arrayFloat(5);

	Array<char>				arrayChar1(5);
	Array<char>				arrayChar2(5);
	Array< Array <char> >	arrayCharChar(2);

	std::cout << "<=== Array Int ===>" << std::endl;
	std::cout << "[Filling arrayInt with int from 0 to 4]" << std::endl;
	for (int i = 0; i < 5; i++)
		arrayInt[i] = i;
	std::cout << "[Printing arrayInt content]" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "|	arrayInt[" << i << "] = " << arrayInt[i] << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Array Float ===>" << std::endl;
	std::cout << "[Filling arrayFloat with float from 0.254 to 4.254]" << std::endl;
	for (int i = 0; i < 5; i++)
		arrayFloat[i] = i + 0.254;
	std::cout << "[Printing arrayFloat content]" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "|	arrayFloat[" << i << "] = " << arrayFloat[i] << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Array Char 1 ===>" << std::endl;
	std::cout << "[Filling arrayChar1 with char from \'a\' to \'e\']" << std::endl;
	for (int i = 0; i < 5; i++)
		arrayChar1[i] = 'a' + i;
	std::cout << "[Printing arrayChar1 content]" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "|	arrayChar1[" << i << "] = " << arrayChar1[i] << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Array Char 2 ===>" << std::endl;
	std::cout << "[Filling arrayChar2 with char from \'f\' to \'j\']" << std::endl;
	for (int i = 0; i < 5; i++)
		arrayChar2[i] = 'f' + i;
	std::cout << "[Printing arrayChar2 content]" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "|	arrayChar2[" << i << "] = " << arrayChar2[i] << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Array Char of Array Char ===>" << std::endl;
	std::cout << "[Filling arrayCharChar with arrayChar1 and arrayChar2]" << std::endl;
	arrayCharChar[0] = arrayChar1;
	arrayCharChar[1] = arrayChar2;
	std::cout << "[Printing arrayChar content]" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "|	arrayCharChar[0][" << i << "] = " << arrayCharChar[0][i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "|	arrayCharChar[1][" << i << "] = " << arrayCharChar[1][i] << std::endl;
	return (0);
}