/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 07:21:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 08:55:25 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character(void);
		std::string			_name;
		int					_apcost;
		AWeapon				*_aweapon;

	public:
		Character(std::string const & name);
		Character(Character const & src);
		~Character();

		Character 			&operator=(Character const & src);
		
		void 				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);
		
		std::string virtual	getName() const;
		int					getAPCost() const;
		AWeapon				*getAWeapon() const;
};

std::ostream 	&operator<<(std::ostream &a, Character const &b);

#endif