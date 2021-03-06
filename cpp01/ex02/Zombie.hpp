/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:31 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/27 08:57:47 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);

		void	advert(void) const;
		void	announce(void) const;

		void	setName(std::string name);
		void	setType(std::string type);

		std::string	getName(void) const;
		std::string	getType(void) const;

	private:
		std::string _name;
		std::string _type;
};

#endif