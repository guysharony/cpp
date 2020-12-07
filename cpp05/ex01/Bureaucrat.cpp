/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:19 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 11:59:57 by gsharony         ###   ########.fr       */
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
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src.getGrade();
	return (*this);
}

std::string	const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade(void) const
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

void				Bureaucrat::signForm(Form &src)
{
	if (src.getSign())
		std::cout << this->getName() << " cant sign " << src.getName() << " because it is already signed" << std::endl;
	else
	{
		try
		{
			src.beSigned(*this);
			std::cout << this->getName() << " signs " << src.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << this->getName() << " cant sign " << src.getName() << " because " << e.what() << std::endl;
		}
	}
	return;
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

std::ostream 		&operator<<(std::ostream &o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (o);
}