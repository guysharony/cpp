/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:31 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 15:02:04 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie(std::string const &name, std::string const &type);
		~Zombie(void);

		void	advert(void) const;
		
	private:
		std::string _name;
		std::string _type;
};

#endif