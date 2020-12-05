/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:22 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 12:14:14 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat a("Guy", 150);
	
	try {
		a.upgrade();
	} catch (std::exception e) {
		std::cout << "[Error with bureaucrat - \"" << a.getName() << "\"]: " << e.what() << std::endl;
	}
	try {
		a.downgrade();
	} catch (std::exception & e) {
		std::cout << "[Error with bureaucrat - \"" << a.getName() << "\"]: " << e.what() << std::endl;
	}
	try {
		a.downgrade();
	} catch (std::exception & e) {
		std::cout << "[Error with bureaucrat - \"" << a.getName() << "\"]: " << e.what() << std::endl;
	}
	return (0);
}