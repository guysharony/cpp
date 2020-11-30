/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:47:33 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/30 11:47:57 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		virtual ~PowerFist();

		PowerFist & operator=(PowerFist const & src);

		virtual void 	attack(void) const = 0;
};

#endif