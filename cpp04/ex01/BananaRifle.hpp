/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BananaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:34:31 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:35:35 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANANARIFLE_CLASS_HPP
# define BANANARIFLE_CLASS_HPP

# include "AWeapon.hpp"

class BananaRifle : public AWeapon
{
	public:
		BananaRifle(void);
		BananaRifle(BananaRifle const & src);
		virtual ~BananaRifle();

		BananaRifle 	&operator=(BananaRifle const & src);

		virtual void 	attack(void) const;
};

#endif