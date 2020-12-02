/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:21:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 10:28:30 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon();

		AWeapon & operator=(AWeapon const & rhs);

		std::string const 	getName(void) const;
		int 				getAPCost(void) const;
		int 				getDamage(void) const;

		virtual void 		attack(void) const = 0;

	protected:
		std::string _name;
		int			_damage;
		int			_apcost;
};

#endif