/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:22 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 09:17:52 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat a("Human", 150);
	
	try {
		a.upgrade();
		std::cout << a.getName() << " upgrade to level " << a.getGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant upgrade because " << e.what() << std::endl;
	}
	try {
		a.downgrade();
		std::cout << a.getName() << " downgrade to level " << a.getGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant downgrade because " << e.what() << std::endl;
	}
	try {
		a.downgrade();
		std::cout << a.getName() << " downgrade to level " << a.getGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant downgrade because " << e.what() << std::endl;
	}
	try {
		a.upgrade();
		std::cout << a.getName() << " upgrade to level " << a.getGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant upgrade because " << e.what() << std::endl;
	}
	return (0);
}