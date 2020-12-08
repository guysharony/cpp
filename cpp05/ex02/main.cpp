/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:22 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 10:01:43 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	Bureaucrat 					a("Human", 150);
	
	std::cout << "<=== Testing form 1/3 ===>" << std::endl;
	Form 						*b = new ShrubberyCreationForm("SCF-27A");
	
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

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "<=== Testing form 2/3 ===>" << std::endl;
	Form 						*c = new RobotomyRequestForm("RMF-27B");
	
	try {
		a.signForm(*c);
		a.executeForm(*c);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 65; i++)
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
		a.signForm(*c);
		a.executeForm(*c);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 27; i++)
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
		a.signForm(*c);
		a.executeForm(*c);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "<=== Testing form 3/3 ===>" << std::endl;
	Form 						*d = new PresidentialPardonForm("PPF-27C");
	
	try {
		a.signForm(*d);
		a.executeForm(*d);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 20; i++)
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
		a.signForm(*d);
		a.executeForm(*d);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 20; i++)
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
		a.signForm(*d);
		a.executeForm(*d);
	} catch (const std::exception& e) {
		std::cout << a.getName() << " cant execute form because " << e.what() << std::endl;
	}
	return (0);
}