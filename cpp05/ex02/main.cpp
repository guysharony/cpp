/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:22 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 09:53:08 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	Bureaucrat 					a("Human", 150);
	RobotomyRequestForm			c("27B");
	PresidentialPardonForm		d("27C");
	
	Form 						*b = new ShrubberyCreationForm("27A");
	
	try {
		a.signForm(*b);
		a.executeForm(*b);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		try {
			a.upgrade();
			std::cout << a.getName() << " upgrade to level " << a.getGrade() << std::endl;
		} catch (const std::exception& e) {
			std::cout << a.getName() << " cant upgrade because " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	
	try {
		a.signForm(*b);
		a.executeForm(*b);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		try {
			a.upgrade();
			std::cout << a.getName() << " upgrade to level " << a.getGrade() << std::endl;
		} catch (const std::exception& e) {
			std::cout << a.getName() << " cant upgrade because " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	try {
		a.signForm(*b);
		a.executeForm(*b);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}
	return (0);
}