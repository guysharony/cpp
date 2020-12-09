/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:01:14 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 09:39:03 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

		RobotomyRequestForm 		&operator=(RobotomyRequestForm const & src);

		void						executeForm(Bureaucrat const & executor) const;
};

#endif