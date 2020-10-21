/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:35:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/21 10:39:21 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CLASS_HPP
# define ZOMBIEEVENT_CLASS_HPP

#include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void 	setZombieType(std::string const &str);
		void	announce(void) const;

		Zombie 	*newZombie(std::string const &name);
		Zombie 	*randomChump(void);

	private:
		std::string _type;
};

#endif