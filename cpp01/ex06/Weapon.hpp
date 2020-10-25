/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:56:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 17:17:18 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>
# include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string &getType(void) const;
		void setType(std::string str);

	private:
		std::string type;
};

#endif