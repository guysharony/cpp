/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:16:27 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 17:28:59 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern();

		Intern 		&operator=(Intern const & src);

		static Form		*newShrubberyCreationForm(std::string const & target);
		static Form		*newRobotomyRequestForm(std::string const & target);
		static Form		*newPresidentialPardonForm(std::string const & target);

		Form		*makeForm(std::string const & form, std::string const & target);

	private:
		typedef struct {
			std::string		_name;
			Form			*(*makeForm)(const std::string &);
		}					formlst;
};

#endif