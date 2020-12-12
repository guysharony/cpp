/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:16:24 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 17:28:29 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return;
}

Intern::~Intern()
{
	return;
}

Intern		&Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

Form		*Intern::newShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form		*Intern::newRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form		*Intern::newPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form		*Intern::makeForm(std::string const & form, std::string const & target)
{
	Form	*tmp;

	formlst	lst[3] = {
		{"shrubbery creation", newShrubberyCreationForm},
		{"robotomy request", newRobotomyRequestForm},
		{"presidential pardon", newPresidentialPardonForm}
	};
	for (int i = 0; i < 3; i++)
	{
		if (!lst[i]._name.compare(form))
		{
			tmp = lst[i].makeForm(target);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return (tmp);
		}
	}
	std::cout << "Intern can't create " << form << std::endl;
	return (NULL);
}