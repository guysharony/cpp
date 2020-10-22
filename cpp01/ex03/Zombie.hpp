/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:06:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 10:16:26 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string const &name, std::string const &type);
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