/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:21:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/30 11:46:13 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle();

		PlasmaRifle & operator=(PlasmaRifle const & src);

		virtual void 	attack(void) const = 0;
};

#endif