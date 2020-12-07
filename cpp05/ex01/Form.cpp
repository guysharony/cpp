/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 09:39:58 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 10:07:46 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
:
	_name(""),
	_gradeExecute(150),
	_gradeAssign(150)
{
	return;
}

Form::Form(std::string const name, int const gradeExecute, int const gradeAssign)
:
	_name(name),
	_gradeExecute(gradeExecute),
	_gradeAssign(gradeAssign)
{
	return;
}

Form::Form(Form const & src)
:
	_name(src._name),
	_gradeExecute(src._gradeExecute),
	_gradeAssign(src._gradeAssign),
	_assign(src._assign)
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
	this->_assign = this->getAssign();
	return (*this);
}

std::string const		Form::getName() const
{
	return (this->_name);
}

int	const				Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

int const				Form::getGradeAssign() const
{
	return (this->_gradeAssign);
}

bool					Form::getAssign() const
{
	return (this->_assign);
}

const char				*Form::GradeTooHighException::what() const throw()
{
	return ("This grade is too high.");
}

const char				*Form::GradeTooLowException::what() const throw()
{
	return ("This grade is too low.");
}