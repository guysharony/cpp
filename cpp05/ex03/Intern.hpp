/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:16:27 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 13:54:28 by gsharony         ###   ########.fr       */
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

	private:
		typedef struct 		s_formlst
		{
			std::string		_name;
			Form			*(*fct)(std::string);
		}					t_formlst;
};

#endif