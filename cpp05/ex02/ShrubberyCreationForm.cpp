/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:01:20 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 14:35:04 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
:
	Form("ShrubberyCreationForm", 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
:
	Form(name, 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
:
	Form(src)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	Form::operator=(src);
	return (*this);
}

void						ShrubberyCreationForm::executeForm(Bureaucrat const & executor)
{
	std::ofstream			file;

	Form::execute(executor);
	file.open(this->getName() + "_shrubbery");
	if (file.is_open())
	{
		file << "this is a test 1!" << std::endl;
		file << "this is a test 2!" << std::endl;
		file << "this is a test 3!" << std::endl;
	}
	file.close();
	return;
}