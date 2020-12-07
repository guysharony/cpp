/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:01:17 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 14:15:19 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
:
	Form("RobotomyRequestForm", 72, 45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
:
	Form(name, 72, 45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
:
	Form(src)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	Form::operator=(src);
	return (*this);
}

void						RobotomyRequestForm::executeForm(Bureaucrat const & executor)
{
	std::cout << "Vzzzzzzzz... Vzzzzzzzz... Vzzzzzzzz..." << std::endl;
	Form::execute(executor);
	std::cout << this->getName() << " was successfully robotomized." << std::endl;
	return;
}