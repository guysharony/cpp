/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:58:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 11:33:35 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{		
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat				&operator=(Bureaucrat const & src);

		std::string	const 		getName(void) const;
		int						getGrade(void) const;

		void					upgrade(void);
		void					downgrade(void);

		void					signForm(Form &src);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
	private:
		Bureaucrat(void);
		std::string	const 	_name;
		int					_grade;	
};

std::ostream 		&operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif