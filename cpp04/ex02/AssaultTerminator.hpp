/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 10:14:59 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		AssaultTerminator & operator=(AssaultTerminator const & src);
		virtual ~AssaultTerminator();

		virtual ISpaceMarine* 	clone() const;
		virtual void 			battleCry() const;
		virtual void 			rangedAttack() const;
		virtual void 			meleeAttack() const;
};

#endif