/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:44:12 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 13:00:20 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

#include <iostream>
#include <string>

class Pony {
	public:
		Pony(std::string name, std::string activity, int age);
		~Pony(void);

		void	age(void) const;
		void	activity(void) const;

	private:
		std::string _name;
		std::string _favorite_activity;
		int 		_age;

};

#endif