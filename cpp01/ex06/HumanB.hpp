/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 17:19:04 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void attack(void) const;
		void setWeapon(Weapon &weapon);

	private:
		std::string	name;
		Weapon 		*weapon;
};

#endif