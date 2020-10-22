/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:06:54 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 10:12:07 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_HPP
# define ZOMBIEHORDE_CLASS_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce(void) const;
	private:
		Zombie	*_zombie;
		int		_total;
};

#endif