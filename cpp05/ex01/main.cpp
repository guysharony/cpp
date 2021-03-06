/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:22 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 09:18:06 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat 	a("Human", 150);
	Form		b("28B", 149, 149);
	
	a.signForm(b);
	std::cout << std::endl;
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
	std::cout << std::endl;
	a.signForm(b);
	try {
		a.upgrade();
		std::cout << a.getName() << " upgrade to level " << a.getGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant upgrade because " << e.what() << std::endl;
	}
	a.signForm(b);
	std::cout << std::endl;
	try {
		a.upgrade();
		std::cout << a.getName() << " upgrade to level " << a.getGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant upgrade because " << e.what() << std::endl;
	}
	a.signForm(b);
	return (0);
}