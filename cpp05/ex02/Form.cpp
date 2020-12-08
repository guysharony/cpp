/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 09:39:58 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 09:50:14 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
:
	_name(""),
	_gradeExecute(150),
	_gradeSign(150),
	_sign(false)
{
	return;
}

Form::Form(std::string const name, int gradeExecute, int gradeSign)
:
	_name(name),
	_gradeExecute(gradeExecute),
	_gradeSign(gradeSign),
	_sign(false)
{
	if (gradeExecute < 1 || gradeSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeExecute > 150 || gradeSign > 150)
		throw Form::GradeTooLowException();
	return;
}

Form::Form(Form const & src)
:
	_name(src._name),
	_gradeExecute(src._gradeExecute),
	_gradeSign(src._gradeSign),
	_sign(src._sign)
{
	*this = src;
	return;
}

Form::~Form()
{
	return;
}

Form					&Form::operator=(Form const & src)
{
	this->_sign = src.getSign();
	return (*this);
}

std::string const		Form::getName() const
{
	return (this->_name);
}

int						Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

int						Form::getGradeSign() const
{
	return (this->_gradeSign);
}

bool					Form::getSign() const
{
	return (this->_sign);
}

void					Form::beSigned(Bureaucrat const & executor)
{
	if (executor.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else
		this->_sign = true;
	return;
}

void					Form::executeForm(Bureaucrat const & executor) const
{
	(void)executor;
	return;
}

void					Form::getFormExpt(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw Form::FormNotSignedException();
	if (this->getGradeExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
}

void					Form::execute(Bureaucrat const & executor) const
{
	this->getFormExpt(executor);
	this->executeForm(executor);
	return;
}

const char				*Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char				*Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char				*Form::FormNotSignedException::what() const throw()
{
	return ("the form is not signed");
}

std::ostream 			&operator<<(std::ostream &o, Form const & rhs)
{
	o << rhs.getName() << " form " << ((rhs.getSign()) ? "is signed" : "is not signed") << ", has an Execution Grade of " << rhs.getGradeExecute() << " and a Sign Grade of " << rhs.getGradeSign() << std::endl;
	return (o);
}