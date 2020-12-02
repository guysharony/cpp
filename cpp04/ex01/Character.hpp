/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 07:21:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 10:53:08 by gsharony         ###   ########.fr       */
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
		void	_AEnable(Enemy*);
		void	_ADisable(void);
		
	protected:
		std::string	_name;
		int			_apcost;
		AWeapon		*_aweapon;

	public:
		Character(std::string const & name);
		Character & operator=(Character const & src);
		virtual ~Character();
		
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		
		std::string virtual getName() const;
		int					getAPCost() const;
		AWeapon				*getAWeapon() const;
};

std::ostream 	&operator<<(std::ostream &a, Character const &b);

#endif