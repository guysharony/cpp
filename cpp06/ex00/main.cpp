﻿/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:00:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/14 15:17:14 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{	
		Convert			c(argv[1]);

		std::cout << "char: ";
		try {
			char tmp = c.getChar();
			std::cout << "'" << tmp << "'" << std::endl;
		} catch(const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "int: ";
		try {
			std::cout << c.getInt() << std::endl;
		} catch(const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "float: ";
		try {
			std::cout << std::setprecision(1) << std::fixed << c.getFloat() << "f" << std::endl;
		} catch(const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "double: ";
		try {
			std::cout << std::setprecision(1) << std::fixed << c.getDouble() << std::endl;
		} catch(const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}