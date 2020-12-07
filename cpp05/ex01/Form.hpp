/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 09:40:01 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 11:47:26 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const name, int const gradeExecute, int const gradeSign);
		Form(Form const & src);
		~Form();

		Form		&operator=(Form const & src);

		std::string const		getName() const;
		int						getGradeExecute() const;
		int						getGradeSign() const;
		bool					getSign() const;

		void					beSigned(Bureaucrat &src);

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
		Form(void);
		std::string const		_name;
		int	const				_gradeExecute;
		int	const				_gradeSign;
		bool					_sign;
};

#endif