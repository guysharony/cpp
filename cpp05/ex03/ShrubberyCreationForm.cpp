/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:01:20 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 17:38:29 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
:
	Form("ShrubberyCreationForm", 137, 145)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
:
	Form(name, 137, 145)
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

void						ShrubberyCreationForm::executeForm(Bureaucrat const & executor) const
{
	std::ofstream			file;
	std::ostringstream		tree;
	std::string			name(this->getName() + "_shrubbery");

	this->getFormExpt(executor);
	file.open(name.c_str());
	if (file.is_open())
	{
		tree << "         ___            " << std::endl;
		tree << "    /---     ---\\      " << std::endl;
		tree << " /--             --\\   " << std::endl;
		tree << "|                   |   " << std::endl;
		tree << "|                   |   " << std::endl;
		tree << "|                   |   " << std::endl;
		tree << " \\   --       --   /    " << std::endl;
		tree << "   -    \\\\  //   -      " << std::endl;
		tree << "      \\\\//  \\\\//      " << std::endl;
		tree << "       \\\\    //       " << std::endl;
		tree << "        ==  ==          " << std::endl;
		tree << "         }}{{           " << std::endl;
		tree << "         }}{{           " << std::endl;
		tree << "         }}{{           " << std::endl;
		tree << "     /----------\\      " << std::endl;
		tree << "____/            \\____ " << std::endl;
		tree << "                        " << std::endl;
		tree << "         ___            " << std::endl;
		tree << "    /---     ---\\      " << std::endl;
		tree << " /--             --\\   " << std::endl;
		tree << "|                   |   " << std::endl;
		tree << "|                   |   " << std::endl;
		tree << "|                   |   " << std::endl;
		tree << " \\   --       --   /    " << std::endl;
		tree << "   -    \\\\  //   -      " << std::endl;
		tree << "      \\\\//  \\\\//      " << std::endl;
		tree << "       \\\\    //       " << std::endl;
		tree << "        ==  ==          " << std::endl;
		tree << "         }}{{           " << std::endl;
		tree << "         }}{{           " << std::endl;
		tree << "         }}{{           " << std::endl;
		tree << "     /----------\\      " << std::endl;
		tree << "____/            \\____ " << std::endl;
		file << tree.str();
	}
	file.close();
	return;
}
