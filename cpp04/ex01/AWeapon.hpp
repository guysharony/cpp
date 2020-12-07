/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:21:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/07 08:36:13 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		std::string _name;
		int			_damage;
		int			_apcost;
		
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon();

		AWeapon 			&operator=(AWeapon const & src);

		std::string const 	getName() const;
		int 				getAPCost() const;
		int 				getDamage() const;

		virtual void 		attack() const = 0;
};

#endif