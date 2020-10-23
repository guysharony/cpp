/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/23 10:07:01 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string const &name, Weapon &weapon);
		~HumanA(void);
		
		void attack(void) const;
		
	private:
		std::string	name;
		Weapon &weapon;
};

#endif