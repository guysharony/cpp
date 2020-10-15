/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:51:47 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/13 13:20:38 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

#include <iostream>

class Pony
{
	public:
		Pony(std::string name, std::string age);
		~Pony();

		void nameIs(void);
		void ageIs(void);

	private:
		std::string _name;
		std::string _age;
};

#endif