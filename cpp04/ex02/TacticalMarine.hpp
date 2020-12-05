/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:56 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:44:28 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & src);
		virtual ~TacticalMarine();

		TacticalMarine 			&operator=(TacticalMarine const & src);

		virtual ISpaceMarine* 	clone() const;
		virtual void 			battleCry() const;
		virtual void 			rangedAttack() const;
		virtual void 			meleeAttack() const;
};

#endif