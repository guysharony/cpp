/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:19 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 12:05:28 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
:
	_name(name),
	_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

std::string	const	Bureaucrat::getName(void)
{
	return (this->_name);
}

int					Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

void				Bureaucrat::upgrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void				Bureaucrat::downgrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("This grade is too high.");
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("This grade is too low.");
}