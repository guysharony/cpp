/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:26:04 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 14:00:08 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
:
	Form("PresidentialPardonForm", 25, 5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
:
	Form(name, 25, 5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
:
	Form(src)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	Form::operator=(src);
	return (*this);
}

void						PresidentialPardonForm::executeForm(Bureaucrat const & executor)
{
	Form::execute(executor);
	std::cout << this->getName() << " was forgiven by Zafod Beeblebrox." << std::endl;
	return;
}